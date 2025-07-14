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
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _parseItemLockMode(::ItemStackBase& item, ::Json::Value const& data);

    MCAPI static bool addKeepOnDeath(::ItemStackBase& item, ::Json::Value const& data);

    MCAPI static bool canMoveItemSlots(::Actor const& actor, ::ItemStackBase const& item);

    MCAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const& item);

    MCAPI static bool isItemLocked(::ItemStackBase const& item);

    MCAPI static bool removeItemLockMode(::ItemStackBase& item);

    MCAPI static bool removeKeepOnDeath(::ItemStackBase& item);

    MCAPI static void setItemLockMode(::ItemStackBase& item, ::ItemLockMode lockMode);

    MCAPI static bool shouldKeepOnDeath(::ItemStackBase const& item);

    MCAPI static bool shouldKeepOnDeath(::Actor const& actor, ::ItemStackBase const& item);
    // NOLINTEND
};
