#include "console/con_public.h"

#include "forward/cl_public.h"
#include "sys/sys_public.h"

// TODO: Use ioq3's con_tty (or at least the stuff from the old sys/sys_main.cpp)

void Con_CreateConsole( const char *message )
{
	// TODO
}

void Con_ShowConsole( int level, qboolean quitOnClose )
{
	// TODO
}

void Con_Print( const char *message )
{
	// TODO
	fputs( message, stdout );
}

void Con_ShowError( const char *message )
{
	// TODO?
	fputs( message, stderr );
}

void Con_Frame( void )
{
	// TODO
}

void Con_DestroyConsole( void )
{
	// TODO
}
