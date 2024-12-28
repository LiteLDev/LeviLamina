#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BalloonableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk771e4f;
    ::ll::UntypedStorage<4, 4>   mUnkbaa192;
    ::ll::UntypedStorage<4, 4>   mUnk7e1b86;
    ::ll::UntypedStorage<8, 104> mUnkcf48f0;
    ::ll::UntypedStorage<8, 104> mUnkb631eb;
    // NOLINTEND

public:
    // prevent constructor by default
    BalloonableDefinition& operator=(BalloonableDefinition const&);
    BalloonableDefinition(BalloonableDefinition const&);
    BalloonableDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BalloonableDefinition>>& root
    );
    // NOLINTEND
};
