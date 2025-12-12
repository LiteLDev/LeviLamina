#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

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
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SittableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SittableDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
