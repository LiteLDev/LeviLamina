#include "mc/world/item/ItemStackBase.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/util/IDataInput.h"
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

void ItemStackBase::deserializeComponents(IDataInput& input) {
    auto int_result = input.readIntResult();
    if (!int_result.has_value()) {
        return;
    }
    for (auto i = 0; i < int_result.value(); ++i) {
        auto block_name_result = input.readStringResult();
        if (!block_name_result.has_value()) {
            return;
        }
        _loadBlocksForCanPlaceOnCanDestroy(mCanPlaceOn, block_name_result.value());
    }

    int_result = input.readIntResult();
    if (!int_result.has_value()) {
        return;
    }
    for (auto i = 0; i < int_result.value(); ++i) {
        auto block_name_result = input.readStringResult();
        if (!block_name_result.has_value()) {
            return;
        }
        _loadBlocksForCanPlaceOnCanDestroy(mCanDestroy, block_name_result.value());
    }
    _updateCompareHashes();
}