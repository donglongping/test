
#include <iostream>
#include <time.h>
#include <windows.h>

#ifdef D_DEBUG
#define Print(fmt, ...)		\
{	\
	time_t t = clock();	\
	struct tm ttt = *localtime(&t);	\
	fprintf(stdout, "[%5d %4d-%02d-%02d %02d:%02d:%02d][%s:%s:%d]     " fmt"",	\
	GetCurrentProcessId(), ttt.tm_year + 1990, ttt.tm_mon + 1, ttt.tm_mday,	\
	ttt.tm_hour, ttt.tm_min, ttt.tm_sec,	\
	__FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);	\
}
#endif

#ifdef D_DEBUG
#define INFO(fmt, ...)		\
{	\
	time_t t = clock();	\
	struct tm ttt = *localtime(&t);	\
	fprintf(stdout, "[INFO][%5d %4d-%02d-%02d %02d:%02d:%02d][%s:%s:%d]     " fmt"",	\
	GetCurrentProcessId(), ttt.tm_year + 1990, ttt.tm_mon + 1, ttt.tm_mday,	\
	ttt.tm_hour, ttt.tm_min, ttt.tm_sec,	\
	__FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);	\
}
#endif

#ifdef D_DEBUG
#define ERROR(fmt, ...)		\
{	\
	time_t t = clock();	\
	struct tm ttt = *localtime(&t);	\
	fprintf(stderr, "[ERROR][%5d %4d-%02d-%02d %02d:%02d:%02d][%s:%s:%d]     " fmt"",	\
	GetCurrentProcessId(), ttt.tm_year + 1990, ttt.tm_mon + 1, ttt.tm_mday,	\
	ttt.tm_hour, ttt.tm_min, ttt.tm_sec,	\
	__FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);	\
}
#endif


void main()
{
	ERROR("hello world");

	return;
}





