#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ControlledByPlayerDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    ControlledByPlayerDefinition& operator=(ControlledByPlayerDefinition const&);
    ControlledByPlayerDefinition(ControlledByPlayerDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ControlledByPlayerDefinition@@UEAA@XZ
    virtual ~ControlledByPlayerDefinition() = default;

    // symbol: ??0ControlledByPlayerDefinition@@QEAA@XZ
    MCAPI ControlledByPlayerDefinition();

    // symbol: ?initialize@ControlledByPlayerDefinition@@QEBAXAEAVEntityContext@@AEAVControlledByPlayerGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class ControlledByPlayerGoal& goal) const;

    // symbol:
    // ?buildSchema@ControlledByPlayerDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VControlledByPlayerDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ControlledByPlayerDefinition>>& root
    );

    // NOLINTEND
};
