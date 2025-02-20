#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ChangeDimensionRequest;
class Dimension;
class DimensionManager;
class EntityContext;
class EntityRegistry;
class GameplayUserManager;
class ILevelCrashDumpManager;
class IPlayerDimensionTransferer;
class PacketSender;
class Player;
class PlayerLimboActorManager;
struct ActorUniqueID;
// clang-format on

class PlayerDimensionTransferManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7317e0;
    ::ll::UntypedStorage<8, 8>  mUnka50677;
    ::ll::UntypedStorage<8, 24> mUnk5c071b;
    ::ll::UntypedStorage<8, 24> mUnkafdc4c;
    ::ll::UntypedStorage<8, 16> mUnk27d8c9;
    ::ll::UntypedStorage<8, 8>  mUnkacbc91;
    ::ll::UntypedStorage<1, 1>  mUnk9b069c;
    ::ll::UntypedStorage<8, 16> mUnk5f57fb;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionTransferManager& operator=(PlayerDimensionTransferManager const&);
    PlayerDimensionTransferManager(PlayerDimensionTransferManager const&);
    PlayerDimensionTransferManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerDimensionTransferManager(
        ::std::unique_ptr<::PlayerLimboActorManager>               playerLimboActorManager,
        ::std::unique_ptr<::IPlayerDimensionTransferer>            playerDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>          dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager>       gameplayUserManager,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::std::unique_ptr<::ILevelCrashDumpManager>                levelCrashDumpManager
    );

    MCAPI ::StackRefResult<::EntityRegistry> _getValidEntityRegistry();

    MCAPI bool _isPlayerSuspended(::Player const& player) const;

    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCAPI bool _playerChangeDimension(::Player& player, ::ChangeDimensionRequest& changeRequest);

    MCAPI void _playerChangeDimensionPrepareRegion(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::Dimension&              toDimension
    );

    MCAPI bool _playerChangeDimensionWaitingForChunks(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::Dimension&              toDimension
    );

    MCAPI void handleChangeDimensionRequests();

    MCAPI void requestPlayerChangeDimension(::Player const& player, ::ChangeDimensionRequest&& changeRequest);

    MCAPI void setPacketSender(::PacketSender& packetSender);

    MCAPI void transferActorToOwnedEntityLimbo(::ActorUniqueID playerId, ::Actor& actor);

    MCAPI ~PlayerDimensionTransferManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::PlayerLimboActorManager>               playerLimboActorManager,
        ::std::unique_ptr<::IPlayerDimensionTransferer>            playerDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>          dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager>       gameplayUserManager,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::std::unique_ptr<::ILevelCrashDumpManager>                levelCrashDumpManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
