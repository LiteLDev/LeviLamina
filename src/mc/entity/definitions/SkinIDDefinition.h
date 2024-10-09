#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct SkinIDDefinition {
public:
    // prevent constructor by default
    SkinIDDefinition& operator=(SkinIDDefinition const&);
    SkinIDDefinition(SkinIDDefinition const&);
    SkinIDDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct SkinIDDefinition>>& root
    );

    // NOLINTEND
};
