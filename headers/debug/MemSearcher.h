#pragma once
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <typeinfo>
template <typename pattern_type,
          unsigned int pattern_sz,
          unsigned int hint,
          unsigned int MAXSZ,
          unsigned int Search_Off = 128>
struct MSearcher {
    unsigned int _Off;
    template <typename T>
    void Init(T *mem, void *payload) {
        if (memcmp(((char *)mem) + hint, payload, pattern_sz) == 0) {
            _Off = hint;
            return;
        }
        printf("[WARN] MSearch Hint error for %s:%s\n", typeid(T *).name(),
               typeid(pattern_type *).name());
        unsigned int Hit = 0, LBound = 0, UBound = 0;
        if (hint >= Search_Off)
            LBound = hint - Search_Off;
        UBound = hint + Search_Off;
        if (UBound > MAXSZ - pattern_sz + 1)
            UBound = MAXSZ - pattern_sz + 1;
        for (; LBound < UBound; ++LBound) {
            if (memcmp(((char *)mem) + hint, payload, pattern_sz) == 0) {
                if (Hit) {
                    printf("[ERROR] multiple MSearch HIT for %s:%s %u vs %u\n", typeid(T *).name(),
                           typeid(pattern_type *).name(), Hit, LBound);
                    if (abs((long)LBound - (long)hint) <= abs((long)Hit - (long)hint)) {
                        Hit = LBound;
                    }
                    // return;
                } else {
                    Hit = LBound;
                }
            }
        }
        if (Hit == 0) {
            printf("[ERROR] multiple MSearch Failed for %s:%s\n", typeid(T *).name(),
                   typeid(pattern_type *).name());
            exit(1);
        }
        _Off = Hit;
    }
    pattern_type &get(void *mem) { return *(pattern_type *)(((char *)mem) + _Off); }
};
#include <functional>
using std::function;
LIAPI bool McheckRangeR(void const *ptr, int size);
LIAPI bool MreadPtr_Compare(void const ***ptr, void const *excepted);
/*
struct Obj1{
        Obj2* x;
}
struct Obj2{
        void* vtbf=0xdeadbeef;
}
*/
// assert(MreadPtr_Compare(&Obj1->x,0xdeadbeef))
LIAPI bool McompareR(void const *ptr, void const *pexcepted, int size);
LIAPI bool Mcompare_pVoid(void const *ptr, void const *pexcepted);
template <typename TP>
struct MSearcherEx {
    int myOff;
    void init(void *base, function<bool(void *)> const &x, int hint, int maxOff = 192) {
        uintptr_t pbase = (uintptr_t)base;
        if (x((void *)(pbase + hint))) {
            myOff = hint;
            printf("[MSearch] correct hint %d for %s\n", hint, typeid(TP *).name());
            return;
        } else {
            fprintf(stderr, "[MSearch] default hint search failed for %s\n", typeid(TP *).name());
        }
        int HitCnt  = 0;
        int BestHit = -1;
        for (int shift = 1; shift <= maxOff; ++shift) {
            int target = hint - shift;
            if (target >= 0) {
                // search forward
                if (x((void *)(pbase + target))) {
                    if (!HitCnt) {
                        HitCnt++;
                        BestHit = target;
                    } else {
                        fprintf(stderr, "[MSearch] muiti-hit! %d vs %d(best) for %s\n", target,
                                BestHit, typeid(TP *).name());
                    }
                }
            }
            // search backwards
            target = hint + shift;
            if (x((void *)(pbase + target))) {
                if (!HitCnt) {
                    HitCnt++;
                    BestHit = target;
                } else {
                    fprintf(stderr, "[MSearch] muiti-hit! %d vs %d(best) for %s\n", target, BestHit,
                            typeid(TP *).name());
                }
            }
        }
        if (HitCnt == 0) {
            fprintf(stderr, "[MSearch] search failed for %s\n", typeid(TP *).name());
            exit(1);
        }
        myOff = BestHit;
        fprintf(stderr, "[MSearch] best match %d for %s\n", BestHit, typeid(TP *).name());
    }
    TP *get(void *base) { return (TP *)(((uintptr_t)base) + myOff); }
};