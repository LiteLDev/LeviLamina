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
    // vIndex: 0
    virtual ~SwimWanderDefinition() = default;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimWanderDefinition>>&
            root
    );

    // NOLINTEND
};
