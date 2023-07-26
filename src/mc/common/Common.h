#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Common { struct BuildInfo; }
// clang-format on

namespace Common {
/**
 * @symbol ?getBuildInfo\@Common\@\@YA?AUBuildInfo\@1\@XZ
 */
MCAPI struct Common::BuildInfo getBuildInfo(); // NOLINT
/**
 * @symbol
 * ?getGameDevVersionString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
 */
MCAPI std::string getGameDevVersionString(); // NOLINT
/**
 * @symbol
 * ?getGameSemVerString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
 */
MCAPI std::string getGameSemVerString(); // NOLINT
/**
 * @symbol
 * ?getGameVersionString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
 */
MCAPI std::string getGameVersionString(); // NOLINT
/**
 * @symbol
 * ?getGameVersionStringNet\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
 */
MCAPI std::string getGameVersionStringNet(); // NOLINT
/**
 * @symbol
 * ?getServerVersionString\@Common\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
 */
MCAPI std::string getServerVersionString(); // NOLINT

}; // namespace Common
