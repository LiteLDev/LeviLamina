#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SittableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkccd2c1;
    ::ll::UntypedStorage<8, 104> mUnk92e4be;
    // NOLINTEND

public:
    // prevent constructor by default
    SittableDefinition& operator=(SittableDefinition const&);
    SittableDefinition(SittableDefinition const&);
    SittableDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SittableDefinition>>& root
    );
    // NOLINTEND
};
