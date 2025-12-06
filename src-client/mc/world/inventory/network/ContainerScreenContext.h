#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class Player;
// clang-format on

class ContainerScreenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player*>                                                      mPlayer;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>                           mScreenContainerType;
    ::ll::TypedStorage<8, 24, ::std::variant<::std::monostate, ::ActorUniqueID, ::BlockPos>> mOwner;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor* tryGetActor() const;

    MCAPI ::BlockActor* tryGetBlockActor() const;
    // NOLINTEND
};
