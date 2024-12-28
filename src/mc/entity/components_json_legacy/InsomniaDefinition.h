#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class InsomniaComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InsomniaDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk17de4d;
    // NOLINTEND

public:
    // prevent constructor by default
    InsomniaDefinition& operator=(InsomniaDefinition const&);
    InsomniaDefinition(InsomniaDefinition const&);
    InsomniaDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::InsomniaComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::InsomniaDefinition>>& root
    );
    // NOLINTEND
};
