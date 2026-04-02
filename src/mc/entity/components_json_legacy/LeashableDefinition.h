#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
struct LeashablePreset;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::LeashablePreset>> mPresets;
    ::ll::TypedStorage<1, 1, bool>                              mCanBeCut;
    ::ll::TypedStorage<1, 1, bool>                              mCanBeStolen;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnLeash;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnUnleash;
    ::ll::TypedStorage<1, 1, bool>                              mOnUnleashInteractOnly;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LeashableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LeashableDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
