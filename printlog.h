#include <stdarg.h>
#define printlog(fmt, ...) printlog_(__FILE__, __FUNCTION__, __LINE__, fmt, ##__VA_ARGS__)
static void printlog_(const char* filename, const char* funcname, const int lineno, const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "[FILENAME: %s, FUNCNAME: %s, LINENO: %d] ", filename, funcname, lineno);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
}
