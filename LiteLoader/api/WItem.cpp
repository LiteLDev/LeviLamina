#include <lbpch.h>
#include <api\types\types.h>
#include <debug/MemSearcher.h>
static bool inMagic;
static MSearcherEx<unsigned char> MS_WCNT;
unsigned char WItem::getCount() const {
    return *MS_WCNT.get(v);
}
/*
THook(void*, "?_setItem@ItemStackBase@@IEAA_NH@Z", class ItemStack* a, int b) {
        if (inMagic) {
                MS_WCNT.init(a, [](void* x) {
                                return *(unsigned char*)x == 114;
                },34);
                LOG("[WItem] offset", MS_WCNT.myOff);
                return nullptr;
        }
        return original(a, b);
}
*/
