#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseGoalDefinition {
public:
    // prevent constructor by default
    BaseGoalDefinition& operator=(BaseGoalDefinition const&);
    BaseGoalDefinition(BaseGoalDefinition const&);
    BaseGoalDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BaseGoalDefinition@@UEAA@XZ
    virtual ~BaseGoalDefinition();

    // vIndex: 1, symbol: ?validateMobType@BaseGoalDefinition@@UEBA_NAEAVMob@@@Z
    virtual bool validateMobType(class Mob&) const;

    // vIndex: 2, symbol: ?validate@BaseGoalDefinition@@UEBA_NAEAVMob@@@Z
    virtual bool validate(class Mob&) const;

    // symbol: ?initialize@BaseGoalDefinition@@QEBAXAEAVEntityContext@@AEAVGoal@@@Z
    MCAPI void initialize(class EntityContext&, class Goal& goal) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mControlFlagMap@BaseGoalDefinition@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@A
    MCAPI static std::unordered_map<std::string, int> mControlFlagMap;

    // NOLINTEND
};
