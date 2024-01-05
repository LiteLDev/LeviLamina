#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HealableDefinition {
public:
    // prevent constructor by default
    HealableDefinition& operator=(HealableDefinition const&);
    HealableDefinition(HealableDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0HealableDefinition@@QEAA@XZ
    MCAPI HealableDefinition();

    // symbol: ?addFeedItem@HealableDefinition@@QEAAXAEBUFeedItem@@@Z
    MCAPI void addFeedItem(struct FeedItem const& feedItem);

    // symbol:
    // ?addFeedItemByName@HealableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addFeedItemByName(std::string const& itemName);

    // symbol:
    // ?buildSchema@HealableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHealableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HealableDefinition>>&
            root
    );

    // NOLINTEND
};
