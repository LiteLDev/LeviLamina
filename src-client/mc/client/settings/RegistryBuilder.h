#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Settings { class IRegistry; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings::RegistryBuilder {
// functions
// NOLINTBEGIN
MCAPI ::std::shared_ptr<::Settings::IRegistry>
buildDefaultSettingsRegistry(::std::shared_ptr<::Settings::RegistryBuilder::IBuilderContext> context);
// NOLINTEND

} // namespace Settings::RegistryBuilder
