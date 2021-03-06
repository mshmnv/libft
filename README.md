# LIBFT

![GitHub Logo](/result/result.png)

## You must re-code the following functions. These function do not need any external functions:
* memset 
* bzero
* memcpy 
* memccpy 
* memmove 
* memchr 
* memcmp 
* strlen 
* strlcpy 
* strlcat 
* strchr
* strrchr 
* strnstr 
* strncmp 
* atoi
* isalpha 
* isdigit 
* isalnum 
* isascii 
* isprint 
* toupper 
* tolower

## You must also re-code the following functions, using the function “malloc”:
* calloc 
* strdup

## Additional functions
* char *ft_substr(char const *s, unsigned int start, size_t len);
* char *ft_strjoin(char const *s1, char const *s2);
* char *ft_strtrim(char const *s1, char const *set);
* char **ft_split(char const *s, char c);
* char *ft_itoa(int n);
* char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
* void ft_putchar_fd(char c, int fd);
* void ft_putstr_fd(char *s, int fd);
* void ft_putendl_fd(char *s, int fd);
* void ft_putnbr_fd(int n, int fd);

## BONUS PART
* t_list *ft_lstnew(void *content);
* void ft_lstadd_front(t_list **lst, t_list *new);
* int ft_lstsize(t_list *lst);
* t_list *ft_lstlast(t_list *lst);
* void ft_lstadd_back(t_list **lst, t_list *new);
* void ft_lstdelone(t_list *lst, void (*del)(void *));
* void ft_lstclear(t_list **lst, void (*del)(void *));
* void ft_lstiter(t_list *lst, void (*f)(void *));
* t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));