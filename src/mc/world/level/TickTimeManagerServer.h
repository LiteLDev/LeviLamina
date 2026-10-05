#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/TickTimeManager.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
class ILevelStorageManagerConnector;
class IServerPlayerSleepManagerConnector;
class LevelData;
class LevelEventCoordinator;
class LevelStorage;
class PacketSender;
class WorldClockRegistry;
class WorldClockRegistryServer;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class TickTimeManagerServer : public ::TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::WorldClockRegistryServer>>>
                                                               mWorldClockRegistry;
    ::ll::TypedStorage<8, 8, int64>                            mLastTimePacketSent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveLevelDataSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWakeUpAllPlayersSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickTimeManagerServer() /*override*/ = default;

    virtual void update() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const getWorldClockRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const getWorldClockRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TickTimeManagerServer(
        ::Bedrock::NotNullNonOwnerPtr<::LevelData> const&             levelData,
        ::cereal::ReflectionCtx&                                      ctx,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const&          packetSender,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> const& levelEventCoordinator
    );

    MCAPI void _onWakeUpAllPlayers();

    MCAPI void _saveWorldClocks(::LevelStorage& levelStorage) const;

    MCAPI void
    intitializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void loadWorldClocks(::LevelStorage& levelStorage);

    MCAPI void registerForGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCAPI void
    registerForPlayerSleepManagerEvents(::IServerPlayerSleepManagerConnector& serverPlayerSleepManagerConnector);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::LevelData> const&             levelData,
        ::cereal::ReflectionCtx&                                      ctx,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const&          packetSender,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> const& levelEventCoordinator
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const $getWorldClockRegistry() const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const $getWorldClockRegistry();


    // NOLINTEND
};
