	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	
	mov eax, 0
	call printf

	mov eax, 0
	ret
