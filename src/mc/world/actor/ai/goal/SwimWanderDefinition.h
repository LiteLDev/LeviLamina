#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SwimWanderDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    SwimWanderDefinition& operator=(SwimWanderDefinition const&);
    SwimWanderDefinition(SwimWanderDefinition const&);
    SwimWanderDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SwimWanderDefinition@@UEAA@XZ
    virtual ~SwimWanderDefinition() = default;

    // symbol:
    // ?buildSchema@SwimWanderDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSwimWanderDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimWanderDefinition>>&
            root
    );

    // NOLINTEND
};
