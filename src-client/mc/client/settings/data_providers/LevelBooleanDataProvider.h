#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { class IBooleanPropertyHandler; }
// clang-format on

namespace Settings {

class LevelBooleanDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // LevelBooleanDataProvider inner types define
    using SubscriptionConnector = ::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IBooleanPropertyHandler>> mDelegate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>>>
                                                                              mSubscriptionConnectors;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mLevelChangedSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelBooleanDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual bool getValue() const /*override*/;

    virtual void setValue(bool value) /*override*/;

    virtual ~LevelBooleanDataProvider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelBooleanDataProvider(
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback,
        ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>> subscriptionConnectors,
        ::std::unique_ptr<::Settings::IBooleanPropertyHandler>                                   delegate
    );

    MCAPI void _updateSubscriptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback,
        ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>> subscriptionConnectors,
        ::std::unique_ptr<::Settings::IBooleanPropertyHandler>                                   delegate
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canModify() const;

    MCFOLD bool $getValue() const;

    MCAPI void $setValue(bool value);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
