#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ItemControlDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk104938;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemControlDefinition& operator=(ItemControlDefinition const&);
    ItemControlDefinition(ItemControlDefinition const&);
    ItemControlDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addItemByName(::std::string const& name);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ItemControlDefinition>>& root
    );
    // NOLINTEND
};
