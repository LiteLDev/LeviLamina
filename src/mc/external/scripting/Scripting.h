#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { enum class LogLevel; }
// clang-format on

namespace Scripting {
/**
 * @symbol ?LogMessage\@Scripting\@\@YAXW4LogLevel\@1\@PEBDI1ZZ
 */
MCAPI void LogMessage(enum class Scripting::LogLevel, char const*, unsigned int, char const*, ...); // NOLINT
/**
 * @symbol
 * ?_versionSplit\@Scripting\@\@YA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@D\@Z
 */
MCAPI std::vector<std::string> _versionSplit(std::string const&, char); // NOLINT
/**
 * @symbol ?defaultLogFunction\@Scripting\@\@YAXPEAXW4LogLevel\@1\@PEBDI2\@Z
 */
MCAPI void defaultLogFunction(void*, enum class Scripting::LogLevel, char const*, unsigned int, char const*); // NOLINT
/**
 * @symbol ?logUserData\@Scripting\@\@3PEAXEA
 */
MCAPI extern void* logUserData; // NOLINT

}; // namespace Scripting
