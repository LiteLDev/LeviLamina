#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/Scoreboard.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BasicTimer;
class CommandSoftEnumRegistry;
class DisplayObjective;
class GameplayUserManager;
class IActorManagerConnector;
class ILevelStorageManagerConnector;
class LevelStorage;
class Objective;
class PacketSender;
class Player;
struct PlayerScoreboardId;
// clang-format on

class ServerScoreboard : public ::Scoreboard {
public:
    // ServerScoreboard inner types declare
    // clang-format off
    struct unit_test_ctor_t;
    // clang-format on

    // ServerScoreboard inner types define
    struct unit_test_ctor_t {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BasicTimer>>                             mSaveTimer;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                             mLevelStorage;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::Objective const*>>                          mTrackedObjectives;
    ::ll::TypedStorage<8, 8, ::PacketSender*>                                             mPacketSender;
    ::ll::TypedStorage<8, 16, ::ScoreboardId>                                             mLastUniqueSBID;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveActorEntityReferencesSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScoreboard();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerScoreboard() /*override*/ = default;

    virtual void onObjectiveAdded(::Objective const&) /*override*/;

    virtual void onObjectiveRemoved(::Objective&) /*override*/;

    virtual void onScoreChanged(::ScoreboardId const&, ::Objective const&) /*override*/;

    virtual void onPlayerScoreRemoved(::ScoreboardId const&, ::Objective const&) /*override*/;

    virtual void setPacketSender(::PacketSender*) /*override*/;

    virtual ::DisplayObjective const*
    setDisplayObjective(::std::string const&, ::Objective const&, ::ObjectiveSortOrder const) /*override*/;

    virtual ::Objective* clearDisplayObjective(::std::string const&) /*override*/;

    virtual void onPlayerJoined(::Player const&) /*override*/;

    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const&) /*override*/;

    virtual void tick() /*override*/;

    virtual ::ScoreboardId const& createScoreboardId(::Player const&) /*override*/;

    virtual ::ScoreboardId const& createScoreboardId(::Actor const&) /*override*/;

    virtual ::ScoreboardId const& createScoreboardId(::std::string const&) /*override*/;

    virtual void writeToLevelStorage() /*override*/;

    virtual bool isClientSide() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerScoreboard(
        ::CommandSoftEnumRegistry                            registry,
        ::LevelStorage*                                      levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager
    );

    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void intializeWithActorManager(::IActorManagerConnector& actorManagerConnector);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::CommandSoftEnumRegistry                            registry,
        ::LevelStorage*                                      levelStorage,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
