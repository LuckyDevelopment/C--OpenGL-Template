# What does this have?
This OpenGL Template has Glad, GLFW, FreeGlut, and OpenGL in C++, please read instructions below for installation. **This is a one time thing; you only have to go through the somewhat painful process of setting it up once, then you can just use the template again and again by download it here.**

# Instructions
This can be complicated so make sure to follow everything carefully.
___ 

1. Download VS Code. It can be found here: [VS Code Download](https://code.visualstudio.com/download)

2. Create a new folder on your computer, place it somewhere safe. Name it "Projects", this will hold all of your projects.
___ 

## Downloading the compiler

1. We will be using MinGW for C++ as our compiler. Download it here: [MinGW Installer](https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe)
2. Run the installer and follow the steps of the installation wizard. MSYS2 requires a 64 bit Windows 8.1 or newer.
3. In the installation wizard, choose your Installation Folder. Write down this directory for later as you will need it. The recommend directory if fine you want to use that one.
4. When complete, run MYSYS2 now by either checking the **Run MSYS2 now** box and clicking **Finish**, or searching up on your computer **MSYS2 MINGW64**, it should be a blue logo.
   
![image](https://github.com/LuckyDevelopment/C--OpenGL-Template/assets/144569592/20c30868-89a2-46f2-98f7-52c5b006c402)


5. In the terminal, install the MinGW-w64 toolchain by running this command: ``pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain``
6. Accept the default number of packages in the **toolchain** group by pressing **Enter**.
![image](https://github.com/LuckyDevelopment/C--OpenGL-Template/assets/144569592/205787fd-f181-4955-bcfc-8103caa51c08)

7. Enter **Y** when prompted whether to proceed with the installation.
8. Add the path to your MinGW-w64 **bin** folder to the Windows **PATH** environment variable by using the following steps:
     1. In the Windows search bar, type **Settings** to open your Windows Settings.
     2. Search for **Edit environment variables for your account.**
     3. In your **User variables**, select the **Path** variable and select **Edit**.
     4. Select **New** and add the MinGW-w64 destination folder that you wrote down during the installation process to the list. If you used the default settings above, then this path may be: ``C:\msys64\ucrt64\bin``
     5. Select **OK** to save the updated **PATH**. You will need to reopen any console windows for the new **PATH** location to be available.
9. Check that your MinGW-w64 tools are correctly installed and available by opening a **new** Command Prompt and type:
    ``
  gcc --version
  g++ --version
  gdb --version
    ``
11. You should see an output that states the versions of GCC, g++, and GDB you have installed. If one or more is broken, please retry the steps above, espescially the path variable.
___ 

## Downloading the program.

1. Download a zip file of the github repository.
2. Extract all files of it into a new folder.
3. Place the OpenGL_TEMPLATE inside the **Projects** folder you created earlier on your computer.
4. Open up VS Code if it's not already open.
5. In the top left corner, click **File**, then **Open Folder...**, and open up the "OpenGL_TEMPLATE" folder located inside your **Projects** folder.
6. If you get a warning to **Trust Authors**, click **Yes**.
7. Go to the extensions tab on the left side, it's a 2x2 square with another square popping out of it.
   
![image](https://github.com/LuckyDevelopment/C--OpenGL-Template/assets/144569592/42667b4c-4190-4230-82df-403bcea69050)

8. Download these extensions by searching them up, then clicking on them, and clicking the install button.
     1. C/C++
     2. C/C++ Extension Pack
     3. C/C++ Runner
     4. Intellicode
     5. Intellicode API Usage Examples
     6. Shader languages support for VS Code
     7. .NET Install tool
9. Once you have installed all of the extensions, go back to your **Explorer**, it's the folder button on the left side of your screen. If the explorer panel isn't open, press **Ctrl + B** to pop it open.
    
![image](https://github.com/LuckyDevelopment/C--OpenGL-Template/assets/144569592/9cb14eeb-0646-499f-bfbc-1b3a074a601e)

10. Click on **main.cpp** to open it up. This is your C++ program, you can switch programs by clicking the program names at the top of your screen.
11. Open up the **.vscode** folder, and then open up **c_cpp_properties.json**.

![image](https://github.com/LuckyDevelopment/C--OpenGL-Template/assets/144569592/5584e6e0-a376-47df-9155-7479e68981b8)

** ON THESE PATHS, MAKE SURE TO REPLACE BACK SLASHES (\) WITH FRONT SLASHES (/). ALMOST ALL FOLDERS AND FILES HERE WILL WHERE YOU INSTALLED MINGW, IF YOU USED THE DEFAULT SETTINGS IT SHOULD BE AT ``C:\msys64\``!**
12. There are lot of things to change here, step one is to go to line 7, this is the path to your **include folder** for MinGW. Paste in the directory to your include folder here. To get to it, open up file explorer and go to the directory where you installed MSYS64. It usually can be found at ``C:\msys64`` if you used the default install path. Navigate through your **msys64** folder and find the one that says **mingw64**, open up this folder and find another folder called **include**. Open it up, and at the top of the file explorer, copy the directory to it, and replace it with the directory on line 7. My include path was ``C:\msys64\mingw64\include``. Make you replace the backslashes (\) with frontslashes (/).
13. You can repeat step 12 for line 9, find the **include** folder inside your **ucrt64** folder inside the **msys64** directory. Mine was at ``C:\msys64\ucrt64\include``.
14. Go through the rest of the lines that have comments that say replace the path with your path, and you can find most of the files and folders inside your **msys64** folder. **Most of these paths might already be correct! Just make sure you find the files and folders there and see them!**
15. Inside the **.vscode** folder open up **launch.json**. There is another comment on line 14, just replace the path there with the path to your gdb debugger. It will be inside the **msys64** folder.
___ 

## Installing Glut
1. Open up **MSYS2 MINGW64** blue applcation again, it will open up a terminal.

![image](https://github.com/LuckyDevelopment/C--OpenGL-Template/assets/144569592/5f49383f-59ca-4253-8b62-912d25915235)

2. Paste in this code to install glut, ``pacman -S mingw-w64-x86_64-freeglut``.
3. It will install freeglut to your **msys64** folder, remember the freeglut path for later. Mine was at ``C:\msys64\mingw64\include`` this location.
4. Back in VS Code, open up the **.vscode** folder and then open up **tasks.json**. At all of the comments, replace the paths to where they say to. Remember, these will almost all be inside your **msys64** folder.
___ 

## Running
1. Go back to the **main.cpp** file in VS Code, it's ok if IntelliSense says there are errors.
2. Now, press **F5** on your computer to build and start debugging the program! A window should pop up with a red square in the middle.
3. To stop it, press the red square button at the top.

![image](https://github.com/LuckyDevelopment/C--OpenGL-Template/assets/144569592/42dcea9c-52c6-4f57-ae16-b23ad8f345fd)

4. If there are any include errors, make sure to check all the **.json** files to make sure your paths are correct. If you press **F5** and nothing happens, search it up.
5. Now your program is ready, just code in **main.cpp* and do everything you want.

**YOU ONLY HAVE TO DO THIS SETUP ONCE. ONCE THE PROGRAM IS WORKING, MAKE A COPY OF IT SO THAT YOU CAN JUST DUPLICATE IT EVERY TIME YOU WANT TO MAKE A NEW PROGRAM.**
___




> Some information is used from here: [Used Information](https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites)
