#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

struct PlayerOpenedContainerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                             mPlayer;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>         mContainerType;
    ::ll::TypedStorage<8, 24, ::std::variant<::BlockPos, ::ActorUniqueID>> mOwner;
    // NOLINTEND
};
