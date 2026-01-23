#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandSoftEnumRegistry.h"
#include "mc/world/events/PlayerScoreboardEventListener.h"
#include "mc/world/events/ScoreboardEventCoordinator.h"
#include "mc/world/scores/IdentityDictionary.h"
#include "mc/world/scores/ObjectiveRenderType.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DisplayObjective;
class Objective;
class ObjectiveCriteria;
class PacketSender;
class Player;
class ScoreboardIdentityRef;
struct ActorUniqueID;
struct PlayerScore;
struct PlayerScoreboardId;
struct ScoreInfo;
struct ScoreboardId;
// clang-format on

class Scoreboard {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CommandSoftEnumRegistry>                                            mRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DisplayObjective>>             mDisplayObjectives;
    ::ll::TypedStorage<8, 256, ::IdentityDictionary>                                               mIdentityDict;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, ::ScoreboardIdentityRef>>       mIdentityRefs;
    ::ll::TypedStorage<1, 1, bool>                                                                 mShouldUpdateUI;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::Objective>>> mObjectives;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::Bedrock::NonOwnerPointer<::Objective>>>
        mObjectivesHashLookup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::ObjectiveCriteria>>> mCriteria;
    ::ll::TypedStorage<8, 96, ::ScoreboardEventCoordinator>    mScoreboardEventCoordinator;
    ::ll::TypedStorage<8, 72, ::PlayerScoreboardEventListener> mPlayerListener;
    // NOLINTEND

public:
    // prevent constructor by default
    Scoreboard();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Scoreboard();

    virtual ::DisplayObjective const* setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    );

    virtual ::Objective* clearDisplayObjective(::std::string const& displaySlotName);

    virtual ::ScoreboardId const& createScoreboardId(::Player const& player);

    virtual ::ScoreboardId const& createScoreboardId(::Actor const& entity);

    virtual ::ScoreboardId const& createScoreboardId(::std::string const& fakePlayer);

    virtual void onObjectiveAdded(::Objective const& objective);

    virtual void onObjectiveRemoved(::Objective& objective);

    virtual void onScoreChanged(::ScoreboardId const& id, ::Objective const& obj);

    virtual void onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective);

    virtual void onPlayerJoined(::Player const& player);

    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId);

    virtual void tick();

    virtual void setPacketSender(::PacketSender* sender);

    virtual void writeToLevelStorage();

    virtual bool isClientSide() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Scoreboard(::CommandSoftEnumRegistry registry);

    MCAPI ::Objective*
    addObjective(::std::string const& name, ::std::string const& displayName, ::ObjectiveCriteria const& criteria);

    MCAPI void addScoreListener(::Player& player, ::std::string const& objective);

    MCAPI int applyPlayerOperation(
        ::ScoreboardOperationResult&   result,
        ::std::vector<::ScoreboardId>& sourceErrorIds,
        ::ScoreboardId const&          target,
        ::Objective&                   targetObjective,
        ::std::vector<::ScoreboardId>& selector,
        ::Objective&                   objective,
        ::CommandOperator              opCode
    );

    MCAPI_C bool clearScoreboardIdentity(::ScoreboardId const& scoreboardId);

    MCAPI ::ObjectiveCriteria const&
    createObjectiveCriteria(::std::string const& name, bool readOnly, ::ObjectiveRenderType renderType);

    MCAPI ::ObjectiveCriteria* getCriteria(::std::string const& criteriaName) const;

    MCAPI ::std::vector<::PlayerScore> getDisplayInfoFiltered(::std::string const& displaySlot) const;

    MCAPI_C ::std::vector<::PlayerScore> getDisplayInfoSorted(
        ::std::string const&                                                       displaySlot,
        ::std::function<void(::ObjectiveSortOrder, ::std::vector<::PlayerScore>&)> sortMethod
    ) const;

    MCAPI ::DisplayObjective const* getDisplayObjective(::std::string const& displaySlotName) const;

    MCAPI ::std::vector<::std::string> getDisplayObjectiveSlotNames() const;

    MCAPI ::std::vector<::ScoreInfo> getIdScores(::ScoreboardId const& id) const;

    MCAPI ::Objective* getObjective(::std::string const& name) const;

    MCAPI ::std::vector<::std::string> getObjectiveNames() const;

    MCAPI ::std::vector<::Objective const*> getObjectives() const;

    MCAPI ::ScoreboardId const& getScoreboardId(::Actor const& entity) const;

    MCAPI ::ScoreboardId const& getScoreboardId(::std::string const& name) const;

    MCAPI ::ScoreboardId const& getScoreboardId(::Player const& player) const;

    MCAPI ::std::vector<::ScoreboardIdentityRef> getScoreboardIdentityRefs() const;

    MCAPI ::std::vector<::ScoreboardId> getTrackedIds() const;

    MCAPI ::ScoreboardIdentityRef const& registerScoreboardIdentity(::CompoundTag const& loadedData);

    MCAPI ::ScoreboardIdentityRef const&
    registerScoreboardIdentity(::ScoreboardId const& scoreboardId, ::ActorUniqueID const& entityId);

    MCAPI ::ScoreboardIdentityRef const&
    registerScoreboardIdentity(::ScoreboardId const& scoreboardId, ::std::string const& name);

    MCAPI ::ScoreboardIdentityRef const&
    registerScoreboardIdentity(::ScoreboardId const& scoreboardId, ::PlayerScoreboardId const& playerId);

    MCAPI bool removeObjective(::Objective* objective);

    MCAPI void removeScoreListener(::Player const& player, ::std::string const& objective);

    MCAPI bool resetPlayerScore(::ScoreboardId const& id, ::Objective& objective);

    MCAPI void resetPlayerScore(::ScoreboardId const& id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_CRITERIA();

    MCAPI static ::std::string const& DISPLAY_SLOT_BELOWNAME();

    MCAPI static ::std::string const& DISPLAY_SLOT_LIST();

    MCAPI static ::std::string const& DISPLAY_SLOT_SIDEBAR();

    MCAPI static char const*& OBJECTIVES_ENUM();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandSoftEnumRegistry registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::DisplayObjective const* $setDisplayObjective(
        ::std::string const&       displaySlotName,
        ::Objective const&         objective,
        ::ObjectiveSortOrder const order
    );

    MCAPI ::Objective* $clearDisplayObjective(::std::string const& displaySlotName);

    MCFOLD ::ScoreboardId const& $createScoreboardId(::Player const& player);

    MCFOLD ::ScoreboardId const& $createScoreboardId(::Actor const& entity);

    MCFOLD ::ScoreboardId const& $createScoreboardId(::std::string const& fakePlayer);

    MCAPI void $onObjectiveAdded(::Objective const& objective);

    MCAPI void $onObjectiveRemoved(::Objective& objective);

    MCAPI void $onScoreChanged(::ScoreboardId const& id, ::Objective const& obj);

    MCFOLD void $onPlayerScoreRemoved(::ScoreboardId const& id, ::Objective const& objective);

    MCFOLD void $onPlayerJoined(::Player const& player);

    MCFOLD void $onPlayerIdentityUpdated(::PlayerScoreboardId const& playerId);

    MCFOLD void $tick();

    MCFOLD void $setPacketSender(::PacketSender* sender);

    MCFOLD void $writeToLevelStorage();

    MCFOLD bool $isClientSide() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
