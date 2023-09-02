#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MeleeAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    MeleeAttackDefinition& operator=(MeleeAttackDefinition const&) = delete;
    MeleeAttackDefinition(MeleeAttackDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1MeleeAttackDefinition@@UEAA@XZ
    MCVAPI ~MeleeAttackDefinition();

    // symbol: ??0MeleeAttackDefinition@@QEAA@XZ
    MCAPI MeleeAttackDefinition();

    // symbol: ?initialize@MeleeAttackDefinition@@QEBAXAEAVEntityContext@@AEAVMeleeAttackGoal@@@Z
    MCAPI void initialize(class EntityContext&, class MeleeAttackGoal&) const;

    // symbol:
    // ?buildSchema@MeleeAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMeleeAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MeleeAttackDefinition>>&);

    // NOLINTEND
};
