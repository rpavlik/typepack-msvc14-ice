call "%VS140COMNTOOLS%\vsvars32.bat"

"%VSINSTALLDIR%\VC\Clang 3.7\bin\x86\clang" -c ContainsC1001.cpp

"%VSINSTALLDIR%\VC\Clang 3.7\bin\x86\clang" -c PushFrontC1001.cpp

pause