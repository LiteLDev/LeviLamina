#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RangedAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    RangedAttackDefinition& operator=(RangedAttackDefinition const&);
    RangedAttackDefinition(RangedAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RangedAttackDefinition@@UEAA@XZ
    virtual ~RangedAttackDefinition() = default;

    // symbol: ??0RangedAttackDefinition@@QEAA@XZ
    MCAPI RangedAttackDefinition();

    // symbol: ?initialize@RangedAttackDefinition@@QEBAXAEAVEntityContext@@AEAVRangedAttackGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class RangedAttackGoal& goal) const;

    // symbol:
    // ?buildSchema@RangedAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VRangedAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RangedAttackDefinition>>&
            root
    );

    // NOLINTEND
};
