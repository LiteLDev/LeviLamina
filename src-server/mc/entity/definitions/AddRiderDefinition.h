#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AddRiderDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkdf9ba4;
    // NOLINTEND

public:
    // prevent constructor by default
    AddRiderDefinition& operator=(AddRiderDefinition const&);
    AddRiderDefinition(AddRiderDefinition const&);
    AddRiderDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AddRiderDefinition>>& root);
    // NOLINTEND

};
