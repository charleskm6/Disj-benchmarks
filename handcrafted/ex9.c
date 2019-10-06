// Source: Sumit Gulwani, Nebosja Jojic: "Program Verification as
// Probabilistic Inference", POPL 2007.

int main() {
    int x = 0;
    int m = 0;
    int n = nondet_int();
    while(x < n) {
        if(nondet_int()) {
            m = x;
        }
        x = x + 1;
    }
    assert((m >= 0 || n <= 0));
    assert((m < n || n <= 0));
    return 0;
}