detected_OS := $(shell uname 2>/dev/null || echo Unknown)
compile : src/bash-learner.c
ifeq ($(detected_OS),Darwin)
			@echo $(detected_OS)
			gcc -o bash-learner src/bash-learner.c
			./bash-learner
endif   
ifeq ($(detected_OS),Linux)
			@echo $(detected_OS)
			gcc -o bash-learner src/bash-learner.c
			sudo cp bash-learner /bin
endif
uninstall : bash-learner
ifeq ($(detected_OS),Darwin)
		@echo $(detected_OS)
		sudo rm bash-learner
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
		sudo rm src/bash-learner
		@echo "removed old bin"
		gcc -o bash-learner src/bash-learner.c
		@echo "copying"
		./bash-learner
endif
ifeq ($(detected_OS),Linux)
		@echo $(detected_OS)
		sudo rm /bin/bash-learner
		gcc -o bash-learner src/bash-learner.c
		sudo cp bash-learner /bin
endif
workflows : src/bash-learner.c
ifeq ($(detected_OS),Darwin)
			@echo $(detected_OS)
			gcc -o bash-learner src/bash-learner.c
endif   
ifeq ($(detected_OS),Linux)
			@echo $(detected_OS)
			gcc -o bash-learner src/bash-learner.c
			sudo cp bash-learner /bin
endif
