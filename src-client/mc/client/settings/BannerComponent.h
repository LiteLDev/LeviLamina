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
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::string> getCtaText() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Settings
