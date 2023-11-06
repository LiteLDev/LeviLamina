#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DrinkMilkGoal : public ::Goal {
public:
    // DrinkMilkGoal inner types declare
    // clang-format off
    class DrinkMilkDefinition;
    // clang-format on

    // DrinkMilkGoal inner types define
    class DrinkMilkDefinition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        DrinkMilkDefinition& operator=(DrinkMilkDefinition const&);
        DrinkMilkDefinition(DrinkMilkDefinition const&);
        DrinkMilkDefinition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1DrinkMilkDefinition@@@UEAA@XZ
        virtual ~DrinkMilkDefinition();

        // symbol: ?initialize@DrinkMilkDefinition@DrinkMilkGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext&, class DrinkMilkGoal&) const;

        // symbol:
        // ?buildSchema@DrinkMilkDefinition@DrinkMilkGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDrinkMilkDefinition@DrinkMilkGoal@@@JsonUtil@@@4@@Z
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DrinkMilkGoal::DrinkMilkDefinition>>&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DrinkMilkGoal& operator=(DrinkMilkGoal const&);
    DrinkMilkGoal(DrinkMilkGoal const&);
    DrinkMilkGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DrinkMilkGoal();

    // vIndex: 1, symbol: ?canUse@DrinkMilkGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DrinkMilkGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DrinkMilkGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DrinkMilkGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DrinkMilkGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DrinkMilkGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0DrinkMilkGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit DrinkMilkGoal(class Mob&);

    // NOLINTEND
};
