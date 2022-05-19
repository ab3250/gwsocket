
(define call-with-input-file 
  (lambda (filename proc)
    (let ((p (open-input-file filename)))
      (let ((str (proc p)))  
        (close-input-port p)
        str))))

(define call-with-output-file
  (lambda(filename proc str)
    (let ((p (open-output-file filename)))
      (proc str p)    
      (close-output-port p))))


(define (main args) 
  (let loop ()
    (let ((msg (call-with-input-file "/media/stor/gentoo-files/programs/Chibi/gwsocket/recv" read-line)))    
      (display msg)   
      (flush-output-port (current-output-port))      
     ; (cond 
     ;   ((string=? msg "button1")(call-with-output-file "/media/stor/gentoo-files/programs/Chibi/gwsocket/send" write-line (jsonify "cards" deck)))
     ;   ((string=? msg "button2")(call-with-output-file "/media/stor/gentoo-files/programs/Chibi/gwsocket/send" write-line (jsonify "cards" (knuth-shuffle deck))))
     ;   ((string=? msg "button3")(call-with-output-file "/media/stor/gentoo-files/programs/Chibi/gwsocket/send" write-line (jsonify "hide" deck)))) 
      (loop))))



