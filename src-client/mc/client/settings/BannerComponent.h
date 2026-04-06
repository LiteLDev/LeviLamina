#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/BannerCta.h"
#include "mc/client/settings/BannerType.h"
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"
#include "mc/client/settings/ConfirmationRequest.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IDataProvider; }
// clang-format on

namespace Settings {

class BannerComponent : public ::Settings::Component<::Settings::BannerComponent> {
public:
    // BannerComponent inner types define
    using DataProvider = ::Settings::IDataProvider;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Settings::BannerType>                             mBannerType;
    ::ll::TypedStorage<8, 104, ::std::optional<::Settings::BannerCta>>           mCta;
    ::ll::TypedStorage<8, 136, ::std::optional<::Settings::ConfirmationRequest>> mConfirmationRequest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IDataProvider>>       mDataProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerComponent() /*override*/;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BannerComponent(
        ::std::string_view                               id,
        ::Settings::BannerType                           bannerType,
        ::std::string_view                               bannerText,
        ::std::optional<::Settings::BannerCta>           cta,
        ::std::optional<::Settings::ConfirmationRequest> confirmationRequest,
        ::std::unique_ptr<::Settings::IDataProvider>     dataProvider
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string_view                               id,
        ::Settings::BannerType                           bannerType,
        ::std::string_view                               bannerText,
        ::std::optional<::Settings::BannerCta>           cta,
        ::std::optional<::Settings::ConfirmationRequest> confirmationRequest,
        ::std::unique_ptr<::Settings::IDataProvider>     dataProvider
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
    MCFOLD ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
