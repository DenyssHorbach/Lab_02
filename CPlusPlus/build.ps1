# build.ps1
g++ -c Rectangle.cpp -o Rectangle.o
g++ -shared -o libRectangle.dll Rectangle.o "-Wl,--out-implib,libRectangle.a"
g++ main.cpp -L. -lRectangle -o app.exe
Write-Host "Done!" -ForegroundColor Green