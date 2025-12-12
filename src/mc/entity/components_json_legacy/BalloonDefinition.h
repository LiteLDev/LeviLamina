#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BalloonDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkf4bb3e;
    // NOLINTEND

public:
    // prevent constructor by default
    BalloonDefinition& operator=(BalloonDefinition const&);
    BalloonDefinition(BalloonDefinition const&);
    BalloonDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BalloonDefinition>>& root);
    // NOLINTEND
};
