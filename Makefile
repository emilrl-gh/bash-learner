detected_OS := $(shell uname 2>/dev/null || echo Unknown)
compile : bash-learner.c
ifeq ($(detected_OS),Darwin)
		@echo $(detected_OS)
		sudo mount -uw /
		sudo cp bash-learner /usr/bin
		bash-learner
endif   
ifeq ($(detected_OS),Linux)
		@echo $(detected_OS)
		gcc -o bash-learner bash-learner.c
		sudo cp bash-learner /bin
		bash-learner
endif
output : bash-learner.c        
	gcc -o output/bash-learner1 bash-learner.c
uninstall : bash-learner
ifeq ($(detected_OS),Darwin)
		@echo $(detected_OS)
		sudo mount -uw /
		sudo rm /usr/bin/bash-learner
endif
ifeq ($(detected_OS),Linux)
		@echo $(detected_OS)
		sudo rm /bin/bash-learner
endif
