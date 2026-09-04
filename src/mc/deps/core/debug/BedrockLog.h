#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/diagnostics/bedrock_log/LogCategory.h"
#include "mc/platform/diagnostics/bedrock_log/LogRule.h"

// auto generated forward declare list
// clang-format off
namespace BedrockLog { class LogAreaFilter; }
namespace BedrockLog { struct CategoryLogs; }
namespace Core { class Path; }
class LogSettingsUpdater;
// clang-format on

namespace BedrockLog {
// functions
// NOLINTBEGIN
MCAPI bool
_constructAreaFilterFromString(::std::string const& filterString, ::BedrockLog::LogAreaFilter& logAreaFilter);

#ifdef LL_PLAT_S
MCAPI ::std::string _constructAreaFilterStringFromFilter(::BedrockLog::LogAreaFilter const& filter);
#endif

MCAPI bool _constructPriorityFilterFromString(::std::string const& filterString, uint& logPriority);

#ifdef LL_PLAT_S
MCAPI ::std::string _constructPriorityFilterStringFromFilter(uint filter);
#endif

MCAPI void _initAreaFilterMap();

MCAPI void _initPriorityFilterMap();

MCAPI void closeAndResetAllLogs();

MCAPI void closeAndResetLog(::BedrockLog::LogCategory category);

MCAPI void createLog(
    ::Core::Path const&       _path,
    ::std::string const&      _labelDescription,
    ::std::string const&      _debugLogTimestamp,
    ::BedrockLog::LogCategory _category,
    ::std::bitset<3>          _channels,
    bool                      _createLogFile,
    ::LogSettingsUpdater*     _settings,
    double                    _logCycleInS
);

MCAPI void log_va(
    ::BedrockLog::LogCategory _category,
    ::std::bitset<3>          channelMask,
    ::BedrockLog::LogRule     rule,
    ::LogAreaID               _area,
    uint                      _priority,
    char const*               _function,
    int                       _line,
    char const*               _pszFormat,
    char*                     argptr
);

MCFOLD int rakDebugLog(char const* fstr, ...);

MCAPI void update();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::BedrockLog::CategoryLogs& sCategory();
// NOLINTEND

} // namespace BedrockLog
