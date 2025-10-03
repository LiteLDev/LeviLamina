#include "mc/world/item/ItemStackBase.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/item/Item.h"

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

bool ItemStackBase::isEnchanted() const {
    if (mUserData && mUserData->contains(ItemStackBase::TAG_ENCHANTS(), Tag::Type::List)) {
        return true;
    }
    return false;
}

bool ItemStackBase::removeEnchants() const {
    if (isEnchanted()) {
        return mUserData->erase(ItemStackBase::TAG_ENCHANTS());
    }
    return false;
}