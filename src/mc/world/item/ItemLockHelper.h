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
#ifdef LL_PLAT_S
    LLNDAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const& item);
#endif

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool addKeepOnDeath(::ItemStackBase& item, ::Json::Value const& data);

#ifdef LL_PLAT_C
    MCAPI static void
    appendItemLockPopupNoticeText(::std::string& formattedPopupNoticeText, ::ItemStackBase const& item);

    MCAPI static bool canDropItem(::Actor const& actor, ::ItemStackBase const& item);
#endif

    MCAPI static bool canMoveItemSlots(::Actor const& actor, ::ItemStackBase const& item);

#ifdef LL_PLAT_C
    MCAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const& item);
#endif

    MCAPI static bool isItemLocked(::ItemStackBase const& item);

    MCAPI static void setItemLockMode(::ItemStackBase& item, ::ItemLockMode lockMode);

    MCAPI static bool shouldKeepOnDeath(::ItemStackBase const& item);

    MCAPI static bool shouldKeepOnDeath(::Actor const& actor, ::ItemStackBase const& item);
    // NOLINTEND
};
