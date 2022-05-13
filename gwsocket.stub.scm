(c-include "chibi/eval.h")


;struct mg_mgr - An event manager that holds all active connections
;struct mg_connection - A single connection descriptor
;Event handler function defines connection's behavior
;mg_mgr_poll() iterates over all connections, accepts new connections,
;   sends and receives data, closes connections, and calls event handler functions
;   for the respective events.
;Each connection has two event handler functions:
;   c->fn and c->pfn. The c->fn is a user-specified event handler function.
;   The c->pfn is a protocol-specific handler function that is set implicitly.



(define-c void gwinit())
(define-c void recv_page())
(define-c string get_buf())
(define-c void send_page(string))
(define-c void set_buf(string))

