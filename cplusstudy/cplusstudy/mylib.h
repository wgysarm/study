#ifndef _MYLIB_H_
#define _MYLIB_H_

#ifdef __cplusplus
extern "C"
{
#endif

int trimSpace(const char *str, char **trimstr);

int splitString(const char *strplit , const char splitchar ,char str[10][30], int *count);

#ifdef __cplusplus

}
#endif
#endif