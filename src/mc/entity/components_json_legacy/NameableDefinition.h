#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class NameableComponent;
struct NameAction;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::NameAction>> mNameActions;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>   mDefaultActionTrigger;
    ::ll::TypedStorage<1, 1, bool>                         mAlwaysShow;
    ::ll::TypedStorage<1, 1, bool>                         mAllowNameTagRenaming;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NameableDefinition();

    MCAPI void addNameAction(::NameAction const& nameAction);

    MCAPI void initialize(::EntityContext& entity, ::NameableComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::NameableDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
