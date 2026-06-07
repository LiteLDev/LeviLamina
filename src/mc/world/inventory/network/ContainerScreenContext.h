#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class IContainerRegistryAccess;
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
    MCAPI ContainerScreenContext();

    MCAPI ContainerScreenContext(
        ::Player&                            player,
        ::SharedTypes::Legacy::ContainerType screenContainerType,
        ::ActorUniqueID const&               actorId
    );

    MCAPI ContainerScreenContext(
        ::Player&                            player,
        ::SharedTypes::Legacy::ContainerType screenContainerType,
        ::BlockPos const&                    blockPos
    );

    MCAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryAccess>> getContainerRegistryAccess() const;

    MCFOLD ::Player& getPlayer() const;

    MCFOLD ::SharedTypes::Legacy::ContainerType getScreenContainerType() const;

#ifdef LL_PLAT_C
    MCAPI bool operator==(::SharedTypes::Legacy::ContainerType screenContainerType) const;
#endif

    MCAPI ::Actor* tryGetActor() const;

    MCAPI ::BlockActor* tryGetBlockActor() const;

    MCAPI ::BlockPos const* tryGetBlockActorPos() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void*
    $ctor(::Player& player, ::SharedTypes::Legacy::ContainerType screenContainerType, ::ActorUniqueID const& actorId);

    MCAPI void*
    $ctor(::Player& player, ::SharedTypes::Legacy::ContainerType screenContainerType, ::BlockPos const& blockPos);
    // NOLINTEND
};
