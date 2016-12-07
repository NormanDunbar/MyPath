MyPath
=======

``MyPath`` is a simple/useless Windows utility to dump out the ``%PATH%`` environment variable with a single search path per line. This is useful (to me) as I cannot be bothered any more to try and look along a huge PATH of folder names looking for the semi-colons that separate them.  Lazy? No, getting too old for this stuff!

``MyPath`` takes the current value of ``%PATH%`` and prints it out. After each and every semi-colon, it prints a newline, so each folder in ``%PATH%`` starts on a separate line. The semi-colon is printed, when found, which is useful if you ever want to interrogate the ``%PATH%`` and do a quick modification ebfore putting it all back together again and resetting ``%PATH%``.

You might be surprised how often you (ok, I) have to do this!


Compiling
---------

If you have the excellent Embarcadero C++ 10.1 compiler, then there's a build file in the ``release`` and ``debug`` folders that will build the code for you. You can get the compiler free (for all time) from `Embarcadero Free Tools <https://www.embarcadero.com/free-tools>`__. Sign up for an account, download, unzip, add ``bin`` to ``%PATH%``. That's it!

If you have another compiler, then do whatever you must to compile a single C file into an executable. I have not tried any other Windows C compilers, I'm a big fan of the old Borland Tools and don't use anything else. (Well, ``GCC`` of course, on Linux!)

Possibly the following will work::

    cd SourceCode\MyPath\Release
    your_compiler_name -o MyPath.exe ..\MyPath\MyPath.c
    
Where 'your_compiler_name' is what you use to call your compiler on the command line.


Execution
---------

Once compiled, the utility is simple to use::

    MyPath

That's all there is to it. Here's an example::

c:\>mypath

    C:\app\ndunbar\product\11.2.0\client_2.64bit\bin;
    C:\app\ndunbar\product\11.2.0\client_1\bin;
    C:\Windows\system32;
    C:\Windows;
    ...
    C:\Program Files (x86)\GitExtensions\;
    C:\Program Files\Git\cmd;
    C:\Program Files (x86)\WinMerge;
    c:\users\ndunbar\utilities;
    "C:\Users\ndunbar\AppData\Local\Programs\Python\Python35-32";
    "C:\Users\ndunbar\AppData\Local\Programs\Python\Python35-32\Scripts";
    "C:\Program Files\SlikSvn\bin";
    "C:\Users\ndunbar\Downloads\Borland Cpp Compiler\BCC101\bin";
    "C:\Users\ndunbar\AppData\roaming\Python\Python35-32";
    "C:\Users\ndunbar\AppData\roaming\Python\Python35-32\Scripts";
    C:\Users\ndunbar\AppData\Local\Pandoc\;
    C:\Users\ndunbar\AppData\Local\Programs\MiKTeX 2.9\miktex\bin\;
    C:\Program Files (x86)\Java\jre1.8.0_111\bin
    ...
    
Enjoy.