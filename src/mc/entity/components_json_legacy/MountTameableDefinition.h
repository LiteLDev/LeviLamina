#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
struct FeedItem;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MountTameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                              mMinTemper;
    ::ll::TypedStorage<4, 4, int>                              mMaxTemper;
    ::ll::TypedStorage<4, 4, int>                              mAttemptTemperMod;
    ::ll::TypedStorage<8, 32, ::std::string>                   mFeedText;
    ::ll::TypedStorage<8, 32, ::std::string>                   mVehicleText;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnTame;
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem>>       mFeedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mAutoRejectItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MountTameableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MountTameableDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
