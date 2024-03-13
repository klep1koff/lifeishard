AREA STACK, READWRITE
stack_top  EQU 0x400
   PRESERVE8
   AREA RESET, DATA, READONLY
   DCD stack_top

   AREA Prog1, CODE, READONLY
   THUMB
const1   EQU 0xFF;
   EXPORT start
   ENTRY
start

   MOVS R0,#const1
   MOVS R1,#20
   ADDS R2, R0, R1
   PUSH {R0,R1,R2}
   B .
   END


fileshare by me. Opened and unsecure
