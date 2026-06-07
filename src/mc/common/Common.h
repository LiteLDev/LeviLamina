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
#endif

MCAPI ::std::string getBuildIdString();

MCAPI ::Common::BuildInfo getBuildInfo();

#ifdef LL_PLAT_C
MCAPI ::std::string getClientPlatform();

MCAPI ::std::optional<::std::string> getGameDevGitBranchString();

MCAPI ::std::optional<::std::string> getGameDevGitCommitKustoTimeString();

MCAPI ::std::optional<::std::string> getGameDevGitShaString();

MCAPI ::std::string getGameDevInfoString();

MCAPI ::std::string getGameDisplayVersionString();

MCAPI ::std::string getGameDisplayVersionStringNet();
#endif

MCFOLD ::std::string getGameSemVerString();

MCAPI ::std::string getGameVersionString();

MCFOLD ::std::string getGameVersionStringNet();

#ifdef LL_PLAT_C
MCFOLD ::std::optional<::std::string> getMergeBaseShaString();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string getServerVersionString();
#endif

#ifdef LL_PLAT_C
MCFOLD ::std::optional<::std::string> getShortBuildDateISOString();

MCFOLD ::std::optional<::std::string> getWorldConverterDevVersionNumberString();
#endif
// NOLINTEND

} // namespace Common
