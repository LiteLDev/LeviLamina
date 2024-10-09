#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RangedAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    RangedAttackDefinition& operator=(RangedAttackDefinition const&);
    RangedAttackDefinition(RangedAttackDefinition const&);
    RangedAttackDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RangedAttackDefinition() = default;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RangedAttackDefinition>>&
            root
    );

    // NOLINTEND
};
