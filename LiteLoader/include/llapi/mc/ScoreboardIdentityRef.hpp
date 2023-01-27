/**
 * @file  ScoreboardIdentityRef.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../IdentityDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScoreboardIdentityRef.
 *
 */
class ScoreboardIdentityRef {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDIDENTITYREF
public:
    class ScoreboardIdentityRef& operator=(class ScoreboardIdentityRef const &) = delete;
    ScoreboardIdentityRef(class ScoreboardIdentityRef const &) = delete;
#endif

public:
    /**
     * @hash   1066663549
     * @symbol  ??0ScoreboardIdentityRef\@\@QEAA\@XZ
     */
    MCAPI ScoreboardIdentityRef();
    /**
     * @hash   -1578738366
     * @symbol  ??0ScoreboardIdentityRef\@\@QEAA\@AEBUScoreboardId\@\@\@Z
     */
    MCAPI ScoreboardIdentityRef(struct ScoreboardId const &);
    /**
     * @hash   -346393542
     * @symbol  ?getEntityId\@ScoreboardIdentityRef\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const & getEntityId() const;
    /**
     * @hash   -566398900
     * @symbol  ?getFakePlayerName\@ScoreboardIdentityRef\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getFakePlayerName() const;
    /**
     * @hash   -194920682
     * @symbol  ?getIdentityType\@ScoreboardIdentityRef\@\@QEBA?AW4Type\@IdentityDefinition\@\@XZ
     */
    MCAPI enum class IdentityDefinition::Type getIdentityType() const;
    /**
     * @hash   -1232975250
     * @symbol  ?getName\@ScoreboardIdentityRef\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@3\@\@Z
     */
    MCAPI std::string const & getName(class std::function<std::string const & (struct ActorUniqueID)> const &) const;
    /**
     * @hash   1470403254
     * @symbol  ?getPlayerId\@ScoreboardIdentityRef\@\@QEBAAEBUPlayerScoreboardId\@\@XZ
     */
    MCAPI struct PlayerScoreboardId const & getPlayerId() const;
    /**
     * @hash   1104854664
     * @symbol  ?getScoreboardId\@ScoreboardIdentityRef\@\@QEBAAEBUScoreboardId\@\@XZ
     */
    MCAPI struct ScoreboardId const & getScoreboardId() const;
    /**
     * @hash   1043465694
     * @symbol  ?isPlayerType\@ScoreboardIdentityRef\@\@QEBA_NXZ
     */
    MCAPI bool isPlayerType() const;
    /**
     * @hash   -329546401
     * @symbol  ?modifyScoreInObjective\@ScoreboardIdentityRef\@\@QEAA_NAEAHAEAVObjective\@\@HW4PlayerScoreSetFunction\@\@\@Z
     */
    MCAPI bool modifyScoreInObjective(int &, class Objective &, int, enum class PlayerScoreSetFunction);
    /**
     * @hash   372528636
     * @symbol  ?removeFromObjective\@ScoreboardIdentityRef\@\@QEAA_NAEAVScoreboard\@\@AEAVObjective\@\@\@Z
     */
    MCAPI bool removeFromObjective(class Scoreboard &, class Objective &);
    /**
     * @hash   2121942241
     * @symbol  ?Undefined\@ScoreboardIdentityRef\@\@2V1\@B
     */
    MCAPI static class ScoreboardIdentityRef const Undefined;
    /**
     * @hash   2041673911
     * @symbol  ?serialize\@ScoreboardIdentityRef\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ScoreboardIdentityRef const &);

};