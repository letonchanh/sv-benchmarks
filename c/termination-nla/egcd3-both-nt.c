/*
  A nonlinear termination benchmark program from the OOPSLA'20 paper 
  "DynamiTe: Dynamic termination and non-termination proofs"
  by Ton Chanh Le, Timos Antonopoulos, Parisa Fathololumi, Eric Koskinen, ThanhVu Nguyen.
  Adapted from the original nonlinear benchmark nla-digbench. 
*/

/* extended Euclid's algorithm */
extern int __VERIFIER_nondet_int(void);

int main() {
    int x, y;
    int a, b, p, q, r, s;
    x = __VERIFIER_nondet_int();
    y = __VERIFIER_nondet_int();
    //assume_abort_if_not(x >= 1);
    //assume_abort_if_not(y >= 1);

    a = x;
    b = y;
    p = 1;
    q = 0;
    r = 0;
    s = 1;

    while (1) {
        if (!(b != 0))
            break;
        int c, k;
        c = a;
        k = 0;

        while (1) {
            if (!(c >= b))
                break;
            int d, v;
            d = 1;
            v = b;

            while (1) {
                //__VERIFIER_assert(a == y * r + x * p);
                //__VERIFIER_assert(b == x * q + y * s);
                //__VERIFIER_assert(a == k * b + c);
                //__VERIFIER_assert(v == b * d);

                if (!(b == x * q + y * s))
                    break;
                d = 2 * d;
                v = 2 * v;
            }
            c = c - v;
            k = k + d;
        }

        a = b;
        b = c;
        int temp;
        temp = p;
        p = q;
        q = temp - q * k;
        temp = r;
        r = s;
        s = temp - s * k;
    }
    //__VERIFIER_assert(p*x - q*x + r*y - s*y  == a);
    return 0;
}
