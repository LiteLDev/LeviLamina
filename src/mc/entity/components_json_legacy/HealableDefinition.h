#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

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
    MCAPI HealableDefinition();

    MCAPI void addFeedItem(struct FeedItem const& feedItem);

    MCAPI void addFeedItemByName(std::string const& itemName);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HealableDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
