#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeFloatDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    SlimeFloatDefinition& operator=(SlimeFloatDefinition const&);
    SlimeFloatDefinition(SlimeFloatDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SlimeFloatDefinition@@UEAA@XZ
    virtual ~SlimeFloatDefinition() = default;

    // symbol: ??0SlimeFloatDefinition@@QEAA@XZ
    MCAPI SlimeFloatDefinition();

    // symbol: ?initialize@SlimeFloatDefinition@@QEBAXAEAVEntityContext@@AEAVSlimeFloatGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class SlimeFloatGoal& goal) const;

    // symbol:
    // ?buildSchema@SlimeFloatDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSlimeFloatDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeFloatDefinition>>&
            root
    );

    // NOLINTEND
};
