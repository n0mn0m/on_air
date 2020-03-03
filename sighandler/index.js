const setCache = (key, data) => SIGNALS.put(key, data);
const getCache = key => SIGNALS.get(key);

/**
* Fetch given status based on key passed as query param
**/
async function getStatus(cacheKey) {
    console.log(cacheKey)
    var serviceStat = await getCache(cacheKey);
    console.log(serviceStat)

    if (!serviceStat) {
        return new Response('invalid status key', { status: 500 });
    } else {
        return new Response(serviceStat, {status: 200});
    }
}

/**
* Update status based on key passed as query param
**/
async function setStatus(cacheKey, cacheValue) {
    try {
        await setCache(cacheKey, cacheValue);
        return new Response((cacheKey + " set to " + cacheValue + "\n"), { status: 200 });
    } catch (err) {
        return new Response(err, { status: 500 });
    }
}

async function handleRequest(request) {
    var psk = await getCache("PSK")
    let presharedKey = new URL(request.url).searchParams.get('psk');
    let statusKey = new URL(request.url).searchParams.get('service');
    let statusValue = new URL(request.url).searchParams.get('status');

    console.log(statusKey)

    if (presharedKey === psk) {
        if (request.method === 'POST') {
            return setStatus(statusKey, statusValue);
        } else if (request.method === 'GET' && statusKey) {
            return getStatus(statusKey);
        } else {
            return new Response("\n", { status: 418 });
        }
        
    } else {
        return new Response("Hello")
    }
}


addEventListener('fetch', event => {
    event.respondWith(handleRequest(event.request))
})
