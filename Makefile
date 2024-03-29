CNAME = client
SNAME = server
CC = gcc
CFLAGS = -Wall -Wextra -Werror

CSRC = client.c utils.c
SSRC = server.c utils.c

all : $(CNAME) $(SNAME)

$(CNAME) :
	$(CC) $(CFLAGS) $(CSRC) -o $(CNAME)

$(SNAME) :
	$(CC) $(CFLAGS) $(SSRC) -o $(SNAME)

clean :
	rm -rf $(CNAME)
	rm -rf $(SNAME)

fclean : clean

re : fclean all

.PHONY : all clean fclean re
