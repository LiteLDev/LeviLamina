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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk20238a;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorDefinition& operator=(ColorDefinition const&);
    ColorDefinition(ColorDefinition const&);
    ColorDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void setColorChoice(int const& colorChoice);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ColorDefinition>>& root);
    // NOLINTEND
};
