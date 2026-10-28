#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CloudSyncTrigger;
class IClientInstance;
// clang-format on

class CloudSyncJsonUiPresenter {
public:
    // CloudSyncJsonUiPresenter inner types define
    using ClientProvider = ::std::function<::Bedrock::NonOwnerPointer<::IClientInstance>()>;

    using ShouldDisplayQuery = ::std::function<bool()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CloudSyncTrigger&>                                               mCloudSyncTrigger;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NonOwnerPointer<::IClientInstance>()>> mClientProvider;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                          mShouldDisplay;
    ::ll::TypedStorage<1, 1, bool>                                                              mHasPresentedThisSync;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudSyncJsonUiPresenter& operator=(CloudSyncJsonUiPresenter const&);
    CloudSyncJsonUiPresenter(CloudSyncJsonUiPresenter const&);
    CloudSyncJsonUiPresenter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CloudSyncJsonUiPresenter(
        ::CloudSyncTrigger&                                              cloudSyncTrigger,
        ::std::function<::Bedrock::NonOwnerPointer<::IClientInstance>()> clientProvider,
        ::std::function<bool()>                                          shouldDisplay
    );

    MCAPI void tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::CloudSyncTrigger&                                              cloudSyncTrigger,
        ::std::function<::Bedrock::NonOwnerPointer<::IClientInstance>()> clientProvider,
        ::std::function<bool()>                                          shouldDisplay
    );
    // NOLINTEND
};
