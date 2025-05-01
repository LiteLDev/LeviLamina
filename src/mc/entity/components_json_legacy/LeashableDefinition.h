#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk3ee13a;
    ::ll::UntypedStorage<4, 4>   mUnk36113d;
    ::ll::UntypedStorage<4, 4>   mUnk486c7e;
    ::ll::UntypedStorage<8, 104> mUnk4ed5a0;
    ::ll::UntypedStorage<8, 104> mUnk1cf322;
    ::ll::UntypedStorage<1, 1>   mUnk4b4c40;
    // NOLINTEND

public:
    // prevent constructor by default
    LeashableDefinition& operator=(LeashableDefinition const&);
    LeashableDefinition(LeashableDefinition const&);
    LeashableDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LeashableDefinition>>& root
    );
    // NOLINTEND
};
