#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class WeakEntityRef;
struct ActorUniqueID;
// clang-format on

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
    MCAPI ~PlayerOpenContainerEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
