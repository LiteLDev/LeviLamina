#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IStringDataProvider; }
// clang-format on

namespace Settings {

class StringComponent : public ::Settings::Component<::Settings::StringComponent> {
public:
    // StringComponent inner types define
    using DataProvider = ::Settings::IStringDataProvider;

    using FormatValidationCallback = ::std::function<::std::optional<::std::string>(::std::string)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IStringDataProvider>> mDataProvider;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mPlaceholder;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                               mMaxLength;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::function<::std::optional<::std::string>(::std::string)>>>
                                                              mFormatValidation;
    ::ll::TypedStorage<1, 1, bool>                            mIsFormatValid;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFallbackValue;
    // NOLINTEND

public:
    // prevent constructor by default
    StringComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StringComponent() /*override*/;

    virtual ::Settings::ComponentState getDefaultState() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StringComponent(
        ::std::string_view                                 id,
        ::std::string_view                                 name,
        ::std::optional<::std::string>                     description,
        ::std::unique_ptr<::Settings::IStringDataProvider> dataProvider,
        ::std::optional<::std::string>                     placeholder,
        ::std::optional<int>                               maxLength
    );

    MCAPI ::std::optional<::std::string> getPlaceholder() const;

    MCAPI bool updateValue(::std::string const& value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string_view                                 id,
        ::std::string_view                                 name,
        ::std::optional<::std::string>                     description,
        ::std::unique_ptr<::Settings::IStringDataProvider> dataProvider,
        ::std::optional<::std::string>                     placeholder,
        ::std::optional<int>                               maxLength
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
