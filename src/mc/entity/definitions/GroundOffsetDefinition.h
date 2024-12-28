#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct GroundOffsetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk54b13b;
    // NOLINTEND

public:
    // prevent constructor by default
    GroundOffsetDefinition& operator=(GroundOffsetDefinition const&);
    GroundOffsetDefinition(GroundOffsetDefinition const&);
    GroundOffsetDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GroundOffsetDefinition>>& root
    );
    // NOLINTEND
};
