#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/settings/NumberComponent.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
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
    ::IOptionRegistry&                                                       options,
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
createKeyboardLayoutGroup(::IOptionRegistry& options, ::std::string_view id, ::KeyboardType type);

MCAPI ::std::vector<uint64> getChordKeysIndex(::KeyboardRemappingLayout const& layout);

MCAPI ::std::vector<uint64> getMacroKeysIndex(::KeyboardRemappingLayout const& layout);

MCAPI ::std::vector<uint64> getNormalKeysIndex(::KeyboardRemappingLayout const& layout);
// NOLINTEND

} // namespace Settings::KeyboardAndMouseSettingsDetails
