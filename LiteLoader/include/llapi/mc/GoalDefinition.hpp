/**
 * @file  GoalDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure GoalDefinition.
 *
 */
struct GoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @hash   -1007610190
     * @symbol  ??0GoalDefinition\@\@QEAA\@XZ
     */
    MCAPI GoalDefinition();
    /**
     * @hash   1241448863
     * @symbol  ??0GoalDefinition\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI GoalDefinition(struct GoalDefinition const &);
    /**
     * @hash   1035297993
     * @symbol  ??0GoalDefinition\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI GoalDefinition(struct GoalDefinition &&);
    /**
     * @hash   -970017601
     * @symbol  ?_getPOITypeFromString\@GoalDefinition\@\@QEAA?AW4POIType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class POIType _getPOITypeFromString(std::string);
    /**
     * @hash   1974699318
     * @symbol  ??4GoalDefinition\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct GoalDefinition & operator=(struct GoalDefinition const &);
    /**
     * @hash   -2038296832
     * @symbol  ??4GoalDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct GoalDefinition & operator=(struct GoalDefinition &&);
    /**
     * @hash   -691659268
     * @symbol  ?parse\@GoalDefinition\@\@QEAA_NAEBUConstDeserializeDataParams\@\@H\@Z
     */
    MCAPI bool parse(struct ConstDeserializeDataParams const &, int);
    /**
     * @hash   1302722544
     * @symbol  ??1GoalDefinition\@\@QEAA\@XZ
     */
    MCAPI ~GoalDefinition();
    /**
     * @hash   833856709
     * @symbol  ?CreateGoal\@GoalDefinition\@\@SA?AV?$unique_ptr\@VGoal\@\@U?$default_delete\@VGoal\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEBU1\@\@Z
     */
    MCAPI static std::unique_ptr<class Goal> CreateGoal(class Mob &, struct GoalDefinition const &);
    /**
     * @hash   1503364747
     * @symbol  ?GoalExists\@GoalDefinition\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool GoalExists(std::string const &);
    /**
     * @hash   -979047037
     * @symbol  ?init\@GoalDefinition\@\@SAXXZ
     */
    MCAPI static void init();
    /**
     * @hash   -26542459
     * @symbol  ?mGoalMap\@GoalDefinition\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6A?AV?$unique_ptr\@VGoal\@\@U?$default_delete\@VGoal\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEBUGoalDefinition\@\@\@Z\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6A?AV?$unique_ptr\@VGoal\@\@U?$default_delete\@VGoal\@\@\@std\@\@\@std\@\@AEAVMob\@\@AEBUGoalDefinition\@\@\@Z\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, class std::function<std::unique_ptr<class Goal> (class Mob &, struct GoalDefinition const &)>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::function<std::unique_ptr<class Goal> (class Mob &, struct GoalDefinition const &)>>>> mGoalMap;
    /**
     * @hash   -200602029
     * @symbol  ?shutdown\@GoalDefinition\@\@SAXXZ
     */
    MCAPI static void shutdown();

};