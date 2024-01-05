#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeKeepOnJumpingDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    SlimeKeepOnJumpingDefinition& operator=(SlimeKeepOnJumpingDefinition const&);
    SlimeKeepOnJumpingDefinition(SlimeKeepOnJumpingDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SlimeKeepOnJumpingDefinition@@UEAA@XZ
    virtual ~SlimeKeepOnJumpingDefinition() = default;

    // symbol: ??0SlimeKeepOnJumpingDefinition@@QEAA@XZ
    MCAPI SlimeKeepOnJumpingDefinition();

    // symbol: ?initialize@SlimeKeepOnJumpingDefinition@@QEBAXAEAVEntityContext@@AEAVSlimeKeepOnJumpingGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class SlimeKeepOnJumpingGoal& goal) const;

    // symbol:
    // ?buildSchema@SlimeKeepOnJumpingDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSlimeKeepOnJumpingDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeKeepOnJumpingDefinition>>& root
    );

    // NOLINTEND
};
