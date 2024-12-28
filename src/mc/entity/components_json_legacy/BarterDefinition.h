#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BarterDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk985781;
    ::ll::UntypedStorage<4, 4>  mUnkd61421;
    // NOLINTEND

public:
    // prevent constructor by default
    BarterDefinition& operator=(BarterDefinition const&);
    BarterDefinition(BarterDefinition const&);
    BarterDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BarterDefinition>>& root);
    // NOLINTEND
};
