#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct LootTableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk13423b;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTableDefinition& operator=(LootTableDefinition const&);
    LootTableDefinition(LootTableDefinition const&);
    LootTableDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LootTableDefinition>>& root
    );
    // NOLINTEND
};
