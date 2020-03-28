#include <string.h>
#include <stdlib.h>
#include "esp_log.h"
#include "esp_tls.h"

#include "esp_http_client.h"

#define MAX_HTTP_RECV_BUFFER 512

static const char *TAG = "HTTPS_HANDLING";
static const char *URL = "https://signal.unexpectedeof.casa/on-air";

extern const char unexpectedeof_casa_root_cert_pem_start[] asm("_binary_unexpectedeof_casa_root_cert_pem_start");
extern const char unexpectedeof_casa_root_cert_pem_end[]   asm("_binary_unexpectedeof_casa_root_cert_pem_end");

esp_err_t _http_event_handler(esp_http_client_event_t *evt);
void https_with_url(void);
