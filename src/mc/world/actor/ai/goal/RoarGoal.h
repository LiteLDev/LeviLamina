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

class RoarGoal : public ::Goal {
public:
    // RoarGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RoarGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1Definition@RoarGoal@@UEAA@XZ
        virtual ~Definition() = default;

        // symbol: ??0Definition@RoarGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol: ?initialize@Definition@RoarGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class RoarGoal& goal) const;

        // symbol:
        // ?buildSchema@Definition@RoarGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@RoarGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RoarGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RoarGoal& operator=(RoarGoal const&);
    RoarGoal(RoarGoal const&);
    RoarGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RoarGoal@@UEAA@XZ
    virtual ~RoarGoal() = default;

    // vIndex: 1, symbol: ?canUse@RoarGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RoarGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RoarGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RoarGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RoarGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RoarGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RoarGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit RoarGoal(class Mob& mob);

    // NOLINTEND
};
