#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Common { struct BuildInfo; }
// clang-format on

namespace Common {
// functions
// NOLINTBEGIN
MCAPI ::std::string getBuildFlavor();

MCAPI ::std::string getBuildIdString();

MCAPI ::Common::BuildInfo getBuildInfo();

MCAPI ::std::optional<::std::string> getGameDevGitCommitKustoTimeString();

MCAPI ::std::string getGameDevInfoString();

MCAPI ::std::string getGameDisplayVersionStringNet();

MCAPI ::std::string getGameSemVerString();

MCAPI ::std::string getGameVersionString();

MCAPI ::std::string getGameVersionStringNet();

MCAPI ::std::string getServerVersionString();

MCAPI ::std::optional<::std::string> getShortBuildDateISOString();
// NOLINTEND

} // namespace Common
