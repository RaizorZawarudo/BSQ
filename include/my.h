/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** Task02
*/

char *inputcleaner(char *str);
int check_same_base(char *base_num, char *base_ope);
char *converted_num_base (char *str, char *base_num);
char *converted_base_num(char *str, char *base_num);
char *converted_base_ope(char *str, char *base_num);
char *doing_div(char **nstack, int *stackpos);
char *doing_modd(char **nstack, int *stackpos);
int print_h (void);
int check_error(int ac, char **av);
char *doing_mult(char **nstack, int *stackpos);
int prep_op(char *nb1, char *nb2);
char *doing_add(char **nstack, int *stackpos);
char *doing_subb(char **nstack, int *stackpos);
char *get_abs(char *str);
int my_atoi(char const *);
int my_add(int s_lenght, int b_lenght, char **av);
int my_bigger_lenght(char **av);
int my_smaller_lenght(char **av);
int my_error(int ac, char **av);
int my_calcul(char av1, char av2);
int my_char_nb(char *av);
char *my_strdup(char const *src);
int my_error(int ac, char **av);
int  my_sort_word_array(char **tab);
int my_division(char **av);
int my_multiplication(char **av);
int my_modulo(char ** av);
int my_condition(char **av);
int add_zero(char digit, long long nb, int nb_min);
int my_minus(int i, char const *str);
int do_minus(int nb);
int my_exp(int exp, int i);
int my_strlen_two(char const *str);
char *my_cp(int p, char *str);
int my_strlen_tree(char const *str);
void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_show_word_array(char * const *tab);
