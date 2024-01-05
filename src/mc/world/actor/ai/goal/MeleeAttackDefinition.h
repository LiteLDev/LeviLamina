#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MeleeAttackDefinition : public ::MeleeAttackBaseDefinition {
public:
    // prevent constructor by default
    MeleeAttackDefinition& operator=(MeleeAttackDefinition const&);
    MeleeAttackDefinition(MeleeAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MeleeAttackDefinition@@UEAA@XZ
    virtual ~MeleeAttackDefinition();

    // symbol: ??0MeleeAttackDefinition@@QEAA@XZ
    MCAPI MeleeAttackDefinition();

    // symbol: ?initialize@MeleeAttackDefinition@@QEBAXAEAVEntityContext@@AEAVMeleeAttackGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class MeleeAttackGoal& goal) const;

    // symbol:
    // ?buildSchema@MeleeAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMeleeAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MeleeAttackDefinition>>&
            root
    );

    // NOLINTEND
};
