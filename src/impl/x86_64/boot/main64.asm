;
; TECHOS-C
;
global long_mode_start
extern kernel_early
extern kernel_main

section .text
bits 64
long_mode_start:
    ; load null into all data segment registers
    mov ax, 0
    mov ss, ax
    mov ds, ax
    mov es, ax
    mov fs, ax
    mov gs, ax

    ; KERNEL_EARLY - does stuff before kernel starts
	call kernel_early
    ; KERNEL_MAIN - the kernel
    call kernel_main
    hlt
