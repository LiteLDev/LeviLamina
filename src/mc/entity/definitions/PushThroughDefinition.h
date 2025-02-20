#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct PushThroughDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk22d1ab;
    // NOLINTEND

public:
    // prevent constructor by default
    PushThroughDefinition& operator=(PushThroughDefinition const&);
    PushThroughDefinition(PushThroughDefinition const&);
    PushThroughDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PushThroughDefinition>>& root
    );
    // NOLINTEND
};
