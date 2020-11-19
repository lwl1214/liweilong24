#this is sample
testlist:testlist.c list.c
	gcc testlist.c list.c -o testlist

clean:
	rm testlist
