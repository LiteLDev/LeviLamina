#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
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
    // vIndex: 0
    virtual ~SlimeAttackDefinition() = default;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeAttackDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
