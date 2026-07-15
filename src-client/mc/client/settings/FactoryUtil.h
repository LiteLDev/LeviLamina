#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/NumberComponent.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
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
    ::IOptionRegistry&                                                   options,
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
    ::IOptionRegistry&                  options
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
    ::IOptionRegistry&                  options,
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
    ::IOptionRegistry&                  options
);

MCAPI ::std::string getOptionName(::Option const& option);

MCAPI ::std::optional<::std::string> getOptionalDescription(::Option const& option);

MCAPI bool isDuplicate(
    ::gsl::span<::std::unique_ptr<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>> parent,
    ::std::string_view                 id
);
// NOLINTEND

} // namespace Settings::FactoryUtil
