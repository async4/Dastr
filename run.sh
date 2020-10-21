if [ ! -d "Build" ]
then
   mkdir Build
fi

cd Build

clear
cmake ..
make
make test
./Source/dastr
cd ..
