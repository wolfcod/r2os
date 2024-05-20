# Script to create an image in ../bin/disk00.bin

# 1.44Mb device
dd if=/dev/zero of=./bin/disk00.bin bs=512 count=2880
mkfs.fat ./bin/disk00.bin
