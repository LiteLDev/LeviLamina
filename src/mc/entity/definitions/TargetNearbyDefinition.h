#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TargetNearbyDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkc50ab8;
    ::ll::UntypedStorage<4, 4>   mUnkf55c7e;
    ::ll::UntypedStorage<1, 1>   mUnk1f1461;
    ::ll::UntypedStorage<8, 104> mUnk809433;
    ::ll::UntypedStorage<8, 104> mUnk59ffaa;
    ::ll::UntypedStorage<8, 104> mUnk56719e;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetNearbyDefinition& operator=(TargetNearbyDefinition const&);
    TargetNearbyDefinition(TargetNearbyDefinition const&);
    TargetNearbyDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TargetNearbyDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TargetNearbyDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
