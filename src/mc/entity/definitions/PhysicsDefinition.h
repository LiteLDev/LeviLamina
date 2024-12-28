#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct PhysicsComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PhysicsDefinition {
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PhysicsDefinition();

    MCAPI void initialize(::EntityContext& entity, ::PhysicsComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PhysicsDefinition>>& root);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
