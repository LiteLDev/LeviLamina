#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FrictionModifierDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdaaecd;
    // NOLINTEND

public:
    // prevent constructor by default
    FrictionModifierDefinition& operator=(FrictionModifierDefinition const&);
    FrictionModifierDefinition(FrictionModifierDefinition const&);
    FrictionModifierDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FrictionModifierDefinition>>& root
    );
    // NOLINTEND
};
