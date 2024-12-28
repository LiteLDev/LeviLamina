#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/entity/definitions/ColorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct Color2Definition : public ::ColorDefinition {
public:
    // prevent constructor by default
    Color2Definition& operator=(Color2Definition const&);
    Color2Definition(Color2Definition const&);
    Color2Definition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::Color2Definition>>& root);
    // NOLINTEND
};
