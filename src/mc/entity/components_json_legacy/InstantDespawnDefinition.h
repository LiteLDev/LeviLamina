#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InstantDespawnDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk638b2e;
    // NOLINTEND

public:
    // prevent constructor by default
    InstantDespawnDefinition& operator=(InstantDespawnDefinition const&);
    InstantDespawnDefinition(InstantDespawnDefinition const&);
    InstantDespawnDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::InstantDespawnDefinition>>& root
    );
    // NOLINTEND
};
