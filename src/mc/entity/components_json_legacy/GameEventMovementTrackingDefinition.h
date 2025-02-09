#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GameEventMovementTrackingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GameEventMovementTrackingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mEmitMove;
    ::ll::TypedStorage<1, 1, bool> mEmitSwim;
    ::ll::TypedStorage<1, 1, bool> mEmitFlap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::GameEventMovementTrackingComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GameEventMovementTrackingDefinition>>& root);
    // NOLINTEND
};
