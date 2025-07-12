# C Basics
## Conditionals

Conditionals are used to do decision making.

- if
- else if
- else

1. If statement is used to check if a condition is true
2. Else if is added to check further conditions
3. else is working if if or else if fails

Example:

```c
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n > 18) printf("Yes");
	else printf("No");
}
```