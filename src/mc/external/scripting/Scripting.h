#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/LogLevel.h"

namespace Scripting {
// NOLINTBEGIN
// symbol: ?LogMessage@Scripting@@YAXW4LogLevel@1@PEBDI1ZZ
MCAPI void LogMessage(::Scripting::LogLevel, char const*, uint, char const*, ...);

// symbol: ?RED_COLOR_FORMAT@Scripting@@3PEBDEB
MCAPI extern char const* RED_COLOR_FORMAT;

// symbol:
// ?_versionSplit@Scripting@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@D@Z
MCAPI std::vector<std::string> _versionSplit(std::string const&, char);

// symbol: ?defaultLogFunction@Scripting@@YAXPEAXW4LogLevel@1@PEBDI2@Z
MCAPI void defaultLogFunction(void*, ::Scripting::LogLevel, char const*, uint, char const*);

// symbol: ?logUserData@Scripting@@3PEAXEA
MCAPI extern void* logUserData;
// NOLINTEND

}; // namespace Scripting
