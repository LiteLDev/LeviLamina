#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ChargeAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    ChargeAttackDefinition& operator=(ChargeAttackDefinition const&);
    ChargeAttackDefinition(ChargeAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChargeAttackDefinition@@UEAA@XZ
    virtual ~ChargeAttackDefinition() = default;

    // symbol: ??0ChargeAttackDefinition@@QEAA@XZ
    MCAPI ChargeAttackDefinition();

    // symbol: ?initialize@ChargeAttackDefinition@@QEBAXAEAVEntityContext@@AEAVChargeAttackGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class ChargeAttackGoal& goal) const;

    // symbol:
    // ?buildSchema@ChargeAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VChargeAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ChargeAttackDefinition>>&
            root
    );

    // NOLINTEND
};
