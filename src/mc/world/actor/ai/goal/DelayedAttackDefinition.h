#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DelayedAttackDefinition : public ::MeleeAttackDefinition {
public:
    // prevent constructor by default
    DelayedAttackDefinition& operator=(DelayedAttackDefinition const&);
    DelayedAttackDefinition(DelayedAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DelayedAttackDefinition@@UEAA@XZ
    virtual ~DelayedAttackDefinition() = default;

    // symbol: ??0DelayedAttackDefinition@@QEAA@XZ
    MCAPI DelayedAttackDefinition();

    // symbol: ?initialize@DelayedAttackDefinition@@QEBAXAEAVEntityContext@@AEAVDelayedAttackGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class DelayedAttackGoal& goal) const;

    // symbol:
    // ?buildSchema@DelayedAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDelayedAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DelayedAttackDefinition>>& root
    );

    // NOLINTEND
};
