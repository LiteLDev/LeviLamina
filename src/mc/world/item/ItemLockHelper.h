#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
namespace Json { class Value; }
// clang-format on

class ItemLockHelper {
public:
    // prevent constructor by default
    ItemLockHelper& operator=(ItemLockHelper const&);
    ItemLockHelper(ItemLockHelper const&);
    ItemLockHelper();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _parseItemLockMode(::ItemStackBase& item, ::Json::Value const& data);

    MCAPI static bool _parseKeepOnDeath(::ItemStackBase& item, ::Json::Value const& data);

    MCAPI static bool canMoveItemSlots(::Actor const& actor, ::ItemStackBase const& item);

    MCAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const& item);

    MCAPI static bool isItemLocked(::ItemStackBase const& item);

    MCAPI static bool isItemLockedInSlot(::ItemStackBase const& item);

    MCAPI static void setItemLockMode(::ItemStackBase& item, ::ItemLockMode lockMode);

    MCAPI static void setKeepOnDeath(::ItemStackBase& item, bool value);

    MCAPI static bool shouldKeepOnDeath(::ItemStackBase const& item);

    MCAPI static bool shouldKeepOnDeath(::Actor const& actor, ::ItemStackBase const& item);
    // NOLINTEND
};
