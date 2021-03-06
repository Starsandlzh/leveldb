#include <iostream>
#include "kdtree.h"
#include "kd_index.h"

using namespace std;

int main() {

    double p1[] = {5, 5};
    double p2[] = {2, 2};
    double p3[] = {2, 8};
    double p4[] = {8, 8};
    double p5[] = {8, 2};
    string s1 = "v1", s2 = "v2", s3 = "v3", s4 = "v4", s5 = "v5";

//    kdtree* tree = kd_create(2);
//    kd_data_destructor(tree, free);
    auto *index = new KdIndex;

    index->Insert(p1, &s1);
    index->Insert(p2, &s2);
    index->Insert(p3, &s3);
    index->Insert(p4, &s4);
    index->Insert(p5, &s5);

    double t[] = {4, 4};
    vector<string*> values = index->Range(t, 10, 3);
    for (auto &value : values) {
        cout << *value << endl;
    }

    delete &values;
    delete index;
    return 0;
}