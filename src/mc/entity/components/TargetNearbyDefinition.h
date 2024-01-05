#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol:
    // ?buildSchema@TargetNearbyDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VTargetNearbyDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TargetNearbyDefinition>>&
            root
    );

    // NOLINTEND
};
