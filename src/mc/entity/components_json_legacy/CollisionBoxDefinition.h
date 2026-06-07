#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class CollisionBoxComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CollisionBoxDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mBBDim;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::CollisionBoxComponent& component) const;

    MCAPI void setHeight(float const& height);

    MCAPI void setWidth(float const& width);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CollisionBoxDefinition>>& root
    );
    // NOLINTEND
};
