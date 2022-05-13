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
        ((string=? msg "close")(display "closed")))) 
(loop)))