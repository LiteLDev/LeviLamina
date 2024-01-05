#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/target/TargetGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DefendVillageTargetDefinition : public ::TargetGoalDefinition {
public:
    // prevent constructor by default
    DefendVillageTargetDefinition& operator=(DefendVillageTargetDefinition const&);
    DefendVillageTargetDefinition(DefendVillageTargetDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DefendVillageTargetDefinition@@UEAA@XZ
    virtual ~DefendVillageTargetDefinition() = default;

    // symbol: ??0DefendVillageTargetDefinition@@QEAA@XZ
    MCAPI DefendVillageTargetDefinition();

    // symbol: ?initialize@DefendVillageTargetDefinition@@QEBAXAEAVEntityContext@@AEAVDefendVillageTargetGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class DefendVillageTargetGoal& goal) const;

    // symbol:
    // ?buildSchema@DefendVillageTargetDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDefendVillageTargetDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DefendVillageTargetDefinition>>& root
    );

    // NOLINTEND
};
