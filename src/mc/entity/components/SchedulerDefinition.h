#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SchedulerDefinition {
public:
    // prevent constructor by default
    SchedulerDefinition& operator=(SchedulerDefinition const&);
    SchedulerDefinition(SchedulerDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI SchedulerDefinition();

    MCAPI void initialize(class EntityContext&, class SchedulerComponent& component) const;

    MCAPI void setMaxDelayTicks(float const& seconds);

    MCAPI void setMinDelayTicks(float const& seconds);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SchedulerDefinition>>&
            root
    );

    // NOLINTEND
};
