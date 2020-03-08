"""
The equivalent of a toggle switch that can tell you it's state.
"""

const setCache = (key, data) => SIGNALS.put(key, data);
const getCache = key => SIGNALS.get(key);

async function handleRequest(request) {
    var serviceStat = await getCache("ON_AIR");

    console.log(typeof(serviceStat))
    if (request.method === "GET") {
        return new Response(serviceStat, {status: 200});
    } else if (request.method === "PUT") {
        if (serviceStat === "0") {
            await setCache("ON_AIR", 1);
            return new Response((1), { status: 200 });
        } else {
            await setCache("ON_AIR", 0);
            return new Response((0), { status: 200 });
        }

    }
}

addEventListener('fetch', event => {
    event.respondWith(handleRequest(event.request))
})
