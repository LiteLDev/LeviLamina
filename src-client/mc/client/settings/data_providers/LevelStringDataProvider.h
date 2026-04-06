#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IStringDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { class IStringPropertyHandler; }
// clang-format on

namespace Settings {

class LevelStringDataProvider : public ::Settings::IStringDataProvider {
public:
    // LevelStringDataProvider inner types define
    using SubscriptionConnector = ::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IStringPropertyHandler>> mDelegate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>>>
                                                                              mSubscriptionConnectors;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                 mCachedValue;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mLevelChangedSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStringDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual ::std::string getValue() const /*override*/;

    virtual void setValue(::std::string_view value) /*override*/;

    virtual void commitValue() /*override*/;

    virtual ~LevelStringDataProvider() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelStringDataProvider(
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback,
        ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>> subscriptionConnectors,
        ::std::unique_ptr<::Settings::IStringPropertyHandler>                                    delegate
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
        ::std::unique_ptr<::Settings::IStringPropertyHandler>                                    delegate
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canModify() const;

    MCAPI ::std::string $getValue() const;

    MCAPI void $setValue(::std::string_view value);

    MCAPI void $commitValue();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
