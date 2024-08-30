
extern void change_system_clock(int system_clock);

// We dont have to put extern because in this kind of situations it is already assumed that it is external and program corrects it automatically.

extern int mainPrivateData;

// So this is a declaration, not definition. It is already defined in Source.c but here we declared that there is a variable-> 
// int mainPrivateData and it is external variable from another file(extern command)

void source2_myFun1(void)
{
	mainPrivateData = 100;

	change_system_clock(0);

	// Even this function is from another file in same project we can reach this function without extern it.
}