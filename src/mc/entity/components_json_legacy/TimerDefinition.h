#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TimerDefinition {
public:
    // prevent constructor by default
    TimerDefinition& operator=(TimerDefinition const&);
    TimerDefinition(TimerDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI TimerDefinition();

    MCAPI void addWeightedChoiceEntry(struct WeightChoiceEntry const& entry);

    MCAPI void initialize(class EntityContext& entity, class TimerComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TimerDefinition>>& root
    );

    // NOLINTEND
};
