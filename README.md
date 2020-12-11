<b>How to know more windows.h header file?</b></br>
if you must stay in windows operating system otherwise you will get an error if you using other operating system just use virtual box.
Okay you just to need to go https://docs.microsoft.com/en-us/windows/win32/winprog/using-the-windows-headers if you stack with docomentation just simply go https://stackoverflow.com it will help you a lot.

<b>How to Add Graphics.h header file??</b></br>
DEV c++ Ide and External Graphics Library:

To develop this Paint Program, We will be using the DEV c++ IDE (Integrated Development Environment)  , Which you download from the official site of DEV c++ (http://www.bloodshed.net/devcpp.html), Also for handling the graphics we will be using the WinBGIm Graphics Library provided by the Computer Science department of Colorado University the full tutorial to implement the WinBGIm Graphics Library into Dev C++ ide can be read from the official site of WinBGIm Graphics Library (http://www.cs.colorado.edu/~main/bgi/dev-c++/  ).

Also the official documentation regarding the available functions and method that can used in the Graphics Library are provided by the official site of the library (http://www.cs.colorado.edu/~main/bgi/doc/  )
Preparation for program:

So to get started first of all download the latest version of DEV c++ , also download the Graphics Library and header file from the links provided above.

Then:

Copy the graphics.h file and paste it to the Include folder of Dev c++ ; usually it is:
“C:/Dev-Cpp/include” but it may vary according to the path where you install the dev c++ Ide.

Now copy the copy the libbgi.a file and paste it in the library folder of dev c++ ide ; usually it is:

“C:/Dev-Cpp/lib”

Now open the DEV c++ IDE and click on :

file>new>project>empty project

and choose a path where you would like to save your project and project name.
<img src="https://bestengineeringprojects.com/wp-content/uploads/2013/12/paint_program_devc.jpg">

Now click on:

file>new>source file

Now click alt+p   or click on: project>project option

And then click on “Parameters” tab and paste following code in the text field below linker:

-lbgi

-lgdi32

-lcomdlg32

-luuid

-loleaut32

-lole32

Now you are ready to code.
