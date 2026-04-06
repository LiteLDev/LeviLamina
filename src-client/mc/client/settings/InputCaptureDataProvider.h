#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/settings/IBooleanDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings::InputControlsSettingsHelper {

class InputCaptureDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // InputCaptureDataProvider inner types define
    using GetterCallback = ::std::function<
        bool(::Settings::RegistryBuilder::IBuilderContext const&, ::std::string_view, ::std::optional<::KeyboardType>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                mAction;
    ::ll::TypedStorage<4, 8, ::std::optional<::KeyboardType>>               mType;
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<bool(
            ::Settings::RegistryBuilder::IBuilderContext const&,
            ::std::string_view,
            ::std::optional<::KeyboardType>
        )>>
        mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    InputCaptureDataProvider& operator=(InputCaptureDataProvider const&);
    InputCaptureDataProvider(InputCaptureDataProvider const&);
    InputCaptureDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual bool getValue() const /*override*/;

    virtual void setValue(bool) /*override*/;

    virtual ~InputCaptureDataProvider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canModify() const;

    MCAPI bool $getValue() const;

    MCFOLD void $setValue(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings::InputControlsSettingsHelper
