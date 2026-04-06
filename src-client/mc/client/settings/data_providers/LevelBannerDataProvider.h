#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
// clang-format on

namespace Settings {

class LevelBannerDataProvider : public ::Settings::IDataProvider {
public:
    // LevelBannerDataProvider inner types define
    using SubscriptionConnector = ::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>>>
                                                                              mSubscriptionConnectors;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mLevelChangedSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelBannerDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual ~LevelBannerDataProvider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelBannerDataProvider(
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback,
        ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>> subscriptionConnectors
    );

    MCAPI void _updateSubscriptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback,
        ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>> subscriptionConnectors
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canModify() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
