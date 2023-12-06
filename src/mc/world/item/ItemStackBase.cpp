#include "mc/world/item/ItemStackBase.h"
#include "mc/world/item/Item.h"

std::string ItemStackBase::getTypeName() const {
    auto* item = getItem();
    if (item) {
        return item->getSerializedName();
    }
    return "";
}

std::string ItemStackBase::getDescriptionName() const {
    auto* item = getItem();
    if (item) {
        return item->buildDescriptionName(*this);
    }
    return "";
}
