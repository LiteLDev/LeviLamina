#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
// clang-format on

namespace VanillaGameVersions::Summer24Update {
// NOLINTBEGIN
// symbol: ?enabled@Summer24Update@VanillaGameVersions@@YA_NAEBVExperiments@@@Z
MCAPI bool enabled(class Experiments const&);

// symbol: ?enabled@Summer24Update@VanillaGameVersions@@YA_NAEBVBaseGameVersion@@AEBVExperiments@@@Z
MCAPI bool enabled(class BaseGameVersion const&, class Experiments const&);

// symbol: ?requiredVersion@Summer24Update@VanillaGameVersions@@YA?AVBaseGameVersion@@AEBV3@AEBVExperiments@@@Z
MCAPI class BaseGameVersion requiredVersion(class BaseGameVersion const&, class Experiments const&);
// NOLINTEND

}; // namespace VanillaGameVersions::Summer24Update
