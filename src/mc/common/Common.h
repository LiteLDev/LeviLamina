#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Common { struct StringConstants; }
// clang-format on

namespace Common {
// functions
// NOLINTBEGIN
MCAPI ::Common::StringConstants _buildStringConstants();

#ifdef LL_PLAT_C
MCNAPI ::std::optional<::std::string> getGameDevGitCommitKustoTimeString();

MCNAPI ::std::string getGameDevInfoString();

MCNAPI ::std::string const& getGameVersionStringNet();
#endif
// NOLINTEND

} // namespace Common
