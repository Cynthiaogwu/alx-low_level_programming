<<<<<<< HEAD
 global    main
=======
global    main
>>>>>>> 09482b60abf586cdee1c6edb8735f26609cf8695
          extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
format: db `Hello, Holberton\n`,0
