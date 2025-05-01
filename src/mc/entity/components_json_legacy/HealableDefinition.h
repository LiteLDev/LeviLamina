#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
struct FeedItem;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HealableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk583cd0;
    ::ll::UntypedStorage<1, 1>  mUnk60fbdc;
    ::ll::UntypedStorage<8, 64> mUnkf91ef7;
    // NOLINTEND

public:
    // prevent constructor by default
    HealableDefinition& operator=(HealableDefinition const&);
    HealableDefinition(HealableDefinition const&);
    HealableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addFeedItem(::FeedItem const& feedItem);

    MCNAPI void addFeedItemByName(::std::string const& itemName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HealableDefinition>>& root
    );
    // NOLINTEND
};
