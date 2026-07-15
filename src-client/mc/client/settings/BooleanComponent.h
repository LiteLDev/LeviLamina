#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IBooleanDataProvider; }
namespace Settings { struct BooleanConfirmationRequest; }
// clang-format on

namespace Settings {

class BooleanComponent : public ::Settings::Component<::Settings::BooleanComponent> {
public:
    // BooleanComponent inner types define
    using DataProvider = ::Settings::IBooleanDataProvider;

    using ConfirmationRequestsProvider = ::std::function<::std::vector<::Settings::BooleanConfirmationRequest>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IBooleanDataProvider>> mDataProvider;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::Settings::BooleanConfirmationRequest>()>>
        mConfirmationRequestsProvider;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BooleanComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Settings
