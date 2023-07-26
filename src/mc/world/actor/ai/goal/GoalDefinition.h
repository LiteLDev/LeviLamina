#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GoalDefinition {

public:
    /**
     * @symbol ??0GoalDefinition\@\@QEAA\@XZ
     */
    MCAPI GoalDefinition(); // NOLINT
    /**
     * @symbol ??0GoalDefinition\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI GoalDefinition(struct GoalDefinition&&); // NOLINT
    /**
     * @symbol ??0GoalDefinition\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI GoalDefinition(struct GoalDefinition const&); // NOLINT
    /**
     * @symbol
     * ?_getPOITypeFromString\@GoalDefinition\@\@QEAA?AW4POIType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class POIType _getPOITypeFromString(std::string); // NOLINT
    /**
     * @symbol ??4GoalDefinition\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct GoalDefinition& operator=(struct GoalDefinition const&); // NOLINT
    /**
     * @symbol ??4GoalDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct GoalDefinition& operator=(struct GoalDefinition&&); // NOLINT
    /**
     * @symbol ?parse\@GoalDefinition\@\@QEAA_NAEBUConstDeserializeDataParams\@\@H\@Z
     */
    MCAPI bool parse(struct ConstDeserializeDataParams const&, int); // NOLINT
    /**
     * @symbol ??1GoalDefinition\@\@QEAA\@XZ
     */
    MCAPI ~GoalDefinition(); // NOLINT
    /**
     * @symbol
     * ?CreateGoal\@GoalDefinition\@\@SA?AV?$unique_ptr\@VGoal\@\@U?$default_delete\@VGoal\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEBU1\@\@Z
     */
    MCAPI static std::unique_ptr<class Goal> CreateGoal(class Mob&, struct GoalDefinition const&); // NOLINT
    /**
     * @symbol
     * ?GoalExists\@GoalDefinition\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool GoalExists(std::string const&); // NOLINT
    /**
     * @symbol ?init\@GoalDefinition\@\@SAXXZ
     */
    MCAPI static void init(); // NOLINT
    /**
     * @symbol ?shutdown\@GoalDefinition\@\@SAXXZ
     */
    MCAPI static void shutdown(); // NOLINT
    /**
     * @symbol
     * ?mGoalMap\@GoalDefinition\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6A?AV?$unique_ptr\@VGoal\@\@U?$default_delete\@VGoal\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEBUGoalDefinition\@\@\@Z\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6A?AV?$unique_ptr\@VGoal\@\@U?$default_delete\@VGoal\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEBUGoalDefinition\@\@\@Z\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        std::string,
        class std::function<std::unique_ptr<class Goal>(class Mob&, struct GoalDefinition const&)>,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<
            std::string const,
            class std::function<std::unique_ptr<class Goal>(class Mob&, struct GoalDefinition const&)>>>>
        mGoalMap; // NOLINT
};
