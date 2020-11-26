All: testlist testsort
testlist:testlist.c list.c
	gcc testlist.c list.c -o testlist
testsort:testsort.c sort.c
	gcc testsort.c sort.c -o testsort

clean:
	rm testlist
	rm testsort
