@ECHO Off
SET COMPILER_DIR=..\..\Compiler
SET PATH=%COMPILER_DIR%\SH_COFF\Other Utilities;%PATH%

rm -f ./cd/0.bin
rm -f *.o
rm -f ../src/source/*.o
rm -f ../src/TestSamples/*.o
rm -f ../ZTE/*.o
rm -f ./SCHOOL-BELL.bin
rm -f ./SCHOOL-BELL.coff
rm -f ./SCHOOL-BELL.map
