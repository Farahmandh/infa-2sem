Cat* get_home_for_a_cats_pride(unsigned int n) {
    Cat *p= new Cat[n];
    for (int i = 0; i < n; i++) {
        p[i].name = new char[10];
    }
    return p;
}

void clear_home_of_a_cats_pride(Cat* cats, unsigned int n) {
    for (int i = 0; i < n; i++) {
        delete[] cats[i].name;
    }
    delete[] cats;
}
