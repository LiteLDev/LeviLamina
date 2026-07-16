#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandSoftEnumRegistry.h"
#include "mc/world/events/PlayerScoreboardEventListener.h"
#include "mc/world/events/ScoreboardEventCoordinator.h"
#include "mc/world/scores/IdentityDictionary.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/ScoreboardId.h"
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    LLAPI int modifyPlayerScore(
        ScoreboardOperationResult& result,
        ScoreboardId const&        id,
        Objective&                 objective,
        int                        scoreValue,
        PlayerScoreSetFunction     action
    );

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Scoreboard() = default;

    virtual ::DisplayObjective const*
    setDisplayObjective(::std::string const&, ::Objective const&, ::ObjectiveSortOrder const);

    virtual ::Objective* clearDisplayObjective(::std::string const&);

    virtual ::ScoreboardId const& createScoreboardId(::Player const&);

    virtual ::ScoreboardId const& createScoreboardId(::Actor const&);

    virtual ::ScoreboardId const& createScoreboardId(::std::string const&);

    virtual void onObjectiveAdded(::Objective const&);

    virtual void onObjectiveRemoved(::Objective&);

    virtual void onScoreChanged(::ScoreboardId const&, ::Objective const&);

    virtual void onPlayerScoreRemoved(::ScoreboardId const&, ::Objective const&);

    virtual void onPlayerJoined(::Player const&);

    virtual void onPlayerIdentityUpdated(::PlayerScoreboardId const&);

    virtual void tick();

    virtual void setPacketSender(::PacketSender*);

    virtual void writeToLevelStorage();

    virtual bool isClientSide() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Scoreboard(::CommandSoftEnumRegistry registry);

    MCAPI ::Objective*
    addObjective(::std::string const& name, ::std::string const& displayName, ::ObjectiveCriteria const& criteria);

    MCAPI int applyPlayerOperation(
        ::ScoreboardOperationResult&   result,
        ::std::vector<::ScoreboardId>& sourceErrorIds,
        ::ScoreboardId const&          target,
        ::Objective&                   targetObjective,
        ::std::vector<::ScoreboardId>& selector,
        ::Objective&                   objective,
        ::CommandOperator              opCode
    );

#ifdef LL_PLAT_C
    MCAPI bool clearScoreboardIdentity(::ScoreboardId const& scoreboardId);
#endif

    MCAPI ::ObjectiveCriteria* getCriteria(::std::string const& criteriaName) const;

#ifdef LL_PLAT_C
    MCAPI ::std::vector<::PlayerScore> getDisplayInfoFiltered(::std::string const& displaySlot) const;

    MCAPI ::std::vector<::PlayerScore> getDisplayInfoSorted(
        ::std::string const&                                                       displaySlot,
        ::std::function<void(::ObjectiveSortOrder, ::std::vector<::PlayerScore>&)> sortMethod
    ) const;
#endif

    MCAPI ::DisplayObjective const* getDisplayObjective(::std::string const& displaySlotName) const;

    MCAPI ::std::vector<::std::string> getDisplayObjectiveSlotNames() const;

    MCAPI ::Objective* getObjective(::std::string const& name) const;

    MCAPI ::ScoreboardId const& getScoreboardId(::Actor const& entity) const;

    MCAPI ::ScoreboardId const& getScoreboardId(::ActorUniqueID const& entityId) const;

    MCAPI ::ScoreboardId const& getScoreboardId(::std::string const& name) const;

    MCAPI ::std::vector<::ScoreboardId> getTrackedIds() const;

#ifdef LL_PLAT_C
    MCAPI ::ScoreboardIdentityRef const&
    registerScoreboardIdentity(::ScoreboardId const& scoreboardId, ::PlayerScoreboardId const& playerId);
#endif

    MCAPI bool removeObjective(::Objective* objective);

    MCAPI void removeScoreListener(::Player const& player, ::std::string const& objective);

    MCAPI bool resetPlayerScore(::ScoreboardId const& id, ::Objective& objective);

    MCAPI void resetPlayerScore(::ScoreboardId const& id);

    MCAPI ::std::optional<::ScoreInfo> tryGetIdScore(::ScoreboardId const& id, uint64 const& objectiveHash) const;
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
