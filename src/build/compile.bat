@ECHO Off
SET COMPILER_DIR=..\..\..\Tools\Compiler
SET PATH=%COMPILER_DIR%\SH_COFF\Other Utilities;%COMPILER_DIR%\SH_COFF\sh-coff\bin;%COMPILER_DIR%\TOOLS;%PATH%
make re
JoEngineCueMaker
CALL clean.bat
SET /P AREYOUSURE=Run the game? (Y/[N])?
IF /I "%AREYOUSURE%" NEQ "Y" GOTO END
CALL Mednafen.bat
:END