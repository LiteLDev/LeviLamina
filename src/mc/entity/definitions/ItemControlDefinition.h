#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ItemControlDefinition {
public:
    // prevent constructor by default
    ItemControlDefinition& operator=(ItemControlDefinition const&);
    ItemControlDefinition(ItemControlDefinition const&);
    ItemControlDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addItemByName(std::string const& name);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ItemControlDefinition>>&
            root
    );

    // NOLINTEND
};
