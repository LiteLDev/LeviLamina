#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/IdentityDefinition.h"

class ScoreboardIdentityRef {

public:
    // prevent constructor by default
    ScoreboardIdentityRef& operator=(ScoreboardIdentityRef const&) = delete;
    ScoreboardIdentityRef(ScoreboardIdentityRef const&)            = delete;

public:
    /**
     * @symbol ??0ScoreboardIdentityRef\@\@QEAA\@AEBUScoreboardId\@\@\@Z
     */
    MCAPI ScoreboardIdentityRef(struct ScoreboardId const&); // NOLINT
    /**
     * @symbol ??0ScoreboardIdentityRef\@\@QEAA\@XZ
     */
    MCAPI ScoreboardIdentityRef(); // NOLINT
    /**
     * @symbol ?getEntityId\@ScoreboardIdentityRef\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const& getEntityId() const; // NOLINT
    /**
     * @symbol ?getIdentityType\@ScoreboardIdentityRef\@\@QEBA?AW4Type\@IdentityDefinition\@\@XZ
     */
    MCAPI enum class IdentityDefinition::Type getIdentityType() const; // NOLINT
    /**
     * @symbol
     * ?getName\@ScoreboardIdentityRef\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@3\@\@Z
     */
    MCAPI std::string const&
          getName(class std::function<std::string const&(struct ActorUniqueID)> const&) const; // NOLINT
    /**
     * @symbol ?getPlayerId\@ScoreboardIdentityRef\@\@QEBAAEBUPlayerScoreboardId\@\@XZ
     */
    MCAPI struct PlayerScoreboardId const& getPlayerId() const; // NOLINT
    /**
     * @symbol ?getScoreboardId\@ScoreboardIdentityRef\@\@QEBAAEBUScoreboardId\@\@XZ
     */
    MCAPI struct ScoreboardId const& getScoreboardId() const; // NOLINT
    /**
     * @symbol ?isPlayerType\@ScoreboardIdentityRef\@\@QEBA_NXZ
     */
    MCAPI bool isPlayerType() const; // NOLINT
    /**
     * @symbol
     * ?modifyScoreInObjective\@ScoreboardIdentityRef\@\@QEAA_NAEAHAEAVObjective\@\@HW4PlayerScoreSetFunction\@\@\@Z
     */
    MCAPI bool modifyScoreInObjective(int&, class Objective&, int, enum class PlayerScoreSetFunction); // NOLINT
    /**
     * @symbol ?removeFromObjective\@ScoreboardIdentityRef\@\@QEAA_NAEAVScoreboard\@\@AEAVObjective\@\@\@Z
     */
    MCAPI bool removeFromObjective(class Scoreboard&, class Objective&); // NOLINT
    /**
     * @symbol
     * ?serialize\@ScoreboardIdentityRef\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ScoreboardIdentityRef const&); // NOLINT
    /**
     * @symbol ?Undefined\@ScoreboardIdentityRef\@\@2V1\@B
     */
    MCAPI static class ScoreboardIdentityRef const Undefined; // NOLINT
};
