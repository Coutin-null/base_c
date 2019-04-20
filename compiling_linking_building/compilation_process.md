<p> preprocessing </p>

```
	//The resultant intermediate file "hello.i" 
	//contains the expanded source code
	cc hello.c > hello.i
```
<p>compilation</p>

```
	//The compiler compiles the pre-processed source code into assembly
	//code for a specific processor

	cc -S hello.i

	//The -S option specific to produce assembly code, instead of object
	// code.The resultant assembly file is "hello.o".
```

<p>assembly</p>

```
	//The assembler converts the assembly code into machine code in
	//the object file "hello.o"

	as -o hello.o hello.s
```

<p>linker</p>

```
	//Finally ,the linker links the object code with the library code
	// with the library code to produce an executable file "hello.exe"

	ld -o hello.exe hello.o ...libraries...
```
