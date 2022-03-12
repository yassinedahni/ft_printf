# ft_printf


ft_printf is a project that mimics the real printf function.
Although wide in scope, it’s not a difficult project.

Since we need to print stuff, we will use the function write() extensively in this project. Remember that write() is a function of type int that returns the number of characters printed out.

ft_printf will loop through a string and will evaluate it.
As long as the string is not a %, you will keep printing what you read.
When you encounter a %, you will know there is a variable to print.

Variadic functions are functions whose total number of elements is unknown at the beginning.
For ex, you could printf(“%s %d”, “hello”, 0), which is 2 things, or printf(“%s %d %c”, “hello”, 0, ‘w’), which is 3 things.
And so on and so forth. You don’t know how many things you’ll have to print before actually starting printing.
We already used variadic functions above, let’s do a quick recap.

