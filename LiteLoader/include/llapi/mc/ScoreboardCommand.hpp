/**
 * @file  ScoreboardCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScoreboardCommand.
 *
 */
class ScoreboardCommand : public Command {

#define AFTER_EXTRA
// Add Member There
public:
struct InitProxy {
    InitProxy() = delete;
    InitProxy(InitProxy const&) = delete;
    InitProxy(InitProxy const&&) = delete;
};
struct SetScoreOutput {
    SetScoreOutput() = delete;
    SetScoreOutput(SetScoreOutput const&) = delete;
    SetScoreOutput(SetScoreOutput const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDCOMMAND
public:
    class ScoreboardCommand& operator=(class ScoreboardCommand const &) = delete;
    ScoreboardCommand(class ScoreboardCommand const &) = delete;
    ScoreboardCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScoreboardCommand();
    /**
     * @hash   -1172944114
     * @vftbl  1
     * @symbol  ?execute\@ScoreboardCommand\@\@EEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1943917631
     * @symbol  ?setup\@ScoreboardCommand\@\@SAXAEAVCommandRegistry\@\@$$QEAUInitProxy\@1\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, struct ScoreboardCommand::InitProxy &&);

//private:
    /**
     * @hash   1546993894
     * @symbol  ?_generateCumulativeOutput\@ScoreboardCommand\@\@AEBAXAEBUSetScoreOutput\@1\@AEBVObjective\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _generateCumulativeOutput(struct ScoreboardCommand::SetScoreOutput const &, class Objective const &, class CommandOutput &) const;
    /**
     * @hash   919691486
     * @symbol  ?_getObjective\@ScoreboardCommand\@\@AEBAPEAVObjective\@\@AEBVScoreboard\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NAEAVCommandOutput\@\@\@Z
     */
    MCAPI class Objective * _getObjective(class Scoreboard const &, std::string const &, bool, class CommandOutput &) const;
    /**
     * @hash   1986333716
     * @symbol  ?_getScoreboardIdsForSelector\@ScoreboardCommand\@\@AEBA?AV?$vector\@UScoreboardId\@\@V?$allocator\@UScoreboardId\@\@\@std\@\@\@std\@\@AEAVScoreboard\@\@AEBV?$WildcardCommandSelector\@VActor\@\@\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@_N\@Z
     */
    MCAPI std::vector<struct ScoreboardId> _getScoreboardIdsForSelector(class Scoreboard &, class WildcardCommandSelector<class Actor> const &, class CommandOrigin const &, class CommandOutput &, bool) const;
    /**
     * @hash   744097795
     * @symbol  ?_getSelectorResultsForObjective\@ScoreboardCommand\@\@AEBA_NAEAV?$vector\@UScoreboardId\@\@V?$allocator\@UScoreboardId\@\@\@std\@\@\@std\@\@AEAVScoreboard\@\@AEBV?$WildcardCommandSelector\@VActor\@\@\@\@AEAVObjective\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@_N\@Z
     */
    MCAPI bool _getSelectorResultsForObjective(std::vector<struct ScoreboardId> &, class Scoreboard &, class WildcardCommandSelector<class Actor> const &, class Objective &, class CommandOrigin const &, class CommandOutput &, bool) const;
    /**
     * @hash   1563444462
     * @symbol  ?addObjective\@ScoreboardCommand\@\@AEBAXAEAVScoreboard\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@11AEAVCommandOutput\@\@\@Z
     */
    MCAPI void addObjective(class Scoreboard &, std::string const &, std::string const &, std::string const &, class CommandOutput &) const;
    /**
     * @hash   -1929585935
     * @symbol  ?addPlayerScore\@ScoreboardCommand\@\@AEBAXAEAVScoreboard\@\@W4PlayerScoreSetFunction\@\@AEBUScoreboardId\@\@AEAVObjective\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@std\@\@AEAVCommandOutput\@\@AEAUSetScoreOutput\@1\@\@Z
     */
    MCAPI void addPlayerScore(class Scoreboard &, enum class PlayerScoreSetFunction, struct ScoreboardId const &, class Objective &, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &, struct ScoreboardCommand::SetScoreOutput &) const;
    /**
     * @hash   598129613
     * @symbol  ?applyPlayerOperation\@ScoreboardCommand\@\@AEBA_NAEAVScoreboard\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@std\@\@AEBUScoreboardId\@\@AEAVObjective\@\@3AEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAUSetScoreOutput\@1\@\@Z
     */
    MCAPI bool applyPlayerOperation(class Scoreboard &, class std::function<std::string const & (struct ActorUniqueID)> const &, struct ScoreboardId const &, class Objective &, class Objective &, class CommandOrigin const &, class CommandOutput &, struct ScoreboardCommand::SetScoreOutput &) const;
    /**
     * @hash   1014611527
     * @symbol  ?listObjectives\@ScoreboardCommand\@\@AEBAXAEBVScoreboard\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void listObjectives(class Scoreboard const &, class CommandOutput &) const;
    /**
     * @hash   1528181152
     * @symbol  ?listPlayers\@ScoreboardCommand\@\@AEBAXAEAVScoreboard\@\@AEBUScoreboardId\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@std\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void listPlayers(class Scoreboard &, struct ScoreboardId const &, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &) const;
    /**
     * @hash   -1703389568
     * @symbol  ?objectives\@ScoreboardCommand\@\@AEBAXAEAVScoreboard\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void objectives(class Scoreboard &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1080599800
     * @symbol  ?players\@ScoreboardCommand\@\@AEBAXAEAVScoreboard\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void players(class Scoreboard &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1243380577
     * @symbol  ?removeObjective\@ScoreboardCommand\@\@AEBAXAEAVScoreboard\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void removeObjective(class Scoreboard &, std::string const &, class CommandOutput &) const;
    /**
     * @hash   784447667
     * @symbol  ?resetPlayer\@ScoreboardCommand\@\@AEBAXAEAVScoreboard\@\@AEBUScoreboardId\@\@PEAVObjective\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@std\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void resetPlayer(class Scoreboard &, struct ScoreboardId const &, class Objective *, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &) const;
    /**
     * @hash   769391124
     * @symbol  ?setDisplayObjective\@ScoreboardCommand\@\@AEBAXAEAVScoreboard\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1W4ObjectiveSortOrder\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void setDisplayObjective(class Scoreboard &, std::string const &, std::string const &, enum class ObjectiveSortOrder, class CommandOutput &) const;
    /**
     * @hash   1951651572
     * @symbol  ?setPlayerRandomScore\@ScoreboardCommand\@\@AEBA_NAEAVScoreboard\@\@AEBUScoreboardId\@\@AEAVObjective\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@std\@\@AEAVCommandOutput\@\@AEAUSetScoreOutput\@1\@\@Z
     */
    MCAPI bool setPlayerRandomScore(class Scoreboard &, struct ScoreboardId const &, class Objective &, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &, struct ScoreboardCommand::SetScoreOutput &) const;
    /**
     * @hash   125026520
     * @symbol  ?testPlayerScore\@ScoreboardCommand\@\@AEBAXAEBUScoreboardId\@\@AEAVObjective\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@std\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void testPlayerScore(struct ScoreboardId const &, class Objective &, class std::function<std::string const & (struct ActorUniqueID)> const &, class CommandOutput &) const;
    /**
     * @hash   -58577573
     * @symbol  ?_getNonSortableDisplaySlots\@ScoreboardCommand\@\@CA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVScoreboard\@\@\@Z
     */
    MCAPI static std::vector<std::string> _getNonSortableDisplaySlots(class Scoreboard &);
    /**
     * @hash   201794186
     * @symbol  ?_getSortableDisplaySlots\@ScoreboardCommand\@\@CA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVScoreboard\@\@\@Z
     */
    MCAPI static std::vector<std::string> _getSortableDisplaySlots(class Scoreboard &);

private:

};