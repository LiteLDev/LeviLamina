#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DespawnDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk53e872;
    ::ll::UntypedStorage<1, 1>  mUnke961cb;
    ::ll::UntypedStorage<4, 4>  mUnk553827;
    ::ll::UntypedStorage<1, 1>  mUnk5f546f;
    ::ll::UntypedStorage<4, 4>  mUnk4e2d5a;
    ::ll::UntypedStorage<1, 1>  mUnk16fd17;
    ::ll::UntypedStorage<1, 1>  mUnka5a077;
    ::ll::UntypedStorage<4, 8>  mUnk7a21de;
    ::ll::UntypedStorage<1, 1>  mUnk5d7770;
    // NOLINTEND

public:
    // prevent constructor by default
    DespawnDefinition& operator=(DespawnDefinition const&);
    DespawnDefinition(DespawnDefinition const&);
    DespawnDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DespawnDefinition>>& root);
    // NOLINTEND
};
