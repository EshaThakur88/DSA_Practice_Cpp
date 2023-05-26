import socket
import uuid


# Host Name
print(socket.gethostname())


# IP address
print(socket.gethostbyname(socket.gethostname()))


# MAC address
print(':'.join(['{:02x}'.format((uuid.getnode() >> i) & 0xff) for i in range(0, 8, 8)][::-1]))s