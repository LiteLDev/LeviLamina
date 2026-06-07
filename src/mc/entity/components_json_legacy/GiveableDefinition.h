#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GiveableComponent;
struct GiveableTrigger;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GiveableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GiveableTrigger>> mTriggers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addGiveableTrigger(::GiveableTrigger const& trigger);

    MCAPI void initialize(::EntityContext&, ::GiveableComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GiveableDefinition>>& root
    );
    // NOLINTEND
};
