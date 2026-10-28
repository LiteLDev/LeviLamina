#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/RecentlyPlayedPendingTargetData.h"
#include "mc/client/world/RecentlyPlayedReloadMode.h"
#include "mc/client/world/RecentlyPlayedSessionTrackerError.h"
#include "mc/client/world/RecentlyPlayedStore.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/events/ClientInstanceEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstance;
namespace Social { class IUserManager; }
// clang-format on

namespace World {

class RecentlyPlayedSessionTracker : public ::ClientInstanceEventListener,
                                     public ::std::enable_shared_from_this<::World::RecentlyPlayedSessionTracker> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Social::IUserManager>>         mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mSignInCallbackHandle;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mSignOutCallbackHandle;
    ::ll::TypedStorage<8, 112, ::World::RecentlyPlayedStore>                              mStore;
    ::ll::TypedStorage<2, 4, ::std::optional<ushort>>                                     mLastRecordedJoinAttemptId;
    ::ll::TypedStorage<1, 1, bool>                                                        mProfileLoadFailed;
    ::ll::TypedStorage<8, 568, ::std::optional<::World::RecentlyPlayedPendingTargetData>> mPreparedTarget;
    ::ll::TypedStorage<2, 4, ::std::optional<ushort>>                                     mPendingJoinAttemptId;
    ::ll::TypedStorage<8, 568, ::std::optional<::World::RecentlyPlayedPendingTargetData>> mPendingTarget;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onClientEnteredWorld(::ClientInstance& client) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager);

    MCAPI void preparePendingTarget(::World::RecentlyPlayedPendingTargetData target);

    MCAPI ::nonstd::expected<uint64, ::World::RecentlyPlayedSessionTrackerError>
    reloadForPrimaryUser(::World::RecentlyPlayedReloadMode reloadMode);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onClientEnteredWorld(::ClientInstance& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
