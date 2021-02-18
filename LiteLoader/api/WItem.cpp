#include <lbpch.h>
#include<api\types\types.h>
#include<api\event\genericEvent.h>
#include<debug/MemSearcher.h>
static bool inMagic;
static MSearcherEx<unsigned char> MS_WCNT;
unsigned char WItem::getCount() const {
	return *MS_WCNT.get(v);
}
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
#include<random>
void WItem::procoff() {
	inMagic = true;
	char filler[700];
	memset(filler, 0xff, sizeof(filler));
	SymCall("?init@ItemStackBase@@IEAAXHHH@Z", void, void*, int, int, int)(filler, 0, 114, 0);
	inMagic = false;
}
