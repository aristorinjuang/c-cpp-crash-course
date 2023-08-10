hello:
	g++ 01_hello/hello.cpp -o 01_hello/hello && ./01_hello/hello
hello_c:
	gcc 01_hello/hello.c -o 01_hello/hello && ./01_hello/hello

variables:
	g++ 02_variables/variables.cpp -o 02_variables/variables && ./02_variables/variables
variables_c:
	gcc 02_variables/variables.c -o 02_variables/variables && ./02_variables/variables

input:
	g++ 03_input/input.cpp -o 03_input/input && ./03_input/input
input_c:
	gcc 03_input/input.c -o 03_input/input && ./03_input/input

control:
	g++ 04_control/control.cpp -o 04_control/control && ./04_control/control
control_c:
	gcc 04_control/control.c -o 04_control/control && ./04_control/control

pointer:
	g++ 05_pointer/pointer.cpp -o 05_pointer/pointer && ./05_pointer/pointer
pointer_c:
	gcc 05_pointer/pointer.c -o 05_pointer/pointer && ./05_pointer/pointer

struct:
	g++ 06_struct/struct.cpp -o 06_struct/struct && ./06_struct/struct
struct_c:
	gcc 06_struct/struct.c -o 06_struct/struct && ./06_struct/struct

union:
	g++ 07_union/union.cpp -o 07_union/union && ./07_union/union
union_c:
	gcc 07_union/union.c -o 07_union/union && ./07_union/union

enum:
	g++ 08_enum/enum.cpp -o 08_enum/enum && ./08_enum/enum
enum_c:
	gcc 08_enum/enum.c -o 08_enum/enum && ./08_enum/enum

mapset:
	g++ 09_mapset/mapset.cpp -o 09_mapset/mapset && ./09_mapset/mapset

vector:
	g++ 10_vector/vector.cpp -o 10_vector/vector && ./10_vector/vector