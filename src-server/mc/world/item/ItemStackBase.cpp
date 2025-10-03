#include "mc/world/item/ItemStackBase.h"
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
