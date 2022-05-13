(define-library (gwsocket)
  (import
    (scheme base))
  (export
	gwinit
	;recv_page
	get_buf
	set_buf
	send_page)
	(include-shared "gwsocket")
)

