#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ServerConfiguration { struct ServerConfigurationJoinInfo; }
// clang-format on

namespace ServerConfigurationLoader {
// functions
// NOLINTBEGIN
MCNAPI bool loadServerConfigurationFromData(
    ::std::vector<uchar> const&                         data,
    ::ServerConfiguration::ServerConfigurationJoinInfo& configuration
);

MCNAPI bool loadServerConfigurationFromFile(
    ::std::string const&                                filename,
    ::ServerConfiguration::ServerConfigurationJoinInfo& configuration
);
// NOLINTEND

} // namespace ServerConfigurationLoader
