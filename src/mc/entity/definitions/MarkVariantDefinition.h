#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct MarkVariantDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk83dc2e;
    // NOLINTEND

public:
    // prevent constructor by default
    MarkVariantDefinition& operator=(MarkVariantDefinition const&);
    MarkVariantDefinition(MarkVariantDefinition const&);
    MarkVariantDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MarkVariantDefinition>>& root
    );
    // NOLINTEND
};
