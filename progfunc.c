#include "progfunc.h"

struct binn add(struct binn a1,
                struct binn a2)

{
struct binn res;

res.x1= a1.x1 + a2.x1;
res.x2= a1.x2 + a2.x2;

return res;

}





