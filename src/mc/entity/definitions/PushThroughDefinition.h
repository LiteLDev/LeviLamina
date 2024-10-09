#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct PushThroughDefinition {
public:
    // prevent constructor by default
    PushThroughDefinition& operator=(PushThroughDefinition const&);
    PushThroughDefinition(PushThroughDefinition const&);
    PushThroughDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct PushThroughDefinition>>&
            root
    );

    // NOLINTEND
};
