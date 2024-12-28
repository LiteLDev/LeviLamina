#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct TransientDefinition {
public:
    // prevent constructor by default
    TransientDefinition& operator=(TransientDefinition const&);
    TransientDefinition(TransientDefinition const&);
    TransientDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TransientDefinition>>& root
    );
    // NOLINTEND
};
