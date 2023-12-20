#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MeleeBoxAttackDefinition : public ::MeleeAttackBaseDefinition {
public:
    // prevent constructor by default
    MeleeBoxAttackDefinition& operator=(MeleeBoxAttackDefinition const&);
    MeleeBoxAttackDefinition(MeleeBoxAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MeleeBoxAttackDefinition@@UEAA@XZ
    virtual ~MeleeBoxAttackDefinition() = default;

    // symbol: ??0MeleeBoxAttackDefinition@@QEAA@XZ
    MCAPI MeleeBoxAttackDefinition();

    // symbol: ?initialize@MeleeBoxAttackDefinition@@QEBAXAEAVEntityContext@@AEAVMeleeBoxAttackGoal@@@Z
    MCAPI void initialize(class EntityContext&, class MeleeBoxAttackGoal&) const;

    // symbol:
    // ?buildSchema@MeleeBoxAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMeleeBoxAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MeleeBoxAttackDefinition>>&);

    // NOLINTEND
};
