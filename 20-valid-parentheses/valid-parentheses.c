bool isValid(char* s) {
    int n = strlen(s);
    char stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];     // push
        } 
        else {
            if (top == -1) return false;  // nothing to match

            char last = stack[top--];     // pop

            if ((s[i] == ')' && last != '(') ||
                (s[i] == '}' && last != '{') ||
                (s[i] == ']' && last != '[')) {
                return false;
            }
        }
    }

    return top == -1; 
}