#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct PhysicsDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5cf56a;
    ::ll::UntypedStorage<1, 1> mUnk73884b;
    ::ll::UntypedStorage<1, 1> mUnkfe14e4;
    // NOLINTEND

public:
    // prevent constructor by default
    PhysicsDefinition& operator=(PhysicsDefinition const&);
    PhysicsDefinition(PhysicsDefinition const&);
    PhysicsDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PhysicsDefinition>>& root);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool const& HAS_COLLISION_DEFAULT();

    MCAPI static bool const& HAS_GRAVITY_DEFAULT();

    MCAPI static bool const& PUSH_TOWARDS_CLOSEST_SPACE_DEFAULT();
    // NOLINTEND
};
