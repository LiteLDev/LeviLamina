#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemLockMode.h"

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
    // symbol: ?addKeepOnDeath@ItemLockHelper@@SA_NAEAVItemStackBase@@AEBVValue@Json@@@Z
    MCAPI static bool addKeepOnDeath(class ItemStackBase& item, class Json::Value const& data);

    // symbol: ?canMoveItemSlots@ItemLockHelper@@SA_NAEBVActor@@AEBVItemStackBase@@@Z
    MCAPI static bool canMoveItemSlots(class Actor const& actor, class ItemStackBase const& item);

    // symbol: ?getItemLockMode@ItemLockHelper@@SA?AW4ItemLockMode@@AEBVItemStackBase@@@Z
    MCAPI static ::ItemLockMode getItemLockMode(class ItemStackBase const& item);

    // symbol: ?isItemLocked@ItemLockHelper@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool isItemLocked(class ItemStackBase const& item);

    // symbol: ?isItemLockedInSlot@ItemLockHelper@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool isItemLockedInSlot(class ItemStackBase const& item);

    // symbol: ?setItemLockMode@ItemLockHelper@@SAXAEAVItemStackBase@@W4ItemLockMode@@@Z
    MCAPI static void setItemLockMode(class ItemStackBase& item, ::ItemLockMode);

    // symbol: ?setKeepOnDeath@ItemLockHelper@@SAXAEAVItemStackBase@@_N@Z
    MCAPI static void setKeepOnDeath(class ItemStackBase& item, bool value);

    // symbol: ?shouldKeepOnDeath@ItemLockHelper@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool shouldKeepOnDeath(class ItemStackBase const& item);

    // symbol: ?shouldKeepOnDeath@ItemLockHelper@@SA_NAEBVActor@@AEBVItemStackBase@@@Z
    MCAPI static bool shouldKeepOnDeath(class Actor const& actor, class ItemStackBase const& item);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_parseItemLockMode@ItemLockHelper@@CA_NAEAVItemStackBase@@AEBVValue@Json@@@Z
    MCAPI static bool _parseItemLockMode(class ItemStackBase& item, class Json::Value const& data);

    // NOLINTEND
};
