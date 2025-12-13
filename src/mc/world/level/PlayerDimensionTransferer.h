#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/IPlayerDimensionTransferer.h"

// auto generated forward declare list
// clang-format off
class ChangeDimensionRequest;
class Dimension;
class EntityRegistry;
class GameplayUserManager;
class IPlayerDimensionTransferProxy;
class ISharedSpawnGetter;
class LevelStorage;
class LoadingScreenIdManager;
class PacketSender;
class Player;
class PlayerLimboActorManager;
class PortalForcer;
struct AddLimboActorHelper;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class PlayerDimensionTransferer : public ::IPlayerDimensionTransferer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerDimensionTransferProxy>> const>
                                                                                   mPlayerDimensionTransferProxy;
    ::ll::TypedStorage<1, 1, bool const>                                           mIsClientSide;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PortalForcer> const> mPortalForcer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ISharedSpawnGetter>> const> mSharedSpawnGetter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LevelStorage> const>              mLevelStorage;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LoadingScreenIdManager> const>    mLoadingScreenIdManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                    mPacketSender;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::DimensionType), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnAnyPlayerChangeDimensionPreSuspendRegion;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnAnyPlayerChangeDimensionPrepareRegionComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDimensionTransferer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~PlayerDimensionTransferer() /*override*/;

    // vIndex: 3
    virtual void playerSaveLimboActors(
        ::Player&                  player,
        ::ChangeDimensionRequest&  changeRequest,
        ::Dimension&               toDimension,
        ::PlayerLimboActorManager* playerLimboActorManager
    ) /*override*/;

    // vIndex: 4
    virtual void playerDestroyRemotePlayers(::GameplayUserManager& gameplayUserManager) /*override*/;

    // vIndex: 5
    virtual void playerStartChangeDimensionSuspendRegion(::Player& player, ::DimensionType fromDimension) /*override*/;

    // vIndex: 6
    virtual void setTransitionLocation(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::Dimension&              toDimension
    ) /*override*/;

    // vIndex: 7
    virtual void
    syncTransitionComponentTargetPosition(::Player& player, ::ChangeDimensionRequest const& changeRequest) /*override*/;

    // vIndex: 8
    virtual void playerDestroyRegion(::Player& player, ::ChangeDimensionRequest const& changeRequest) /*override*/;

    // vIndex: 9
    virtual void playerPrepareRegion(
        ::Player&                       player,
        ::ChangeDimensionRequest const& changeRequest,
        ::Dimension const&              toDimension
    ) /*override*/;

    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::DimensionType)>&
    getOnAnyPlayerChangeDimensionPreSuspendRegionConnector() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void()>&
    getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector() /*override*/;

    // vIndex: 10
    virtual bool
    playerWaitForServer(::Player& player, ::std::chrono::steady_clock::time_point currentTime) /*override*/;

    // vIndex: 11
    virtual bool
    playerWaitForDimensionTransitionSystem(::Player const& player, ::EntityRegistry& entityRegistry) /*override*/;

    // vIndex: 12
    virtual void
    sendClientRespawnMovePacketFromServer(::Player const& player, ::ChangeDimensionRequest& changeRequest) /*override*/;

    // vIndex: 13
    virtual bool waitForSubChunks(::Player& player, ::Dimension const& toDimension) /*override*/;

    // vIndex: 14
    virtual void startWaitForRespawn(::Player const& player) /*override*/;

    // vIndex: 15
    virtual void playerSwitchDimension(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) /*override*/;

    // vIndex: 16
    virtual bool doRespawnIfReady(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    ) /*override*/;

    // vIndex: 17
    virtual void setPacketSender(::PacketSender& packetSender) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerDimensionTransferer(
        ::std::unique_ptr<::IPlayerDimensionTransferProxy>   playerDimensionTransferProxy,
        bool                                                 isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>        portalForcer,
        ::std::unique_ptr<::ISharedSpawnGetter>              sharedSpawnGetter,
        ::Bedrock::NonOwnerPointer<::LevelStorage>           levelStorage,
        ::Bedrock::NonOwnerPointer<::LoadingScreenIdManager> loadingScreenIdManager
    );

    MCAPI void _finalizeDimensionChange(::Player& player, ::ChangeDimensionRequest const& changeRequest);

    MCAPI void _loadAgentFromTag(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper&    addLimboActorHelper
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::IPlayerDimensionTransferProxy>   playerDimensionTransferProxy,
        bool                                                 isClientSide,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>        portalForcer,
        ::std::unique_ptr<::ISharedSpawnGetter>              sharedSpawnGetter,
        ::Bedrock::NonOwnerPointer<::LevelStorage>           levelStorage,
        ::Bedrock::NonOwnerPointer<::LoadingScreenIdManager> loadingScreenIdManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $playerSaveLimboActors(
        ::Player&                  player,
        ::ChangeDimensionRequest&  changeRequest,
        ::Dimension&               toDimension,
        ::PlayerLimboActorManager* playerLimboActorManager
    );

    MCAPI void $playerDestroyRemotePlayers(::GameplayUserManager& gameplayUserManager);

    MCAPI void $playerStartChangeDimensionSuspendRegion(::Player& player, ::DimensionType fromDimension);

    MCAPI void
    $setTransitionLocation(::Player& player, ::ChangeDimensionRequest& changeRequest, ::Dimension& toDimension);

    MCAPI void $syncTransitionComponentTargetPosition(::Player& player, ::ChangeDimensionRequest const& changeRequest);

    MCAPI void $playerDestroyRegion(::Player& player, ::ChangeDimensionRequest const& changeRequest);

    MCAPI void $playerPrepareRegion(
        ::Player&                       player,
        ::ChangeDimensionRequest const& changeRequest,
        ::Dimension const&              toDimension
    );

    MCFOLD ::Bedrock::PubSub::Connector<void(::DimensionType)>&
    $getOnAnyPlayerChangeDimensionPreSuspendRegionConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void()>& $getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector();

    MCAPI bool $playerWaitForServer(::Player& player, ::std::chrono::steady_clock::time_point currentTime);

    MCAPI bool $playerWaitForDimensionTransitionSystem(::Player const& player, ::EntityRegistry& entityRegistry);

    MCAPI void $sendClientRespawnMovePacketFromServer(::Player const& player, ::ChangeDimensionRequest& changeRequest);

    MCAPI bool $waitForSubChunks(::Player& player, ::Dimension const& toDimension);

    MCAPI void $startWaitForRespawn(::Player const& player);

    MCAPI void $playerSwitchDimension(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    );

    MCAPI bool $doRespawnIfReady(
        ::Player&                 player,
        ::ChangeDimensionRequest& changeRequest,
        ::AddLimboActorHelper*    addLimboActorHelper
    );

    MCAPI void $setPacketSender(::PacketSender& packetSender);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
