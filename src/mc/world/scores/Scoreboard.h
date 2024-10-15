#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSoftEnumRegistry.h"
#include "mc/world/events/PlayerScoreboardEventListener.h"
#include "mc/world/events/ScoreboardEventCoordinator.h"
#include "mc/world/scores/DisplayObjective.h"
#include "mc/world/scores/IdentityDictionary.h"
#include "mc/world/scores/ObjectiveCriteria.h"
#include "mc/world/scores/ScoreboardId.h"
#include "mc/world/scores/ScoreboardIdentityRef.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOperator.h"
#include "mc/world/scores/ObjectiveSortOrder.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

class Scoreboard {
    // size 720
public:
    CommandSoftEnumRegistry                                             mRegistry;
    std::unordered_map<std::string, DisplayObjective>                   mDisplayObjectives;
    IdentityDictionary                                                  mIdentityDict;
    std::unordered_map<ScoreboardId, ScoreboardIdentityRef>             mIdentityRefs;
    bool                                                                mShouldUpdateUI;
    std::unordered_map<std::string, std::unique_ptr<Objective>>         mObjectives;
    std::unordered_map<std::string, std::unique_ptr<ObjectiveCriteria>> mCriteria;
    ScoreboardEventCoordinator                                          mScoreboardEventCoordinator; // this + 536
    PlayerScoreboardEventListener                                       mPlayerListener;             // this + 648
public:
    // prevent constructor by default
    Scoreboard& operator=(Scoreboard const&);
    Scoreboard(Scoreboard const&);
    Scoreboard();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Scoreboard();

    // vIndex: 1
    virtual class DisplayObjective const* setDisplayObjective(
        std::string const&     displaySlotName,
        class Objective const& objective,
        ::ObjectiveSortOrder   order
    );

    // vIndex: 2
    virtual class Objective* clearDisplayObjective(std::string const& displaySlotName);

    // vIndex: 3
    virtual struct ScoreboardId const& createScoreboardId(class Player const& player);

    // vIndex: 4
    virtual struct ScoreboardId const& createScoreboardId(class Actor const& entity);

    // vIndex: 5
    virtual struct ScoreboardId const& createScoreboardId(std::string const& fakePlayer);

    // vIndex: 6
    virtual void onObjectiveAdded(class Objective const& objective);

    // vIndex: 7
    virtual void onObjectiveRemoved(class Objective& objective);

    // vIndex: 8
    virtual void onScoreChanged(struct ScoreboardId const& id, class Objective const& obj);

    // vIndex: 9
    virtual void onPlayerScoreRemoved(struct ScoreboardId const& id, class Objective const& objective);

    // vIndex: 10
    virtual void onPlayerJoined(class Player const& player);

    // vIndex: 11
    virtual void onPlayerIdentityUpdated(struct PlayerScoreboardId const& playerId);

    // vIndex: 12
    virtual void tick();

    // vIndex: 13
    virtual void setPacketSender(class PacketSender* sender);

    // vIndex: 14
    virtual void writeToLevelStorage();

    // vIndex: 15
    virtual bool isClientSide() const;

    MCAPI explicit Scoreboard(class CommandSoftEnumRegistry registry);

    MCAPI class Objective*
    addObjective(std::string const& name, std::string const& displayName, class ObjectiveCriteria const& criteria);

    MCAPI void addScoreListener(class Player&, std::string const& objective);

    MCAPI int applyPlayerOperation(
        bool&                             success,
        std::vector<struct ScoreboardId>& sourceErrorIds,
        struct ScoreboardId const&        target,
        class Objective&                  targetObjective,
        std::vector<struct ScoreboardId>& selector,
        class Objective&                  objective,
        ::CommandOperator                 opCode
    );

    MCAPI void forEachIdentityRef(std::function<void(class ScoreboardIdentityRef&)> callback);

    MCAPI void forEachObjective(std::function<void(class Objective&)> callback);

    MCAPI class ObjectiveCriteria* getCriteria(std::string const& criteriaName) const;

    MCAPI std::vector<std::string> getCriteriaNames() const;

