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
MCAPI ::std::optional<::std::string> getGameDevGitCommitKustoTimeString();

MCAPI ::std::string getGameDevInfoString();

MCAPI ::std::string const& getGameVersionStringNet();
#endif
// NOLINTEND

} // namespace Common
