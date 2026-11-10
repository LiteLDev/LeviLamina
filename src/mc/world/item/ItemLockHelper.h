#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
namespace Bedrock::Safety { class RedactableString; }
namespace Json { class Value; }
// clang-format on

class ItemLockHelper {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _parseItemLockMode(::ItemStackBase& item, ::Json::Value const& data);

    MCNAPI static bool addItemLockMode(::ItemStackBase& item, ::Json::Value const& data);

    MCAPI static bool addKeepOnDeath(::ItemStackBase& item, ::Json::Value const& data);

#ifdef LL_PLAT_C
    MCNAPI static void
    appendItemLockHoverText(::Bedrock::Safety::RedactableString& formattedHoverText, ::ItemStackBase const& item);

    MCNAPI static void
    appendItemLockPopupNoticeText(::std::string& formattedPopupNoticeText, ::ItemStackBase const& item);

    MCNAPI static bool canDropItem(::Actor const& actor, ::ItemStackBase const& item);
#endif

    MCNAPI static bool canMoveItemSlots(::Actor const& actor, ::ItemStackBase const& item);

#ifdef LL_PLAT_C
    MCAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const& item);
#endif

    MCAPI static bool isItemLocked(::ItemStackBase const& item);

    MCNAPI static void setItemLockMode(::ItemStackBase& item, ::ItemLockMode lockMode);

    MCNAPI static bool shouldKeepOnDeath(::ItemStackBase const& item);

    MCNAPI static bool shouldKeepOnDeath(::Actor const& actor, ::ItemStackBase const& item);
    // NOLINTEND
};
