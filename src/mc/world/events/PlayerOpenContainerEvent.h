#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

struct PlayerOpenContainerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                     mPlayer;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerType;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                    mBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mEntityUniqueId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerOpenContainerEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
