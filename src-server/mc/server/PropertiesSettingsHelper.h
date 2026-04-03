#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/PropertiesSettings.h"

// auto generated forward declare list
// clang-format off
struct NetworkServerConfig;
struct PropertiesSettings;
namespace Bedrock { class ActivationArguments; }
// clang-format on

namespace PropertiesSettingsHelper {
// functions
// NOLINTBEGIN
MCNAPI ::std::unordered_map<::std::string, ::std::string> getChangedValues(::PropertiesSettings const& properties);

MCNAPI ::NetworkServerConfig getNetworkServerConfig(::PropertiesSettings const& properties, bool isEduMode);

MCNAPI void overrideTelemetryData(
    ::PropertiesSettings::TelemetrySettings& telemetryData,
    ::Bedrock::ActivationArguments const&    activationArgs
);

MCNAPI bool overrideValueIfPresentAndNotEmpty(
    ::std::unordered_map<::std::string, ::std::string> const& arguments,
    ::std::string const&                                      key,
    ::std::string&                                            outValue
);
// NOLINTEND

} // namespace PropertiesSettingsHelper
