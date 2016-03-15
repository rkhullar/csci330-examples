# author	:  Rajan Khullar
# created	:  02/15/16
# updated	:  02/15/16

rebuild: clean compile

clean:
	@rm -rf target.class *~

compile: target.java
	@javac target.java

test: rebuild
	@java target "hello world" 10
