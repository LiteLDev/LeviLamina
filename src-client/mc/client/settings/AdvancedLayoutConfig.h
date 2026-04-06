#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings::KeyboardAndMouseSettingsDetails {

struct AdvancedLayoutConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::string_view> titleKey;
    ::ll::TypedStorage<8, 16, ::std::string_view> descriptionKey;
    // NOLINTEND
};

} // namespace Settings::KeyboardAndMouseSettingsDetails
