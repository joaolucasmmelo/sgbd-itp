#ifndef DEF
#define DEF

void remove_newline_from_string(char* str);

void select_type(FILE* Table);

int count_cols(char* filepath, int cols);

void print_table(char* filepath, int cols);

char find_type(int num);

int tratar_nome();

#endif