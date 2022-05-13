(import
  (chibi time)  
  (scheme base)
  (scheme red)  
  (gwsocket)
  (schemepunk json)  
  (srfi 1)
  (wslib)
  (delay))


(define (main args) 
 (let loop ()
    (gwinit)
    (let ((msg (get_buf)))
    (display msg)
    (cond 
        ((string=? msg "button1")(send_page (jsonify "cards" deck)))
        ((string=? msg "button2")(send_page (jsonify "cards" (knuth-shuffle deck))))     
       ; ((string=? msg "button3")(send_page (jsonify "dots" deck2) 1))
       ; ((string=? msg "button4")(ws_send_str deck2string))
        ((string=? msg "close")((display "closed"))))) 
(loop)))

 