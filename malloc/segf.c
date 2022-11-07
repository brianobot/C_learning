/**
 * segf - Let's segfault \o/
 *
 * Return: nothing.
 */
void segf(void)
{
    char *str;

    str = "Holberton";
    str[0] = 's';
}

// this is a special case that shows that string literals memory are not deallocated when they are out of scope

/**
 *  main - concept introduction
 *
 * Return: 0.
 */
int main(void)
{
    segf();
    return (0);
}