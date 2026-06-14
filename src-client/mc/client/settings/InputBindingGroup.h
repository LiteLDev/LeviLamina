#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/ActionComponent.h"
#include "mc/client/settings/BannerComponent.h"
#include "mc/client/settings/BooleanComponent.h"
#include "mc/client/settings/GroupInfoComponent.h"
#include "mc/client/settings/NumberComponent.h"
#include "mc/client/settings/OptionComponent.h"
#include "mc/client/settings/StringComponent.h"
#include "mc/client/settings/TextComponent.h"

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
};

} // namespace Settings::InputControlsSettingsHelper
