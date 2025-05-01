#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FlyingSpeedDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9bcae5;
    // NOLINTEND

public:
    // prevent constructor by default
    FlyingSpeedDefinition& operator=(FlyingSpeedDefinition const&);
    FlyingSpeedDefinition(FlyingSpeedDefinition const&);
    FlyingSpeedDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FlyingSpeedDefinition>>& root
    );
    // NOLINTEND
};
