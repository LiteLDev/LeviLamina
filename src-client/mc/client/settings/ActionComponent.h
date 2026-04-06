#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                     mActionLabel;
    ::ll::TypedStorage<4, 8, ::std::optional<::Settings::SettingsActionType>>    mActionType;
    ::ll::TypedStorage<8, 136, ::std::optional<::Settings::ConfirmationRequest>> mConfirmationRequest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IActionDataProvider>> mDataProvider;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mActionCallback;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>(::Settings::ActionComponent const&)>>
        mActionLabelOverrideProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActionComponent() /*override*/;

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
        ::std::function<void()>                            actionCallback,
        ::std::optional<::Settings::ConfirmationRequest>   confirmationRequest,
        ::std::unique_ptr<::Settings::IActionDataProvider> dataProvider
    );

    MCAPI ::std::string getActionLabel() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string_view                                 id,
        ::std::string_view                                 name,
        ::std::optional<::std::string>                     description,
        ::std::string_view                                 actionLabel,
        ::std::function<void()>                            actionCallback,
        ::std::optional<::Settings::ConfirmationRequest>   confirmationRequest,
        ::std::unique_ptr<::Settings::IActionDataProvider> dataProvider
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
    MCAPI ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
