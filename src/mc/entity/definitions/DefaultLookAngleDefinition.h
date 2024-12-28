#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct DefaultLookAngleDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka18c12;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultLookAngleDefinition& operator=(DefaultLookAngleDefinition const&);
    DefaultLookAngleDefinition(DefaultLookAngleDefinition const&);
    DefaultLookAngleDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DefaultLookAngleDefinition>>& root
    );
    // NOLINTEND
};
