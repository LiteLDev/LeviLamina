#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GuardianAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    GuardianAttackDefinition& operator=(GuardianAttackDefinition const&);
    GuardianAttackDefinition(GuardianAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GuardianAttackDefinition@@UEAA@XZ
    virtual ~GuardianAttackDefinition() = default;

    // vIndex: 1, symbol: ?validateMobType@GuardianAttackDefinition@@UEBA_NAEAVMob@@@Z
    virtual bool validateMobType(class Mob& mob) const;

    // symbol: ??0GuardianAttackDefinition@@QEAA@XZ
    MCAPI GuardianAttackDefinition();

    // symbol: ?initialize@GuardianAttackDefinition@@QEBAXAEAVEntityContext@@AEAVGuardianAttackGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class GuardianAttackGoal& goal) const;

    // symbol:
    // ?buildSchema@GuardianAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGuardianAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GuardianAttackDefinition>>& root
    );

    // NOLINTEND
};
