#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SwimWithEntityDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    SwimWithEntityDefinition& operator=(SwimWithEntityDefinition const&);
    SwimWithEntityDefinition(SwimWithEntityDefinition const&);
    SwimWithEntityDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwimWithEntityDefinition() = default;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimWithEntityDefinition>>& root
    );

    // NOLINTEND
};
