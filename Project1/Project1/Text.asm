.586 

.MODEL flat, stdcall  

.CONST ; ������� ������ �������� 

MsgExit DB "Press Enter to Exit", 0ah,0dh,0 

.DATA ;����� ������, �� ������������ 

A1 DW 4 

B1 dw 3 

�1 DW 7 

M1 db "���� ���� ����" 

.DATA? ;����� �������������� ������ 

X DW ? 

; ������� �������� ���� 

.CODE 

; �������� ������� ExitProcess (��������� ��������) 

ExitProcess PROTO STDCALL :DWORD  

Start: ; ������� ��������� �������� 

; ������ ������� 

MOV AX, A1 

MOV X, AX 

ADD AX, B 

MOV A1, AX 

. 

Invoke ExitProcess, 0  

End Start 