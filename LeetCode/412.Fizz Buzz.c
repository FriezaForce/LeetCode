char ** fizzBuzz(int n, int* returnSize){
    char **result = (char**) malloc(n * sizeof(char*));
    *returnSize = n;
    int i;
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            result[i-1] = (char*) malloc(9 * sizeof(char));
            sprintf(result[i-1], "%s", "FizzBuzz");
        } else if (i % 3 == 0) {
            result[i-1] = (char*) malloc(5 * sizeof(char));
            sprintf(result[i-1], "%s", "Fizz");
        } else if (i % 5 == 0) {
            result[i-1] = (char*) malloc(5 * sizeof(char));
            sprintf(result[i-1], "%s", "Buzz");
        } else {
            result[i-1] = (char*) malloc(10 * sizeof(char));
            sprintf(result[i-1], "%d", i);
        }
    }
    return result;
}