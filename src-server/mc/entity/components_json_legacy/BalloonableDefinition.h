#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BalloonableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk771e4f;
    ::ll::UntypedStorage<4, 4> mUnkbaa192;
    ::ll::UntypedStorage<4, 4> mUnk7e1b86;
    ::ll::UntypedStorage<8, 104> mUnkcf48f0;
    ::ll::UntypedStorage<8, 104> mUnkb631eb;
    // NOLINTEND

public:
    // prevent constructor by default
    BalloonableDefinition& operator=(BalloonableDefinition const&);
    BalloonableDefinition(BalloonableDefinition const&);
    BalloonableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BalloonableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BalloonableDefinition>>& root);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
