<p>headers(.h)</p>

```
	the compiler needs the header files to compile the source codes;
	the include-paths are specified via -I dir option(or environment 
varieables CPATH).Since the header's filename is known, the compiler only need 
the directory.
```

<p>static libraries(.lib, .a)</p>

```	
	the linker searchs the so-called libarary-paths for libraries
	needed to link the program into an executable. The library-path is
	specified via -Ldir option.

	and
	
	in unixes, the library libxxx.a is specified via -lxxx option
	the linker needs to know both the directories as well as the library
	names.Hence, options need to be specified.
```

<p>shared libraries(.dll, .so)</p>

```
	the compiler and linker will not find the headers/libraries unless you set the appropriate options, which is not obvious for first time user.
```