    MCAPI class ObjectiveCriteria const& getDefaultCriteria() const;

    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const& displaySlot) const;

    MCAPI class DisplayObjective const* getDisplayObjective(std::string const& displaySlotName) const;

    MCAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;

    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const& id) const;

    MCAPI class Objective* getObjective(std::string const& name) const;

    MCAPI std::vector<std::string> getObjectiveNames() const;

    MCAPI std::vector<class Objective const*> getObjectives() const;

    MCAPI class ScoreboardEventCoordinator& getScoreboardEventCoordinator();

    MCAPI struct ScoreboardId const& getScoreboardId(class Actor const& entity) const;

    MCAPI struct ScoreboardId const& getScoreboardId(class Player const& player) const;

    MCAPI struct ScoreboardId const& getScoreboardId(std::string const& name) const;

    MCAPI struct ScoreboardId const& getScoreboardId(struct ActorUniqueID const& entityId) const;

    MCAPI struct ScoreboardId const& getScoreboardId(struct PlayerScoreboardId const& playerId) const;

    MCAPI class ScoreboardIdentityRef* getScoreboardIdentityRef(struct ScoreboardId const& scoreboardId);

    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const;

    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const;

    MCAPI bool hasIdentityFor(struct ScoreboardId const& scoreboardId) const;

    MCAPI int modifyPlayerScore(
        bool&                        success,
        class ScoreboardIdentityRef* identityRef,
        class Objective&             objective,
        int                          scoreValue,
        ::PlayerScoreSetFunction     action
    );

    MCAPI int modifyPlayerScore(
        bool&                      success,
        struct ScoreboardId const& id,
        class Objective&           objective,
        int                        scoreValue,
        ::PlayerScoreSetFunction   action
    );

    MCAPI class ScoreboardIdentityRef const& registerScoreboardIdentity(class CompoundTag const& loadedData);

    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const& scoreboardId, std::string const& name);

    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const& scoreboardId, struct ActorUniqueID const& entityId);

    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const& scoreboardId, struct PlayerScoreboardId const& playerId);

    MCAPI bool removeObjective(class Objective* objective);

    MCAPI void removeScoreListener(class Player const& player, std::string const& objective);

    MCAPI bool resetPlayerScore(struct ScoreboardId const& id, class Objective& objective);

    MCAPI void resetPlayerScore(struct ScoreboardId const& id);

    MCAPI std::optional<struct ScoreInfo>
          tryGetIdScore(struct ScoreboardId const& id, uint64 const& objectiveHash) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _init();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class CommandSoftEnumRegistry registry);

    MCAPI void dtor$();

    MCAPI class Objective* clearDisplayObjective$(std::string const& displaySlotName);

    MCAPI struct ScoreboardId const& createScoreboardId$(class Player const& player);

    MCAPI struct ScoreboardId const& createScoreboardId$(class Actor const& entity);

    MCAPI struct ScoreboardId const& createScoreboardId$(std::string const& fakePlayer);

    MCAPI bool isClientSide$() const;

    MCAPI void onObjectiveAdded$(class Objective const& objective);

    MCAPI void onObjectiveRemoved$(class Objective& objective);

    MCAPI void onPlayerIdentityUpdated$(struct PlayerScoreboardId const& playerId);

    MCAPI void onPlayerJoined$(class Player const& player);

    MCAPI void onPlayerScoreRemoved$(struct ScoreboardId const& id, class Objective const& objective);

    MCAPI void onScoreChanged$(struct ScoreboardId const& id, class Objective const& obj);

    MCAPI class DisplayObjective const* setDisplayObjective$(
        std::string const&     displaySlotName,
        class Objective const& objective,
        ::ObjectiveSortOrder   order
    );

    MCAPI void setPacketSender$(class PacketSender* sender);

    MCAPI void tick$();

    MCAPI void writeToLevelStorage$();

    MCAPI static std::string const& DEFAULT_CRITERIA();

    MCAPI static std::string const& DISPLAY_SLOT_BELOWNAME();

    MCAPI static std::string const& DISPLAY_SLOT_LIST();

    MCAPI static std::string const& DISPLAY_SLOT_SIDEBAR();

    MCAPI static char const* const& OBJECTIVES_ENUM();

    // NOLINTEND
};
