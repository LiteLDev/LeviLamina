#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
struct FeedItem;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HealableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem>> mHealItems;
    ::ll::TypedStorage<1, 1, bool>                       mForceUse;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addFeedItem(::FeedItem const& feedItem);

    MCAPI void addFeedItemByName(::std::string const& itemName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HealableDefinition>>& root
    );
    // NOLINTEND
};
