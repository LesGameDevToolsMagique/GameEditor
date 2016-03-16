import socket

s = socket.socket()
host = "localhost"
port = 12321

s.connect((host, port))

print("Welcome to the interactive Key/Press/Discover game !")
print("Type exit to exit the game or just ctrl+c :()")
print("Type a word on your keyboard to discover things")

key= ""

while key.upper() != "EXIT":
    key = str(input())
    if key != "":
        s.send(key.upper().encode())
        print("You typed: ", key)
        print(s.recv(1024).decode('utf-8'))
s.close

