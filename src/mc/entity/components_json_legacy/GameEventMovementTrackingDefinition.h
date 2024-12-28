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
    ::ll::UntypedStorage<1, 1> mUnk27c313;
    ::ll::UntypedStorage<1, 1> mUnkd64ec5;
    ::ll::UntypedStorage<1, 1> mUnk1628a0;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventMovementTrackingDefinition& operator=(GameEventMovementTrackingDefinition const&);
    GameEventMovementTrackingDefinition(GameEventMovementTrackingDefinition const&);
    GameEventMovementTrackingDefinition();

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
