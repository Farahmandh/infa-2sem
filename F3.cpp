int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new) {
    if (n_new == 0) {
        delete[] source;
        return NULL;
    }
    int *p = new int[n_new];
    if (source != NULL) {
      if( n_old / n_new == 1) {
        for (int i = 0; i < n_new; i++) {
            a[i] = source[i];
        }
      else {
        for (int i = 0; i < n_old; i++) {
            a[i] = source[i];
        }
        
    }
    delete[] source;
    return a;
}
