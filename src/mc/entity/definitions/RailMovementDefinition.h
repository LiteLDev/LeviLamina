#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RailMovementDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7dde41;
    // NOLINTEND

public:
    // prevent constructor by default
    RailMovementDefinition& operator=(RailMovementDefinition const&);
    RailMovementDefinition(RailMovementDefinition const&);
    RailMovementDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RailMovementDefinition>>& root
    );
    // NOLINTEND
};
