:: Make sure that the Borland C++ compiler is on %PATH%
:: before running this file to build the HexDump utility.
::
:: Norman Dunbar April 2016


bcc32c -o MyPath.exe ..\MyPath\*.c

if exist MyPath.pdb (
    del /f MyPath.pdb 2>nul
)

if exist MyPath.tds (
    del /f MyPath.tds 2>nul
)

pause

