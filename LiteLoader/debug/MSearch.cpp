#include <lbpch.h>
#include <debug/MemSearcher.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

LIAPI bool McheckRangeR(void const *ptr, int size) {
    return IsBadHugeReadPtr(ptr, size) == 0;
}
LIAPI bool MreadPtr_Compare(void const ***ptr, void const *excepted) {
    if (McheckRangeR(ptr, 8) == false)
        return false;
    void const **to = *ptr;            // fetch Obj2 ptr
    if (McheckRangeR(to, 8) == false)  // if &vtable is readable
        return false;
    return *to == excepted;
}
LIAPI bool McompareR(void const *ptr, void const *pexcepted, int size) {
    if (McheckRangeR(ptr, size) == false)
        return false;
    return memcmp(ptr, pexcepted, size) == 0;
}
LIAPI bool Mcompare_pVoid(void const *ptr, void const *pexcepted) {
    if (McheckRangeR(ptr, 8) == false)
        return false;
    return *(void **)ptr == pexcepted;
}
