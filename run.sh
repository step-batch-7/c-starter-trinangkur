rm -rf bin
mkdir -p bin

executablePath=`echo $1 | sed s/.c$// | sed s/src/bin/`;
gcc -o ${executablePath} $1;
./${executablePath}