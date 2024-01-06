#include "mc/world/Container.h"
#include "mc/world/item/registry/ItemStack.h"

optional_ref<ItemStack> Container::getItemNonConst(int index) {
    auto& item = getItem(index);
    if (&item != &ItemStack::EMPTY_ITEM) {
        return const_cast<ItemStack&>(item);
    }
    return std::nullopt;
}
