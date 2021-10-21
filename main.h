
void print_f(const char* s);

template<typename T, typename... Args>
void print_f(const char* s, T value, Args... args);