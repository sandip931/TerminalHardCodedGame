if not exist "executable" mkdir executable

::: compiles all files 
g++ -I include src/*.cpp -o executable/TicTacToe.exe

set /p choice=do you want to run executable (yes=y):

if %choice%==y (
   executable\TicTacToe.exe
 )
