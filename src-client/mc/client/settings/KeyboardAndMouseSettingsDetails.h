#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/settings/NumberComponent.h"

// auto generated forward declare list
// clang-format off
class IOptions;
class KeyboardRemappingLayout;
namespace Settings { class ActionComponent; }
namespace Settings { class BannerComponent; }
namespace Settings { class BooleanComponent; }
namespace Settings { class GroupInfoComponent; }
namespace Settings { class OptionComponent; }
namespace Settings { class StringComponent; }
namespace Settings { class TextComponent; }
namespace Settings::KeyboardAndMouseSettingsDetails { struct AdvancedLayoutConfig; }
// clang-format on

namespace Settings::KeyboardAndMouseSettingsDetails {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::std::unique_ptr<::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>>>
createAdvancedLayoutGroup(
    ::IOptions&                                                              options,
    ::std::string_view                                                       id,
    ::KeyboardType                                                           type,
    ::Settings::KeyboardAndMouseSettingsDetails::AdvancedLayoutConfig const& config
);

MCAPI ::std::optional<::std::unique_ptr<::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>>>
createAdvancedLayoutHeader(
    ::std::string_view                                                       id,
    ::Settings::KeyboardAndMouseSettingsDetails::AdvancedLayoutConfig const& config
);

MCAPI ::std::optional<::std::unique_ptr<::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>>>
createKeyboardLayoutGroup(::IOptions& options, ::std::string_view id, ::KeyboardType type);

MCAPI ::std::optional<::std::unique_ptr<::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>>>
createKeymappingGroup(::std::string_view id, uint64 index, ::KeyboardRemappingLayout const& layout);

MCAPI ::std::optional<::std::unique_ptr<::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>>>
createMacroCommandInput(
    ::IOptions&                      options,
    ::std::string_view               id,
    uint64                           keymappingIndex,
    ::KeyboardRemappingLayout const& layout,
    ::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>& settingDependency
);

MCAPI ::std::optional<::std::unique_ptr<::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>>>
createResetGeneralSettings(::IOptions& options, ::std::string_view componentId);

MCAPI ::std::optional<::std::unique_ptr<::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>>>
createResetInputBindings(::IOptions& options, ::std::string_view componentId);

MCAPI ::std::optional<::std::unique_ptr<::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>>>
createSmoothRotationSpeed(::IOptions& options, ::std::string_view componentId);

MCAPI ::std::vector<uint64> getChordKeysIndex(::KeyboardRemappingLayout const& layout);

MCAPI ::std::vector<uint64> getMacroKeysIndex(::KeyboardRemappingLayout const& layout);

MCAPI ::std::vector<uint64> getNormalKeysIndex(::KeyboardRemappingLayout const& layout);
// NOLINTEND

} // namespace Settings::KeyboardAndMouseSettingsDetails
