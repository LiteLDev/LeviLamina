#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"

struct GoalDefinition {
public:
    // NOLINTBEGIN
    // symbol: ??0GoalDefinition@@QEAA@XZ
    MCAPI GoalDefinition();

    // symbol: ??0GoalDefinition@@QEAA@$$QEAU0@@Z
    MCAPI GoalDefinition(struct GoalDefinition&&);

    // symbol: ??0GoalDefinition@@QEAA@AEBU0@@Z
    MCAPI GoalDefinition(struct GoalDefinition const&);

    // symbol:
    // ?_getPOITypeFromString@GoalDefinition@@QEAA?AW4POIType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::POIType _getPOITypeFromString(std::string poiStr);

    // symbol: ??4GoalDefinition@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct GoalDefinition& operator=(struct GoalDefinition&&);

    // symbol: ??4GoalDefinition@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct GoalDefinition& operator=(struct GoalDefinition const&);

    // symbol: ?parse@GoalDefinition@@QEAA_NAEBUConstDeserializeDataParams@@H@Z
    MCAPI bool parse(struct ConstDeserializeDataParams const&, int priority);

    // symbol: ??1GoalDefinition@@QEAA@XZ
    MCAPI ~GoalDefinition();

    // symbol:
    // ?CreateGoal@GoalDefinition@@SA?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBU1@@Z
    MCAPI static std::unique_ptr<class Goal> CreateGoal(class Mob& mob, struct GoalDefinition const& def);

    // symbol: ?GoalExists@GoalDefinition@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool GoalExists(std::string const& name);

    // symbol: ?init@GoalDefinition@@SAXXZ
    MCAPI static void init();

    // symbol: ?shutdown@GoalDefinition@@SAXXZ
    MCAPI static void shutdown();

    // symbol:
    // ?mGoalMap@GoalDefinition@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBUGoalDefinition@@@Z@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBUGoalDefinition@@@Z@2@@std@@@2@@std@@A
    MCAPI static std::
        unordered_map<std::string, std::function<std::unique_ptr<class Goal>(class Mob&, struct GoalDefinition const&)>>
            mGoalMap;

    // NOLINTEND
};
