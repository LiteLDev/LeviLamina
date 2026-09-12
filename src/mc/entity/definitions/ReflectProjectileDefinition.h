#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ReflectProjectileDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode>           mAzimuthAngle;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>           mElevationAngle;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>           mReflectionScale;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorType>> mProjectilesToReflect;
    ::ll::TypedStorage<8, 32, ::std::string>              mReflectionSound;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addProjectileToReflect(::std::string const& projectileName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ReflectProjectileDefinition>>& root
    );
    // NOLINTEND
};
