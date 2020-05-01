compile : bash-learner.c

	gcc -o bash-learner bash-learner.c
	cp bash-learner /bin
	./bash-learner
