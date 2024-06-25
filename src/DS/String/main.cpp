#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50
typedef struct {
	char ch[MaxSize];
	int length;
} SString;

int Index(SString s, SString t) {
	int i = 1, j = 1;
	while (i <= s.length && j <= t.length) {
		if (s.ch[i] == t.ch[j]) {
			i++;j++;
		} else{
			i = i - j + 2;
			j = 1;
		}
	}
	if (i > t.length) return i - t.length;
	else return 0;
}
