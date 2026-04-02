#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RailActivatorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnActivate;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnDeactivate;
    ::ll::TypedStorage<1, 1, bool>                       mCheckBlockTypes;
    ::ll::TypedStorage<1, 1, bool>                       mTickCommandBlockOnActivate;
    ::ll::TypedStorage<1, 1, bool>                       mTickCommandBlockOnDeactivate;
    ::ll::TypedStorage<1, 1, bool>                       mEjectOnActivate;
    ::ll::TypedStorage<1, 1, bool>                       mEjectOnDeactivate;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RailActivatorDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RailActivatorDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
