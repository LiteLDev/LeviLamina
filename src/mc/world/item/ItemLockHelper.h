#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemLockHelper {
public:
    // prevent constructor by default
    ItemLockHelper& operator=(ItemLockHelper const&);
    ItemLockHelper(ItemLockHelper const&);
    ItemLockHelper();

public:
    // NOLINTBEGIN
    MCAPI static bool addKeepOnDeath(class ItemStackBase& item, class Json::Value const& data);

    MCAPI static bool canMoveItemSlots(class Actor const& actor, class ItemStackBase const& item);

    MCAPI static ::ItemLockMode getItemLockMode(class ItemStackBase const& item);

    MCAPI static bool isItemLocked(class ItemStackBase const& item);

    MCAPI static bool isItemLockedInSlot(class ItemStackBase const& item);

    MCAPI static void setItemLockMode(class ItemStackBase& item, ::ItemLockMode lockMode);

    MCAPI static void setKeepOnDeath(class ItemStackBase& item, bool value);

    MCAPI static bool shouldKeepOnDeath(class ItemStackBase const& item);

    MCAPI static bool shouldKeepOnDeath(class Actor const& actor, class ItemStackBase const& item);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _parseItemLockMode(class ItemStackBase& item, class Json::Value const& data);

    // NOLINTEND
};
