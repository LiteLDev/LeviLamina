#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/world/item/components/NetworkedItemComponent.h"

class CooldownItemComponent : public ::NetworkedItemComponent<::CooldownItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mDuration;
    ::ll::TypedStorage<1, 1, ::SharedTypes::ItemCooldownType> mType;
    ::ll::TypedStorage<8, 48, ::HashedString>                 mCategory;
    // NOLINTEND
};
