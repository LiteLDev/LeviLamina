#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/debug/LogCategory.h"
#include "mc/deps/core/common/debug/LogChannel.h"
#include "mc/deps/core/common/debug/LogRule.h"
#include "mc/enums/LogAreaID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ScopeExit; }
namespace BedrockLog { class LogAreaFilter; }
namespace BedrockLog { struct LogDetails; }
namespace Core { class Path; }
// clang-format on

namespace BedrockLog {
// NOLINTBEGIN
MCAPI char const* _areaFilterString(::LogAreaID _area);

MCAPI bool
_constructAreaFilterFromString(std::string const& filterString, class BedrockLog::LogAreaFilter& logAreaFilter);

MCAPI std::string _constructAreaFilterStringFromFilter(class BedrockLog::LogAreaFilter const&);

MCAPI struct BedrockLog::LogDetails& _getLog(::BedrockLog::LogCategory _category, ::BedrockLog::LogChannel _channel);

MCAPI void _initAreaFilterMap();

MCAPI void _initPriorityFilterMap();

MCAPI std::string _messageIdString(int);

MCAPI void _openChannel(
    class Core::Path const&   path,
    std::string const&        filename,
    std::string const&        _debugLogTimestamp,
    ::BedrockLog::LogCategory category,
    ::BedrockLog::LogChannel  channel,
    bool                      _createLogFile,
    class LogSettingsUpdater* _settings,
    double                    _logCycleInS
);

MCAPI char const* _priorityFilterString(uint _priority);

MCAPI std::string _processIdString();

MCAPI void closeAndResetAllLogs();

MCAPI void createLog(
    class Core::Path const&   _path,
    std::string const&        _labelDescription,
    std::string const&        _debugLogTimestamp,
    ::BedrockLog::LogCategory _category,
    std::bitset<3>            _channels,
    bool                      _createLogFile,
    class LogSettingsUpdater* _settings,
    double                    _logCycleInS
);

MCAPI class Bedrock::ScopeExit initialize();

MCAPI void initializeLogExtensions();

MCAPI void log_va(
    ::BedrockLog::LogCategory _category,
    std::bitset<3>            channelMask,
    ::BedrockLog::LogRule     rule,
    ::LogAreaID               _area,
    uint                      _priority,
    char const*               _function,
    int                       _line,
    char const*               _pszFormat,
    char*                     argptr
);

MCAPI int rakDebugLog(char const*, ...);

MCAPI void update();

MCAPI void updateLogFilter(
    std::unique_ptr<class LogSettingsUpdater> options,
    std::string const&                        filterType,
    std::vector<std::string> const&           filters,
    std::string&                              result,
    bool                                      toggle
);

MCAPI void updateLogSetting(std::string const& setting, bool newValue);
// NOLINTEND

}; // namespace BedrockLog
