#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class ActorGarbageCollector;
class EntityContext;
class IDisplayActorManagerProxy;
// clang-format on

class DisplayActorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>>                     mDisplayEntities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IDisplayActorManagerProxy>>> mDisplayActorManagerProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> const>   mActorGarbageCollector;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChangeDimensionSubscription;
    // NOLINTEND
};
