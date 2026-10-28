#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ColorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb1b293;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorDefinition& operator=(ColorDefinition const&);
    ColorDefinition(ColorDefinition const&);
    ColorDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setColorChoice(int const& colorChoice);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ColorDefinition>>& root);
    // NOLINTEND
};
