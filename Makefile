detected_OS := $(shell uname 2>/dev/null || echo Unknown)
compile : bash-learner.c
ifeq ($(detected_OS),Darwin)
		@echo $(detected_OS)
		gcc -o bash-learner bash-learner.c
		sudo mount -uw /
		sudo cp bash-learner /usr/bin
		bash-learner
endif   
ifeq ($(detected_OS),Linux)
		@echo $(detected_OS)
		gcc -o bash-learner bash-learner.c
		sudo cp bash-learner /bin
endif
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
update : bash-learner
	@echo "Updating"
	git pull
	ifeq ($(detected_OS),Darwin)
		@echo $(detected_OS)
		sudo mount -uw /
		sudo rm /usr/bin/bash-learner
		gcc -o bash-learner bash-learner.c
		sudo cp bash-learner /usr/bin
		bash-learner
	endif
	ifeq ($(detected_OS),Linux)
		@echo $(detected_OS)
		sudo rm /bin/bash-learner
		gcc -o bash-learner bash-learner.c
		sudo cp bash-learner /bin
	endif

