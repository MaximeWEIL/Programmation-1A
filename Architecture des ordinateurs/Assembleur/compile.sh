if test $# -ne 1; then
	echo $0 prg.asm
	exit 1
fi
name=`basename $1 .asm`
nasm -f elf $name.asm
gcc $name.o -o $name

