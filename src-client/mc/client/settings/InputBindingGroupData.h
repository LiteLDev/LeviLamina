#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class ActionComponent; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings::InputControlsSettingsHelper {

struct InputBindingGroupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputMode>                                        mInputMode;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>()>> mBindDescriptionCallback;
    ::ll::TypedStorage<4, 8, ::std::optional<::KeyboardType>>                    mKeyboardType;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>(::Settings::ActionComponent const&)>>
                                                       mBindActionLabelProvider;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mResetActionCallback;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<bool(
            ::Settings::RegistryBuilder::IBuilderContext const&,
            ::std::string_view,
            ::std::optional<::KeyboardType>
        )>>
        mGetterCaptureStateCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~InputBindingGroupData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Settings::InputControlsSettingsHelper
