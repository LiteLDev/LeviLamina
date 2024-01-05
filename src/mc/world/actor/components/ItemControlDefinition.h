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
    // symbol:
    // ?addItemByName@ItemControlDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addItemByName(std::string const& name);

    // symbol:
    // ?buildSchema@ItemControlDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UItemControlDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ItemControlDefinition>>&
            root
    );

    // NOLINTEND
};
