#include "mc/world/item/Item.h"
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
    if (mItem && mUserData) return mItem->getDamageValue(mUserData.get());
    return 0;
}
