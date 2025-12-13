#include "mc/world/item/Item.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/item/ItemStackBase.h"


std::string ItemStackBase::getTypeName() const {
    if (auto item = getItem(); item) {
        return item->getSerializedName();
    }
    return {};
}

std::string ItemStackBase::getDescriptionName() const {
    if (auto item = getItem(); item) {
        return item->buildDescriptionName(*this);
    }
    return {};
}

LLAPI short ItemStackBase::getDamageValue() const {
    if (mItem && mUserData) {
        if (mUserData->contains(Item::TAG_DAMAGE())) return mUserData->at(Item::TAG_DAMAGE());
    };
    return 0;
}
