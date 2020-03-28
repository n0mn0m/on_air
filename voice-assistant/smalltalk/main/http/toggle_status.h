#include <string.h>
#include <stdlib.h>
#include "esp_log.h"
#include "esp_tls.h"

#include "esp_http_client.h"

#define MAX_HTTP_RECV_BUFFER 512

/* 
   openssl s_client -showcerts -connect signal.unexpectedeof.casa:443 </dev/null
   The CA root cert is the last cert given in the chain of certs.
   To embed it in the app binary, the PEM file is named
   in the component.mk COMPONENT_EMBED_TXTFILES variable.
*/

extern const char unexpectedeof_casa_root_cert_pem_start[] asm("_binary_unexpectedeof_casa_root_cert_pem_start");
extern const char unexpectedeof_casa_root_cert_pem_end[]   asm("_binary_unexpectedeof_casa_root_cert_pem_end");

esp_err_t _http_event_handler(esp_http_client_event_t *evt);
void https_with_url(void);
