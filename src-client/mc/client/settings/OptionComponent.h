#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IOptionsDataProvider; }
namespace Settings { struct OptionConfirmationRequest; }
// clang-format on

namespace Settings {

class OptionComponent : public ::Settings::Component<::Settings::OptionComponent> {
public:
    // OptionComponent inner types define
    using DataProvider = ::Settings::IOptionsDataProvider;

    using ConfirmationRequestsProvider = ::std::function<::std::vector<::Settings::OptionConfirmationRequest>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IOptionsDataProvider>> mDataProvider;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::Settings::OptionConfirmationRequest>()>>
        mConfirmationRequestsProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionComponent() /*override*/ = default;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OptionComponent(
        ::std::string_view                                  id,
        ::std::string_view                                  name,
        ::std::optional<::std::string>                      description,
        ::std::unique_ptr<::Settings::IOptionsDataProvider> dataProvider
    );

    MCAPI ::std::optional<::std::string> getInfo() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string_view                                  id,
        ::std::string_view                                  name,
        ::std::optional<::std::string>                      description,
        ::std::unique_ptr<::Settings::IOptionsDataProvider> dataProvider
    );
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
