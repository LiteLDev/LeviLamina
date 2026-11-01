#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ScaleDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk849fdc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScaleDefinition& operator=(ScaleDefinition const&);
    ScaleDefinition(ScaleDefinition const&);
    ScaleDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ScaleDefinition>>& root);
    // NOLINTEND
};
