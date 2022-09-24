@ECHO Off
SET COMPILER_DIR=..\..\Compiler
SET PATH=%COMPILER_DIR%\SH_COFF\Other Utilities;%PATH%

rm -f ./cd/0.bin
rm -f *.o
rm -f ../source/*.o
rm -f ../ZTE/*.o
rm -f ./sl_coff.bin
rm -f ./sl_coff.coff
rm -f ./sl_coff.map
