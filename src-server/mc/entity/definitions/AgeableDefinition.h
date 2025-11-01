#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
struct ActorDefinitionFeedItem;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AgeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk207183;
    ::ll::UntypedStorage<8, 64> mUnk1793dc;
    ::ll::UntypedStorage<8, 24> mUnk655e2d;
    ::ll::UntypedStorage<8, 24> mUnk6f2e03;
    ::ll::UntypedStorage<8, 104> mUnka52bbd;
    ::ll::UntypedStorage<8, 16> mUnkdc85de;
    // NOLINTEND

public:
    // prevent constructor by default
    AgeableDefinition& operator=(AgeableDefinition const&);
    AgeableDefinition(AgeableDefinition const&);
    AgeableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addDropItem(::ItemDescriptor const& itemDescriptor);

    MCNAPI void addFeedItem(::ActorDefinitionFeedItem const& feedItem);

    MCNAPI void addFeedItemByName(::std::string const& itemName);

    MCNAPI ~AgeableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AgeableDefinition>>& root);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
