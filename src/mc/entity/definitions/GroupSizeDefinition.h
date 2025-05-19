#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GroupSizeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkba22e3;
    ::ll::UntypedStorage<8, 64> mUnka73a42;
    // NOLINTEND

public:
    // prevent constructor by default
    GroupSizeDefinition& operator=(GroupSizeDefinition const&);
    GroupSizeDefinition(GroupSizeDefinition const&);
    GroupSizeDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GroupSizeDefinition>>& root
    );
    // NOLINTEND
};
