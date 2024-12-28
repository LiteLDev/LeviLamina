#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

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
    ::ll::UntypedStorage<8, 24> mUnkc1876e;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractDefinition& operator=(InteractDefinition const&);
    InteractDefinition(InteractDefinition const&);
    InteractDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addInteraction(::Interaction const& interaction);

    MCAPI void initialize(::EntityContext&, ::InteractComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::InteractDefinition>>& root
    );
    // NOLINTEND
};
