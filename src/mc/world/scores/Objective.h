#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Objective {

public:
    // prevent constructor by default
    Objective& operator=(Objective const&) = delete;
    Objective(Objective const&)            = delete;
    Objective()                            = delete;

public:
    /**
     * @symbol
     * ??0Objective\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVObjectiveCriteria\@\@\@Z
     */
    MCAPI Objective(std::string const&, class ObjectiveCriteria const&); // NOLINT
    /**
     * @symbol ?getCriteria\@Objective\@\@QEBAAEBVObjectiveCriteria\@\@XZ
     */
    MCAPI class ObjectiveCriteria const& getCriteria() const; // NOLINT
    /**
     * @symbol
     * ?getDisplayName\@Objective\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getDisplayName() const; // NOLINT
    /**
     * @symbol ?getName\@Objective\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const; // NOLINT
    /**
     * @symbol ?getPlayerScore\@Objective\@\@QEBA?AUScoreInfo\@\@AEBUScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreInfo getPlayerScore(struct ScoreboardId const&) const; // NOLINT
    /**
     * @symbol
     * ?getPlayers\@Objective\@\@QEBA?AV?$vector\@UScoreboardId\@\@V?$allocator\@UScoreboardId\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScoreboardId> getPlayers() const; // NOLINT
    /**
     * @symbol
     * ?getScores\@Objective\@\@QEBAAEBV?$unordered_map\@UScoreboardId\@\@HU?$hash\@UScoreboardId\@\@\@std\@\@U?$equal_to\@UScoreboardId\@\@\@3\@V?$allocator\@U?$pair\@$$CBUScoreboardId\@\@H\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        struct ScoreboardId,
        int,
        struct std::hash<struct ScoreboardId>,
        struct std::equal_to<struct ScoreboardId>,
        class std::allocator<struct std::pair<struct ScoreboardId const, int>>> const&
    getScores() const; // NOLINT
    /**
     * @symbol ?hasScore\@Objective\@\@QEBA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool hasScore(struct ScoreboardId const&) const; // NOLINT
    /**
     * @symbol ?hasScores\@Objective\@\@QEBA_NXZ
     */
    MCAPI bool hasScores() const; // NOLINT
    /**
     * @symbol ??1Objective\@\@QEAA\@XZ
     */
    MCAPI ~Objective(); // NOLINT
    /**
     * @symbol
     * ?deserialize\@Objective\@\@SA?AV?$unique_ptr\@VObjective\@\@U?$default_delete\@VObjective\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVScoreboard\@\@\@Z
     */
    MCAPI static std::unique_ptr<class Objective> deserialize(class CompoundTag const&, class Scoreboard&); // NOLINT
    /**
     * @symbol
     * ?serialize\@Objective\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class Objective const&); // NOLINT

    // private:
    /**
     * @symbol ?_modifyPlayerScore\@Objective\@\@AEAA_NAEAHAEBUScoreboardId\@\@HW4PlayerScoreSetFunction\@\@\@Z
     */
    MCAPI bool _modifyPlayerScore(int&, struct ScoreboardId const&, int, enum class PlayerScoreSetFunction); // NOLINT
    /**
     * @symbol ?_resetPlayer\@Objective\@\@AEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void _resetPlayer(struct ScoreboardId const&); // NOLINT

private:
};
