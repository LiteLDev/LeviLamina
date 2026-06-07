#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct SpawnEggInteractDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk714abe;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnEggInteractDefinition& operator=(SpawnEggInteractDefinition const&);
    SpawnEggInteractDefinition(SpawnEggInteractDefinition const&);
    SpawnEggInteractDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SpawnEggInteractDefinition>>& root
    );
    // NOLINTEND
};
