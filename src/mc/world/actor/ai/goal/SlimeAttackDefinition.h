#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    SlimeAttackDefinition& operator=(SlimeAttackDefinition const&);
    SlimeAttackDefinition(SlimeAttackDefinition const&);
    SlimeAttackDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SlimeAttackDefinition@@UEAA@XZ
    virtual ~SlimeAttackDefinition() = default;

    // symbol:
    // ?buildSchema@SlimeAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSlimeAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeAttackDefinition>>&
            root
    );

    // NOLINTEND
};
