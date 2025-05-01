#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EquippableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2e94dc;
    // NOLINTEND

public:
    // prevent constructor by default
    EquippableDefinition& operator=(EquippableDefinition const&);
    EquippableDefinition(EquippableDefinition const&);
    EquippableDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EquippableDefinition>>& root
    );
    // NOLINTEND
};
