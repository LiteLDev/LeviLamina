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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk567d00;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinIDDefinition& operator=(SkinIDDefinition const&);
    SkinIDDefinition(SkinIDDefinition const&);
    SkinIDDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SkinIDDefinition>>& root);
    // NOLINTEND
};
