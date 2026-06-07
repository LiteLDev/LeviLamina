#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class TameableComponent;
struct ActorDefinitionTameItem;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                     mTameChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTameItem>> mTameItems;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                mOnTame;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TameableDefinition();

    MCAPI void addTamingItem(::ActorDefinitionTameItem const& tameItem);

    MCAPI void addTamingItemByName(::std::string const& name);

    MCAPI void initialize(::EntityContext&, ::TameableComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TameableDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
