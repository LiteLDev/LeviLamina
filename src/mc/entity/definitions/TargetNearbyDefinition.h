#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TargetNearbyDefinition {
public:
    // prevent constructor by default
    TargetNearbyDefinition& operator=(TargetNearbyDefinition const&);
    TargetNearbyDefinition(TargetNearbyDefinition const&);
    TargetNearbyDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TargetNearbyDefinition>>&
            root
    );

    // NOLINTEND
};
