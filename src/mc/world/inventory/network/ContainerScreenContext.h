#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/ContainerType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class BlockPos;
class IContainerRegistryAccess;
class Player;
struct ActorUniqueID;
// clang-format on

class ContainerScreenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2d14c0;
    ::ll::UntypedStorage<1, 1>  mUnkfc88ee;
    ::ll::UntypedStorage<8, 24> mUnk4c6b57;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenContext& operator=(ContainerScreenContext const&);
    ContainerScreenContext(ContainerScreenContext const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerScreenContext();

    MCAPI ContainerScreenContext(::Player& player, ::ContainerType screenContainerType, ::ActorUniqueID const& actorId);

    MCAPI ContainerScreenContext(::Player& player, ::ContainerType screenContainerType, ::BlockPos const& blockPos);

    MCAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryAccess>> getContainerRegistryAccess() const;

    MCFOLD ::Player& getPlayer() const;

    MCFOLD ::ContainerType getScreenContainerType() const;

    MCAPI ::Actor* tryGetActor() const;

    MCAPI ::BlockActor* tryGetBlockActor() const;

    MCAPI ::BlockPos const* tryGetBlockActorPos() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Player& player, ::ContainerType screenContainerType, ::ActorUniqueID const& actorId);

    MCAPI void* $ctor(::Player& player, ::ContainerType screenContainerType, ::BlockPos const& blockPos);
    // NOLINTEND
};
