// ==========================================================
// alterIWnet project
// 
// Component: aiw_client
// Sub-component: steam_api
// Purpose: Various generic utility functions.
//
// Initial author: NTAuthority
// Started: 2010-09-10
// ==========================================================

void Trace(char* source, char* message, ...);
const char *va( const char *fmt, ... );

#define GAME_FLAG_OFFLINE		(1 << 0)
#define GAME_FLAG_NOSTEAM		(1 << 1)
#define GAME_FLAG_CONSOLE		(1 << 2)

#define GAME_FLAG(x)			((_gameFlags & x) == x)

extern unsigned int _gameFlags;
void DetermineGameFlags();
wchar_t *convertCharArrayToLPCWSTR(const char* charArray);
void callVoid(DWORD address);