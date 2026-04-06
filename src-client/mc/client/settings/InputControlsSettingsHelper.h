#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RemappingLayout;
namespace Settings::InputControlsSettingsHelper { struct InputBindingGroup; }
namespace Settings::InputControlsSettingsHelper { struct InputBindingGroupData; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings::InputControlsSettingsHelper {
// functions
// NOLINTBEGIN
MCAPI ::Settings::InputControlsSettingsHelper::InputBindingGroup createInputBindingGroup(
    ::Settings::InputControlsSettingsHelper::InputBindingGroupData const& inputData,
    ::Settings::RegistryBuilder::IBuilderContext&                         context,
    ::RemappingLayout&                                                    layout,
    ::std::string_view                                                    id,
    uint64                                                                index
);
// NOLINTEND

} // namespace Settings::InputControlsSettingsHelper
