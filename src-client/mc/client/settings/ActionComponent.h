#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/AsyncProgressInfo.h"
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"
#include "mc/client/settings/ConfirmationRequest.h"
#include "mc/client/settings/SettingsActionType.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IActionDataProvider; }
// clang-format on

namespace Settings {

class ActionComponent : public ::Settings::Component<::Settings::ActionComponent> {
public:
    // ActionComponent inner types define
    using DataProvider = ::Settings::IActionDataProvider;

    using ActionLabelOverrideProvider =
        ::std::function<::std::optional<::std::string>(::Settings::ActionComponent const&)>;

    using ActionCallback = ::std::function<void(::std::function<void(bool)>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                      mActionLabel;
    ::ll::TypedStorage<4, 8, ::std::optional<::Settings::SettingsActionType>>     mActionType;
    ::ll::TypedStorage<8, 136, ::std::optional<::Settings::ConfirmationRequest>>  mConfirmationRequest;
    ::ll::TypedStorage<8, 72, ::std::optional<::Settings::AsyncProgressInfo>>     mAsyncProgressInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IActionDataProvider>>  mDataProvider;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::function<void(bool)>)>> mActionCallback;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>(::Settings::ActionComponent const&)>>
        mActionLabelOverrideProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActionComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActionComponent(
        ::std::string_view                                 id,
        ::std::string_view                                 name,
        ::std::optional<::std::string>                     description,
        ::std::string_view                                 actionLabel,
        ::std::function<void(::std::function<void(bool)>)> actionCallback,
        ::std::optional<::Settings::ConfirmationRequest>   confirmationRequest,
        ::std::optional<::Settings::AsyncProgressInfo>     asyncProgressInfo,
        ::std::unique_ptr<::Settings::IActionDataProvider> dataProvider
    );

    MCAPI ::std::string getActionLabel() const;

    MCAPI bool invokeClickCallback(::std::function<void(bool)> statusCallback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string_view                                 id,
        ::std::string_view                                 name,
        ::std::optional<::std::string>                     description,
        ::std::string_view                                 actionLabel,
        ::std::function<void(::std::function<void(bool)>)> actionCallback,
        ::std::optional<::Settings::ConfirmationRequest>   confirmationRequest,
        ::std::optional<::Settings::AsyncProgressInfo>     asyncProgressInfo,
        ::std::unique_ptr<::Settings::IActionDataProvider> dataProvider
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Settings
