#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CollisionBoxDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnke9cf3a;
    // NOLINTEND

public:
    // prevent constructor by default
    CollisionBoxDefinition& operator=(CollisionBoxDefinition const&);
    CollisionBoxDefinition(CollisionBoxDefinition const&);
    CollisionBoxDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setHeight(float const& height);

    MCNAPI void setWidth(float const& width);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CollisionBoxDefinition>>& root
    );
    // NOLINTEND
};
