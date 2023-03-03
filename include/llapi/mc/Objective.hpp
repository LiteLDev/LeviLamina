/**
 * @file  Objective.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief The scoreboard objective
 *
 */
class Objective {

#define AFTER_EXTRA
// Add Member There
public:
    /**
     * @brief Set the display mode of the objective.
     * 
     * @param slotName The display position (The right of the escape menu: `list` ; The sidebar: `sidebar` ; Below the name bar: `belowName` )
     */
    LIAPI bool setDisplay(const std::string& slotName, ObjectiveSortOrder sort);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OBJECTIVE
public:
    class Objective& operator=(class Objective const &) = delete;
    Objective(class Objective const &) = delete;
    Objective() = delete;
#endif

public:
    /**
     * @symbol  ??0Objective\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVObjectiveCriteria\@\@\@Z
     */
    MCAPI Objective(std::string const &, class ObjectiveCriteria const &);
    /**
     * @symbol  ?getCriteria\@Objective\@\@QEBAAEBVObjectiveCriteria\@\@XZ
     */
    MCAPI class ObjectiveCriteria const & getCriteria() const;
    /**
     * @symbol  ?getDisplayName\@Objective\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getDisplayName() const;
    /**
     * @symbol  ?getName\@Objective\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol  ?getPlayerScore\@Objective\@\@QEBA?AUScoreInfo\@\@AEBUScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreInfo getPlayerScore(struct ScoreboardId const &) const;
    /**
     * @symbol  ?getPlayerScoreRef\@Objective\@\@QEAA_NAEBUScoreboardId\@\@AEAUScoreInfoRef\@\@\@Z
     */
    MCAPI bool getPlayerScoreRef(struct ScoreboardId const &, struct ScoreInfoRef &);
    /**
     * @symbol  ?getPlayers\@Objective\@\@QEBA?AV?$vector\@UScoreboardId\@\@V?$allocator\@UScoreboardId\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScoreboardId> getPlayers() const;
    /**
     * @symbol  ?getScores\@Objective\@\@QEBAAEBV?$unordered_map\@UScoreboardId\@\@HU?$hash\@UScoreboardId\@\@\@std\@\@U?$equal_to\@UScoreboardId\@\@\@3\@V?$allocator\@U?$pair\@$$CBUScoreboardId\@\@H\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<struct ScoreboardId, int, struct std::hash<struct ScoreboardId>, struct std::equal_to<struct ScoreboardId>, class std::allocator<struct std::pair<struct ScoreboardId const, int>>> const & getScores() const;
    /**
     * @symbol  ?hasScore\@Objective\@\@QEBA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool hasScore(struct ScoreboardId const &) const;
    /**
     * @symbol  ?hasScores\@Objective\@\@QEBA_NXZ
     */
    MCAPI bool hasScores() const;
    /**
     * @symbol  ?setDisplayName\@Objective\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setDisplayName(std::string const &);
    /**
     * @symbol  ??1Objective\@\@QEAA\@XZ
     */
    MCAPI ~Objective();
    /**
     * @symbol  ?deserialize\@Objective\@\@SA?AV?$unique_ptr\@VObjective\@\@U?$default_delete\@VObjective\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVScoreboard\@\@\@Z
     */
    MCAPI static std::unique_ptr<class Objective> deserialize(class CompoundTag const &, class Scoreboard &);
    /**
     * @symbol  ?serialize\@Objective\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class Objective const &);

//private:
    /**
     * @symbol  ?_modifyPlayerScore\@Objective\@\@AEAA_NAEAHAEBUScoreboardId\@\@HW4PlayerScoreSetFunction\@\@\@Z
     */
    MCAPI bool _modifyPlayerScore(int &, struct ScoreboardId const &, int, enum class PlayerScoreSetFunction);
    /**
     * @symbol  ?_resetPlayer\@Objective\@\@AEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void _resetPlayer(struct ScoreboardId const &);

private:

};