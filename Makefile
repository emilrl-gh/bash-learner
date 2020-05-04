compile : bash-learner.c

	gcc -o bash-learner bash-learner.c
	cp bash-learner /bin
	./bash-learner

output : bash-learner.c
        
	gcc -o output/bash-learner1 bash-learner.c
