hash: hash_table.c 
	gcc -Wall hash_table.c 

test_result: unit_test.c hash_table.c
	gcc -Wall unit_test.c  hash_table.c -lcunit -o unit_test

clean:
	rm *.o hash test_result