#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Common { struct BuildInfo; }
// clang-format on

namespace Common {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::string getBuildFlavor();

MCAPI ::std::string getBuildIdString();
#endif

MCAPI ::Common::BuildInfo getBuildInfo();

#ifdef LL_PLAT_C
MCAPI ::std::optional<::std::string> getGameDevGitCommitKustoTimeString();

MCAPI ::std::string getGameDevInfoString();

MCAPI ::std::string getGameDisplayVersionStringNet();
#endif

MCAPI ::std::string getGameSemVerString();

MCAPI ::std::string getGameVersionString();

MCAPI ::std::string getGameVersionStringNet();

#ifdef LL_PLAT_S
MCAPI ::std::string getServerVersionString();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::optional<::std::string> getShortBuildDateISOString();
#endif
// NOLINTEND

} // namespace Common
