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

class SonicBoomGoal : public ::Goal {
public:
    // SonicBoomGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // SonicBoomGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1Definition@SonicBoomGoal@@UEAA@XZ
        virtual ~Definition() = default;

        // symbol: ?initialize@Definition@SonicBoomGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class SonicBoomGoal& goal) const;

        // symbol:
        // ?buildSchema@Definition@SonicBoomGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@SonicBoomGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SonicBoomGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SonicBoomGoal& operator=(SonicBoomGoal const&);
    SonicBoomGoal(SonicBoomGoal const&);
    SonicBoomGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SonicBoomGoal@@UEAA@XZ
    virtual ~SonicBoomGoal() = default;

    // vIndex: 1, symbol: ?canUse@SonicBoomGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SonicBoomGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SonicBoomGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SonicBoomGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SonicBoomGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SonicBoomGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0SonicBoomGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit SonicBoomGoal(class Mob& mob);

    // NOLINTEND
};
