#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct OnTargetAcquiredDefinition {
public:
    // prevent constructor by default
    OnTargetAcquiredDefinition& operator=(OnTargetAcquiredDefinition const&);
    OnTargetAcquiredDefinition(OnTargetAcquiredDefinition const&);
    OnTargetAcquiredDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnTargetAcquiredDefinition>>& root
    );

    // NOLINTEND
};
