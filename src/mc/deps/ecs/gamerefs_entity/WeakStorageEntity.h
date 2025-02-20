#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityId;
class EntityRegistry;
// clang-format on

class WeakStorageEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>> mRegistry;
    ::ll::TypedStorage<4, 4, ::EntityId>                   mEntity;
    // NOLINTEND
};
