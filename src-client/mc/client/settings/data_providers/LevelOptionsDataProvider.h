#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { class IOptionPropertyHandler; }
namespace Settings { struct OptionData; }
// clang-format on

namespace Settings {

class LevelOptionsDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // LevelOptionsDataProvider inner types define
    using SubscriptionConnector = ::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IOptionPropertyHandler>> mDelegate;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::Settings::OptionData>>                mValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>>>
                                                                              mSubscriptionConnectors;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mLevelChangedSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelOptionsDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const /*override*/;

    virtual int getValue() const /*override*/;

    virtual void setValue(int index) /*override*/;

    virtual ::std::optional<::std::string> const& getInfo() const /*override*/;

    virtual ~LevelOptionsDataProvider() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelOptionsDataProvider(
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback,
        ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>> subscriptionConnectors,
        ::std::unique_ptr<::Settings::IOptionPropertyHandler>                                    delegate
    );

    MCAPI void _updateData();

    MCAPI void _updateSubscriptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback,
        ::std::vector<::std::function<::Bedrock::PubSub::Subscription(::std::function<void()>)>> subscriptionConnectors,
        ::std::unique_ptr<::Settings::IOptionPropertyHandler>                                    delegate
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

    MCAPI ::gsl::span<::Settings::OptionData const> $getOptions() const;

    MCFOLD int $getValue() const;

    MCAPI void $setValue(int index);

    MCFOLD ::std::optional<::std::string> const& $getInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
