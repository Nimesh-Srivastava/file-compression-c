# File Compressor in C

Implement a run-length encoder to compress a file.

### Build Instructions

Compile using gcc:
```
gcc -o main main.c
```

### Usage

The program supports two modes:
```
./main compress
./main decompress
```

### Compression

Compress input from a file:
```
./main compress < input.txt > compressed.bin
```
Example
```
echo "aaaaabbbbcc" | ./main compress > out.bin
```
### Decompression

Decompress a previously compressed file:
```
./main decompress < compressed.bin > output.txt
```
Example
```
./main decompress < out.bin
```
