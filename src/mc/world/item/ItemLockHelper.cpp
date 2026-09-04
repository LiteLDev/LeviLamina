#include "mc/world/item/ItemLockHelper.h"
#include "mc/deps/nbt/ByteTag.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/item/ItemLockMode.h"
#include "mc/world/item/ItemStackBase.h"
#include <string_view>

::ItemLockMode ItemLockHelper::getItemLockMode(::ItemStackBase const& item) {
    auto&            tag  = item.mUserData;
    std::string_view name = "minecraft:item_lock";
    if (tag && tag->contains(name)) {
        if (auto byteTag = tag->get(name)) {
            return static_cast<ItemLockMode>(byteTag->as<ByteTag>().data);
        }
    } else {
        return ItemLockMode::None;
    }
}
