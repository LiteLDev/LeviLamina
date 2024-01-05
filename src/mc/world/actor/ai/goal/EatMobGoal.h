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

class EatMobGoal : public ::Goal {
public:
    // EatMobGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // EatMobGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Definition@EatMobGoal@@UEAA@XZ
        virtual ~Definition();

        // symbol: ??0Definition@EatMobGoal@@QEAA@XZ
        MCAPI Definition();

        // symbol: ?initialize@Definition@EatMobGoal@@QEBAXAEAVEntityContext@@AEAV2@@Z
        MCAPI void initialize(class EntityContext& entity, class EatMobGoal& goal) const;

        // symbol:
        // ?buildSchema@Definition@EatMobGoal@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefinition@EatMobGoal@@@JsonUtil@@@4@@Z
        MCAPI static void buildSchema(
            std::string const& name,
            std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EatMobGoal::Definition>>& root
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EatMobGoal& operator=(EatMobGoal const&);
    EatMobGoal(EatMobGoal const&);
    EatMobGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EatMobGoal@@UEAA@XZ
    virtual ~EatMobGoal() = default;

    // vIndex: 1, symbol: ?canUse@EatMobGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@EatMobGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@EatMobGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@EatMobGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@EatMobGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@EatMobGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0EatMobGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit EatMobGoal(class Mob& mob);

    // NOLINTEND
};
