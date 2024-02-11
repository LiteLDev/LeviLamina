#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/PlayerScoreSetFunction.h"
#include "mc/world/scores/IdentityDefinition.h"

class ScoreboardIdentityRef {
public:
    uint         mObjectiveReferences; // this+0x0
    ScoreboardId mScoreboardId;        // this+0x8

public:
    // NOLINTBEGIN
    // symbol: ?getEntityId@ScoreboardIdentityRef@@QEBAAEBUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const& getEntityId() const;

    // symbol: ?getIdentityType@ScoreboardIdentityRef@@QEBA?AW4Type@IdentityDefinition@@XZ
    MCAPI ::IdentityDefinition::Type getIdentityType() const;

    // symbol:
    // ?getName@ScoreboardIdentityRef@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@3@@Z
    MCAPI std::string const& getName(std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver
    ) const;

    // symbol: ?getPlayerId@ScoreboardIdentityRef@@QEBAAEBUPlayerScoreboardId@@XZ
    MCAPI struct PlayerScoreboardId const& getPlayerId() const;

    // symbol: ?getScoreboardId@ScoreboardIdentityRef@@QEBAAEBUScoreboardId@@XZ
    MCAPI struct ScoreboardId const& getScoreboardId() const;

    // symbol: ?modifyScoreInObjective@ScoreboardIdentityRef@@QEAA_NAEAHAEAVObjective@@HW4PlayerScoreSetFunction@@@Z
    MCAPI bool modifyScoreInObjective(int& result, class Objective& objective, int score, ::PlayerScoreSetFunction fn);

    // symbol: ?removeFromObjective@ScoreboardIdentityRef@@QEAA_NAEAVScoreboard@@AEAVObjective@@@Z
    MCAPI bool removeFromObjective(class Scoreboard& scoreboard, class Objective& objective);

    // symbol:
    // ?serialize@ScoreboardIdentityRef@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV1@@Z
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ScoreboardIdentityRef const& toSave);

    // symbol: ?Undefined@ScoreboardIdentityRef@@2V1@B
    MCAPI static class ScoreboardIdentityRef const Undefined;

    // NOLINTEND
};
