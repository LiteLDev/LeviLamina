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
class CompoundTag;
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
struct ActorUniqueID;
struct PlayerScoreboardId;
struct ScorePacketInfo;
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
    // vIndex: 0
    virtual ~ServerScoreboard() /*override*/;

    // vIndex: 6
    virtual void onObjectiveAdded(::Objective const& objective) /*override*/;

    // vIndex: 7
    virtual void onObjectiveRemoved(::Objective& objective) /*override*/;

    // vIndex: 8
    virtual void onScoreChanged(::ScoreboardId const& id, ::Objective const& obj) /*override*/;

    // vIndex: 9
    virtual void onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective) /*override*/;

    // vIndex: 13
    virtual void setPacketSender(::PacketSender* sender) /*override*/;

    // vIndex: 1
    virtual ::DisplayObjective const* setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    ) /*override*/;

    // vIndex: 2
    virtual ::Objective* clearDisplayObjective(::std::string const& displaySlotName) /*override*/;

    // vIndex: 10
    virtual void onPlayerJoined(::Player const& player) /*override*/;

    // vIndex: 11
    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId) /*override*/;

    // vIndex: 12
    virtual void tick() /*override*/;

    // vIndex: 5
    virtual ::ScoreboardId const& createScoreboardId(::Player const& player) /*override*/;

    // vIndex: 4
    virtual ::ScoreboardId const& createScoreboardId(::Actor const& entity) /*override*/;

    // vIndex: 3
    virtual ::ScoreboardId const& createScoreboardId(::std::string const& fakePlayer) /*override*/;

    // vIndex: 14
    virtual void writeToLevelStorage() /*override*/;

    // vIndex: 15
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

    MCAPI void
    _clearAllScoreTagsForObjective(::std::string const& displaySlotName, ::DisplayObjective const& displayObjective);

    MCAPI ::Player* _getPlayer(::ActorUniqueID entityID) const;

    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCAPI void _onSaveEvent(::LevelStorage&);

    MCAPI ::ScorePacketInfo _unpackIdentityDefToScorePacket(
        ::ScoreboardIdentityRef const& identityDef,
        ::std::string const&           objName,
        int                            score
    );

    MCAPI void
    _updateAllScoreTagsForObjective(::std::string const& displaySlotName, ::DisplayObjective const& displayObjective);

    MCAPI void _updateScoreTag(::ScoreboardId const& scoreboardId, bool assertOnFakePlayer);

    MCAPI void deserialize(::std::unique_ptr<::CompoundTag> root);

    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void intializeWithActorManager(::IActorManagerConnector& actorManagerConnector);

    MCAPI ::std::unique_ptr<::CompoundTag> serialize() const;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onObjectiveAdded(::Objective const& objective);

    MCAPI void $onObjectiveRemoved(::Objective& objective);

    MCAPI void $onScoreChanged(::ScoreboardId const& id, ::Objective const& obj);

    MCAPI void $onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective);

    MCAPI void $setPacketSender(::PacketSender* sender);

    MCAPI ::DisplayObjective const* $setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    );

    MCAPI ::Objective* $clearDisplayObjective(::std::string const& displaySlotName);

    MCAPI void $onPlayerJoined(::Player const& player);

    MCAPI void $onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId);

    MCAPI void $tick();

    MCAPI ::ScoreboardId const& $createScoreboardId(::Player const& player);

    MCAPI ::ScoreboardId const& $createScoreboardId(::Actor const& entity);

    MCAPI ::ScoreboardId const& $createScoreboardId(::std::string const& fakePlayer);

    MCAPI void $writeToLevelStorage();

    MCFOLD bool $isClientSide() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
