#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Common { struct BuildInfo; }
// clang-format on

namespace Common {
// functions
// NOLINTBEGIN
MCAPI_C ::std::string getBuildFlavor();

MCAPI ::Common::BuildInfo getBuildInfo();

MCAPI_C ::std::optional<::std::string> getGameDevGitCommitKustoTimeString();

MCAPI_C ::std::string getGameDevInfoString();

MCAPI_C ::std::string getGameDevVersionString();

MCAPI ::std::string getGameSemVerString();

MCAPI ::std::string getGameVersionString();

MCAPI ::std::string getGameVersionStringNet();

MCAPI_S ::std::string getServerVersionString();

MCAPI_C ::std::optional<::std::string> getShortBuildDateISOString();
// NOLINTEND

} // namespace Common
