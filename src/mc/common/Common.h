#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Common { struct BuildInfo; }
// clang-format on

namespace Common {
// functions
// NOLINTBEGIN
MCAPI ::Common::BuildInfo getBuildInfo();

#ifdef LL_PLAT_C
MCAPI ::std::optional<::std::string> getGameDevGitCommitKustoTimeString();

MCAPI ::std::string getGameDevInfoString();

MCAPI ::std::string getGameDisplayVersionStringNet();
#endif

MCFOLD ::std::string getGameSemVerString();

MCAPI ::std::string getGameVersionString();

MCFOLD ::std::string getGameVersionStringNet();

#ifdef LL_PLAT_S
MCAPI ::std::string getServerVersionString();
#endif
// NOLINTEND

} // namespace Common
