#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct CraftUpdateResultItemClientEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mActor;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItem;
    // NOLINTEND

};
