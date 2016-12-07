:: Make sure that the Borland C++ compiler is on %PATH%
:: before running this file to build the HexDump utility.
::
:: Norman Dunbar April 2016


:: Turns on source debugging (-v).
:: But, I'm not sure it does anything useful as the release and
:: debug files appear to be the same size. Hmmm.

bcc32c -v -o MyPath.exe ..\MyPath\*.c

if exist MyPath.pdb (
    del /f MyPath.pdb 2>nul
)

if exist MyPath.tds (
    del /f MyPath.tds 2>nul
)

pause

