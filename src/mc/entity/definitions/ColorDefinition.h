#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ColorDefinition {
public:
    // prevent constructor by default
    ColorDefinition& operator=(ColorDefinition const&);
    ColorDefinition(ColorDefinition const&);
    ColorDefinition();

public:
    // NOLINTBEGIN
    MCAPI void setColorChoice(int const& colorChoice);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ColorDefinition>>& root
    );

    // NOLINTEND
};
