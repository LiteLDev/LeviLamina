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
class EntityContext;
class GameplayUserManager;
class IActorManagerConnector;
class ILevelStorageManagerConnector;
class LevelStorage;
class Objective;
class PacketSender;
class Player;
class ScoreboardIdentityRef;
struct ChangeEntityScore;
struct ChangeFakePlayerScore;
struct ChangePlayerScore;
struct PlayerScoreboardId;
struct RemoveScore;
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

    virtual void onObjectiveAdded(::Objective const& objective) /*override*/;

    virtual void onObjectiveRemoved(::Objective& objective) /*override*/;

    virtual void onScoreChanged(::ScoreboardId const& id, ::Objective const& obj) /*override*/;

    virtual void onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective) /*override*/;

    virtual void setPacketSender(::PacketSender* sender) /*override*/;

    virtual ::DisplayObjective const* setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    ) /*override*/;

    virtual ::Objective* clearDisplayObjective(::std::string const& displaySlotName) /*override*/;

    virtual void onPlayerJoined(::Player const& player) /*override*/;

    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId) /*override*/;

    virtual void tick() /*override*/;

    virtual ::ScoreboardId const& createScoreboardId(::Player const& player) /*override*/;

    virtual ::ScoreboardId const& createScoreboardId(::Actor const& entity) /*override*/;

    virtual ::ScoreboardId const& createScoreboardId(::std::string const& name) /*override*/;

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

    MCNAPI void
    _clearAllScoreTagsForObjective(::std::string const& displaySlotName, ::DisplayObjective const& displayObjective);

    MCNAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCNAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCNAPI void _onSaveEvent(::LevelStorage&);

    MCNAPI ::std::variant<::RemoveScore, ::ChangePlayerScore, ::ChangeEntityScore, ::ChangeFakePlayerScore>
    _unpackIdentityDefToScorePacket(
        ::ScoreboardIdentityRef const& identityDef,
        ::std::string const&           objName,
        int                            score
    );

    MCNAPI void _updateScoreTag(::ScoreboardId const& scoreboardId, bool assertOnFakePlayer);

    MCNAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI void intializeWithActorManager(::IActorManagerConnector& actorManagerConnector);
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
    MCNAPI void $onObjectiveAdded(::Objective const& objective);

    MCNAPI void $onObjectiveRemoved(::Objective& objective);

    MCAPI void $onScoreChanged(::ScoreboardId const& id, ::Objective const& obj);

    MCNAPI void $onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective);

    MCNAPI void $setPacketSender(::PacketSender* sender);

    MCNAPI ::DisplayObjective const* $setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    );

    MCNAPI ::Objective* $clearDisplayObjective(::std::string const& displaySlotName);

    MCNAPI void $onPlayerJoined(::Player const& player);

    MCNAPI void $onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId);

    MCNAPI void $tick();

    MCNAPI ::ScoreboardId const& $createScoreboardId(::Player const& player);

    MCNAPI ::ScoreboardId const& $createScoreboardId(::Actor const& entity);

    MCNAPI ::ScoreboardId const& $createScoreboardId(::std::string const& name);

    MCNAPI void $writeToLevelStorage();

    MCNAPI bool $isClientSide() const;


    // NOLINTEND
};
