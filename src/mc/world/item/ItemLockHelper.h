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
    MCAPI static bool _parseItemLockMode(::ItemStackBase& item, ::Json::Value const& data);

    MCAPI static bool addKeepOnDeath(::ItemStackBase& item, ::Json::Value const& data);

    MCAPI_C static void
    appendItemLockHoverText(::Bedrock::Safety::RedactableString& formattedHoverText, ::ItemStackBase const& item);

    MCAPI_C static void
    appendItemLockPopupNoticeText(::std::string& formattedPopupNoticeText, ::ItemStackBase const& item);

    MCAPI_C static bool canDropItem(::Actor const& actor, ::ItemStackBase const& item);

    MCAPI static bool canMoveItemSlots(::Actor const& actor, ::ItemStackBase const& item);

    MCAPI_C static bool canPlayerDropItem(::ItemStackBase const& item);

    MCAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const& item);

    MCAPI static bool isItemLocked(::ItemStackBase const& item);

    MCAPI static void setItemLockMode(::ItemStackBase& item, ::ItemLockMode lockMode);

    MCAPI static bool shouldKeepOnDeath(::ItemStackBase const& item);

    MCAPI static bool shouldKeepOnDeath(::Actor const& actor, ::ItemStackBase const& item);
    // NOLINTEND
};
