#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableDefinition {
public:
    // prevent constructor by default
    LeashableDefinition& operator=(LeashableDefinition const&);
    LeashableDefinition(LeashableDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI LeashableDefinition();

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LeashableDefinition>>&
            root
    );

    // NOLINTEND
};
