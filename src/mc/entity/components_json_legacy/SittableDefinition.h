#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class SitComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SittableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnSit;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStand;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void uninitialize(::EntityContext& entity, ::SitComponent&) const;

    MCAPI ~SittableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SittableDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
