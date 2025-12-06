#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/bedrock_log/LogCategory.h"
#include "mc/diagnostics/bedrock_log/LogChannel.h"
#include "mc/diagnostics/bedrock_log/LogRule.h"

// auto generated forward declare list
// clang-format off
struct LogSettingsUpdater;
namespace Bedrock { struct ScopeExit; }
namespace BedrockLog { struct LogAreaFilter; }
namespace Core { class Path; }
// clang-format on

namespace BedrockLog {
// functions
// NOLINTBEGIN
MCAPI char const* _areaFilterString(::LogAreaID _area);

MCAPI bool
_constructAreaFilterFromString(::std::string const& filterString, ::BedrockLog::LogAreaFilter& logAreaFilter);

MCAPI ::std::string _constructAreaFilterStringFromFilter(::BedrockLog::LogAreaFilter const& filter);

MCAPI bool _constructPriorityFilterFromString(::std::string const& filterString, uint& logPriority);

MCAPI ::std::string _constructPriorityFilterStringFromFilter(uint filter);

MCAPI void _initAreaFilterMap();

MCAPI void _initPriorityFilterMap();

MCAPI ::std::string _messageIdString(int _messageId);

MCAPI void _openChannel(
    ::Core::Path const&       path,
    ::std::string const&      filename,
    ::std::string const&      _debugLogTimestamp,
    ::BedrockLog::LogCategory category,
    ::BedrockLog::LogChannel  channel,
    bool                      _createLogFile,
    ::LogSettingsUpdater*     _settings,
    double                    _logCycleInS
);

MCAPI ::std::string _processIdString();

MCAPI ::std::string _threadIdString();

MCAPI void closeAndResetAllLogs();

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

MCAPI ::Bedrock::ScopeExit initialize();

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

MCAPI int rakDebugLog(char const*, ...);

MCAPI void updateLogSetting(
    ::BedrockLog::LogCategory _category,
    ::BedrockLog::LogChannel  _channel,
    ::std::string const&      setting,
    bool                      newValue
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::bitset<3> const& sGlobalChannel();
// NOLINTEND

} // namespace BedrockLog
