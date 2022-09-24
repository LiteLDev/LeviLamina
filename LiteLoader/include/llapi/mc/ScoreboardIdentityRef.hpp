/**
 * @file  ScoreboardIdentityRef.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IdentityDefinition.hpp"

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
     * @hash   280550173
     * @symbol ??0ScoreboardIdentityRef@@QEAA@XZ
     */
    MCAPI ScoreboardIdentityRef();
    /**
     * @hash   1930115554
     * @symbol ??0ScoreboardIdentityRef@@QEAA@AEBUScoreboardId@@@Z
     */
    MCAPI ScoreboardIdentityRef(struct ScoreboardId const &);
    /**
     * @hash   -1132506918
     * @symbol ?getEntityId@ScoreboardIdentityRef@@QEBAAEBUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID const & getEntityId() const;
    /**
     * @hash   -1352512276
     * @symbol ?getFakePlayerName@ScoreboardIdentityRef@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getFakePlayerName() const;
    /**
     * @hash   -981034058
     * @symbol ?getIdentityType@ScoreboardIdentityRef@@QEBA?AW4Type@IdentityDefinition@@XZ
     */
    MCAPI enum IdentityDefinition::Type getIdentityType() const;
    /**
     * @hash   -2019088626
     * @symbol ?getName@ScoreboardIdentityRef@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@3@@Z
     */
    MCAPI std::string const & getName(class std::function<std::string const & (struct ActorUniqueID)> const &) const;
    /**
     * @hash   684289878
     * @symbol ?getPlayerId@ScoreboardIdentityRef@@QEBAAEBUPlayerScoreboardId@@XZ
     */
    MCAPI struct PlayerScoreboardId const & getPlayerId() const;
    /**
     * @hash   1008231880
     * @symbol ?getScoreboardId@ScoreboardIdentityRef@@QEBAAEBUScoreboardId@@XZ
     */
    MCAPI struct ScoreboardId const & getScoreboardId() const;
    /**
     * @hash   257352318
     * @symbol ?isPlayerType@ScoreboardIdentityRef@@QEBA_NXZ
     */
    MCAPI bool isPlayerType() const;
    /**
     * @hash   -1115659777
     * @symbol ?modifyScoreInObjective@ScoreboardIdentityRef@@QEAA_NAEAHAEAVObjective@@HW4PlayerScoreSetFunction@@@Z
     */
    MCAPI bool modifyScoreInObjective(int &, class Objective &, int, enum PlayerScoreSetFunction);
    /**
     * @hash   -413584740
     * @symbol ?removeFromObjective@ScoreboardIdentityRef@@QEAA_NAEAVScoreboard@@AEAVObjective@@@Z
     */
    MCAPI bool removeFromObjective(class Scoreboard &, class Objective &);
    /**
     * @hash   1247117033
     * @symbol ?Undefined@ScoreboardIdentityRef@@2V1@B
     */
    MCAPI static class ScoreboardIdentityRef const Undefined;
    /**
     * @hash   1255560535
     * @symbol ?serialize@ScoreboardIdentityRef@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV1@@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ScoreboardIdentityRef const &);

};