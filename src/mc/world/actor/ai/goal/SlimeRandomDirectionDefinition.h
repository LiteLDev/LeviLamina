#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeRandomDirectionDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    SlimeRandomDirectionDefinition& operator=(SlimeRandomDirectionDefinition const&);
    SlimeRandomDirectionDefinition(SlimeRandomDirectionDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SlimeRandomDirectionDefinition@@UEAA@XZ
    virtual ~SlimeRandomDirectionDefinition() = default;

    // symbol: ??0SlimeRandomDirectionDefinition@@QEAA@XZ
    MCAPI SlimeRandomDirectionDefinition();

    // symbol: ?initialize@SlimeRandomDirectionDefinition@@QEBAXAEAVEntityContext@@AEAVSlimeRandomDirectionGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class SlimeRandomDirectionGoal& goal) const;

    // symbol:
    // ?buildSchema@SlimeRandomDirectionDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSlimeRandomDirectionDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeRandomDirectionDefinition>>&
            root
    );

    // NOLINTEND
};
