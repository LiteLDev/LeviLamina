#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/NumberComponent.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class ActionComponent; }
namespace Settings { class BannerComponent; }
namespace Settings { class BooleanComponent; }
namespace Settings { class GroupInfoComponent; }
namespace Settings { class OptionComponent; }
namespace Settings { class StringComponent; }
namespace Settings { class TextComponent; }
// clang-format on

namespace Settings::InputControlsSettingsHelper {

struct InputBindingGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::unique_ptr<::std::variant<
            ::Settings::BooleanComponent,
            ::Settings::NumberComponent<int>,
            ::Settings::NumberComponent<float>,
            ::Settings::OptionComponent,
            ::Settings::StringComponent,
            ::Settings::ActionComponent,
            ::Settings::TextComponent,
            ::Settings::GroupInfoComponent,
            ::Settings::BannerComponent>>>>
        mGroup;
    ::ll::TypedStorage<
        8,
        8,
        ::std::variant<
            ::Settings::BooleanComponent,
            ::Settings::NumberComponent<int>,
            ::Settings::NumberComponent<float>,
            ::Settings::OptionComponent,
            ::Settings::StringComponent,
            ::Settings::ActionComponent,
            ::Settings::TextComponent,
            ::Settings::GroupInfoComponent,
            ::Settings::BannerComponent>*>
        mRebindAction;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~InputBindingGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Settings::InputControlsSettingsHelper
