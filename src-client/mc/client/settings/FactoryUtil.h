#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/NumberComponent.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class IOptions;
class Option;
namespace Settings { class ActionComponent; }
namespace Settings { class BannerComponent; }
namespace Settings { class BooleanComponent; }
namespace Settings { class GroupInfoComponent; }
namespace Settings { class IBooleanDataProvider; }
namespace Settings { class OptionComponent; }
namespace Settings { class StringComponent; }
namespace Settings { class TextComponent; }
// clang-format on

namespace Settings::FactoryUtil {
// functions
// NOLINTBEGIN
MCAPI void addBoolean(
    ::std::vector<::std::unique_ptr<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>&                                  parent,
    ::std::string_view                                                   id,
    ::OptionID                                                           optionId,
    ::IOptions&                                                          options,
    ::std::optional<::std::unique_ptr<::Settings::IBooleanDataProvider>> dataProvider
);

MCAPI void addInputBoolean(
    ::std::vector<::std::unique_ptr<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>& parent,
    ::std::string_view                  id,
    ::OptionID                          optionId,
    ::InputMode                         inputMode,
    ::IOptions&                         options
);

MCAPI void addInputFloatComponent(
    ::std::vector<::std::unique_ptr<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>& parent,
    ::std::string_view                  id,
    ::OptionID                          optionId,
    ::InputMode                         inputMode,
    ::IOptions&                         options,
    float                               scale,
    ::std::optional<::std::string>      optFormat
);

MCAPI void addOption(
    ::std::vector<::std::unique_ptr<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>& parent,
    ::std::string_view                  id,
    ::OptionID                          optionId,
    ::IOptions&                         options
);

MCAPI ::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>*
addSetting(
    ::std::vector<::std::unique_ptr<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>&  settings,
    ::std::optional<::std::unique_ptr<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>&& settingsValue,
    ::std::string_view                   details
);

MCAPI ::std::optional<::std::string> getOptionalDescription(::Option const& option);
// NOLINTEND

} // namespace Settings::FactoryUtil
