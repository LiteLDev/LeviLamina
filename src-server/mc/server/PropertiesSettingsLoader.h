#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PropertiesSettings;
// clang-format on

namespace PropertiesSettingsLoader {
// functions
// NOLINTBEGIN
MCNAPI bool loadPropertiesSettingsFromFile(::std::string const& filename, ::PropertiesSettings& properties);

MCNAPI bool loadPropertiesSettingsFromStream(::std::iostream& stream, ::PropertiesSettings& properties);
// NOLINTEND

} // namespace PropertiesSettingsLoader
