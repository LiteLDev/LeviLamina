#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class InteractComponent;
class Interaction;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InteractDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Interaction>> mInteractions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addInteraction(::Interaction const& interaction);

    MCAPI void initialize(::EntityContext&, ::InteractComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::InteractDefinition>>& root
    );
    // NOLINTEND
};
