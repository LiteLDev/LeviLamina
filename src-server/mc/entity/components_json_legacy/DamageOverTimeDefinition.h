#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DamageOverTimeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6894f9;
    ::ll::UntypedStorage<4, 4> mUnk82b498;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageOverTimeDefinition& operator=(DamageOverTimeDefinition const&);
    DamageOverTimeDefinition(DamageOverTimeDefinition const&);
    DamageOverTimeDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DamageOverTimeDefinition>>& root);
    // NOLINTEND

};
