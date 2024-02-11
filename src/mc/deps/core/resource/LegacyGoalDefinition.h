#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"

struct LegacyGoalDefinition {
public:
    // NOLINTBEGIN
    // symbol: ??0LegacyGoalDefinition@@QEAA@XZ
    MCAPI LegacyGoalDefinition();

    // symbol: ??0LegacyGoalDefinition@@QEAA@$$QEAU0@@Z
    MCAPI LegacyGoalDefinition(struct LegacyGoalDefinition&&);

    // symbol: ??0LegacyGoalDefinition@@QEAA@AEBU0@@Z
    MCAPI LegacyGoalDefinition(struct LegacyGoalDefinition const&);

    // symbol:
    // ?_getPOITypeFromString@LegacyGoalDefinition@@QEAA?AW4POIType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::POIType _getPOITypeFromString(std::string);

    // symbol: ??4LegacyGoalDefinition@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct LegacyGoalDefinition& operator=(struct LegacyGoalDefinition&&);

    // symbol: ??4LegacyGoalDefinition@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct LegacyGoalDefinition& operator=(struct LegacyGoalDefinition const&);

    // symbol: ?parse@LegacyGoalDefinition@@QEAA_NAEBUConstDeserializeDataParams@@H@Z
    MCAPI bool parse(struct ConstDeserializeDataParams const&, int);

    // symbol: ??1LegacyGoalDefinition@@QEAA@XZ
    MCAPI ~LegacyGoalDefinition();

    // symbol:
    // ?CreateGoal@LegacyGoalDefinition@@SA?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBU1@@Z
    MCAPI static std::unique_ptr<class Goal> CreateGoal(class Mob&, struct LegacyGoalDefinition const&);

    // symbol: ?GoalExists@LegacyGoalDefinition@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool GoalExists(std::string const&);

    // symbol: ?init@LegacyGoalDefinition@@SAXXZ
    MCAPI static void init();

    // symbol: ?shutdown@LegacyGoalDefinition@@SAXXZ
    MCAPI static void shutdown();

    // symbol:
    // ?mGoalMap@LegacyGoalDefinition@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBULegacyGoalDefinition@@@Z@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBULegacyGoalDefinition@@@Z@2@@std@@@2@@std@@A
    MCAPI static std::unordered_map<
        std::string,
        std::function<std::unique_ptr<class Goal>(class Mob&, struct LegacyGoalDefinition const&)>>
        mGoalMap;

    // NOLINTEND
};
