.PHONY: clean
clean_java: JAVA_FILES=$(shell find . -name '*.class')
clean_java: ; rm -f $(JAVA_FILES)
clean_c: C_FILES=$(shell find . -name '*.out')
clean_c: ; rm -f $(C_FILES)
clean_python: PYTHON_CACHE=$(shell find . -name '__pycache__')
clean_python: ; rm -rf $(PYTHON_CACHE)
clean: clean_java clean_c clean_python