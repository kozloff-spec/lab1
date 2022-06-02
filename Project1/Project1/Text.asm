.586 

.MODEL flat, stdcall  

.CONST ; початок розділу констант 

MsgExit DB "Press Enter to Exit", 0ah,0dh,0 

.DATA ;розділ змінних, що ініціалізували 

A1 DW 4 

B1 dw 3 

С1 DW 7 

M1 db "Мама мила раму" 

.DATA? ;розділ неініціалізованих змінних 

X DW ? 

; початок сегменту коду 

.CODE 

; прототип функції ExitProcess (закінчення програми) 

ExitProcess PROTO STDCALL :DWORD  

Start: ; Початок виконання програми 

; машинні команди 

MOV AX, A1 

MOV X, AX 

ADD AX, B 

MOV A1, AX 

. 

Invoke ExitProcess, 0  

End Start 