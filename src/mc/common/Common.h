#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Common { struct BuildInfo; }
// clang-format on

namespace Common {
// NOLINTBEGIN
MCAPI struct Common::BuildInfo getBuildInfo();

MCAPI std::string getGameDevVersionString();

MCAPI std::string getGameSemVerString();

MCAPI std::string getGameVersionString();

MCAPI std::string getGameVersionStringNet();

MCAPI std::string getServerVersionString();
// NOLINTEND

}; // namespace Common
