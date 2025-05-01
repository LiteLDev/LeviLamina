#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct DyeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk72e6d8;
    // NOLINTEND

public:
    // prevent constructor by default
    DyeableDefinition& operator=(DyeableDefinition const&);
    DyeableDefinition(DyeableDefinition const&);
    DyeableDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DyeableDefinition>>& root);
    // NOLINTEND
};
