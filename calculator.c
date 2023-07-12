int multiply(int* a, int* b) {
    return (*a) * (*b);
}
int subtract(int* a, int* b) {
    return (*a) - (*b);
}
int add(int* a, int* b) {
    return (*a) + (*b);
}

int divide(int* a, int* b) {
    if (*b == 0) {
        printf("Error: Division by zero is not allowed.");
        exit(1);
    }
    return (*a) / (*b);
}


int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int sum = add(&num1, &num2);
    printf("Sum: %d\n", sum);
    
    int difference = subtract(&num1, &num2);
    printf("Difference: %d\n", difference);
    
    int product = multiply(&num1, &num2);
    printf("Product: %d\n", product);
    
    int quotient = divide(&num1, &num2);
    printf("Quotient: %d\n", quotient);
    
    return 0;
}