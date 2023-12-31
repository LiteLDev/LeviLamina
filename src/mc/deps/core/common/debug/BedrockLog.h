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
// symbol: ?_areaFilterString@BedrockLog@@YAPEBDW4LogAreaID@@@Z
MCAPI char const* _areaFilterString(::LogAreaID _area);

// symbol:
// ?_constructAreaFilterFromString@BedrockLog@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLogAreaFilter@1@@Z
MCAPI bool
_constructAreaFilterFromString(std::string const& filterString, class BedrockLog::LogAreaFilter& logAreaFilter);

// symbol:
// ?_constructAreaFilterStringFromFilter@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLogAreaFilter@1@@Z
MCAPI std::string _constructAreaFilterStringFromFilter(class BedrockLog::LogAreaFilter const&);

// symbol: ?_getLog@BedrockLog@@YAAEAULogDetails@1@W4LogCategory@1@W4LogChannel@1@@Z
MCAPI struct BedrockLog::LogDetails& _getLog(::BedrockLog::LogCategory _category, ::BedrockLog::LogChannel _channel);

// symbol: ?_initAreaFilterMap@BedrockLog@@YAXXZ
MCAPI void _initAreaFilterMap();

// symbol: ?_initPriorityFilterMap@BedrockLog@@YAXXZ
MCAPI void _initPriorityFilterMap();

// symbol: ?_messageIdString@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
MCAPI std::string _messageIdString(int);

// symbol:
// ?_openChannel@BedrockLog@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4LogCategory@1@W4LogChannel@1@_NPEAVLogSettingsUpdater@@N@Z
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

// symbol: ?_priorityFilterString@BedrockLog@@YAPEBDI@Z
MCAPI char const* _priorityFilterString(uint _priority);

// symbol: ?_processIdString@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
MCAPI std::string _processIdString();

// symbol: ?closeAndResetAllLogs@BedrockLog@@YAXXZ
MCAPI void closeAndResetAllLogs();

// symbol:
// ?createLog@BedrockLog@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4LogCategory@1@V?$bitset@$02@5@_NPEAVLogSettingsUpdater@@N@Z
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

// symbol: ?initialize@BedrockLog@@YA?AVScopeExit@Bedrock@@XZ
MCAPI class Bedrock::ScopeExit initialize();

// symbol: ?initializeLogExtensions@BedrockLog@@YAXXZ
MCAPI void initializeLogExtensions();

// symbol: ?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z
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

// symbol: ?rakDebugLog@BedrockLog@@YAHPEBDZZ
MCAPI int rakDebugLog(char const*, ...);

// symbol: ?update@BedrockLog@@YAXXZ
MCAPI void update();

// symbol:
// ?updateLogFilter@BedrockLog@@YAXV?$unique_ptr@VLogSettingsUpdater@@U?$default_delete@VLogSettingsUpdater@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEAV43@_N@Z
MCAPI void updateLogFilter(
    std::unique_ptr<class LogSettingsUpdater> options,
    std::string const&                        filterType,
    std::vector<std::string> const&           filters,
    std::string&                              result,
    bool                                      toggle
);

// symbol: ?updateLogSetting@BedrockLog@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
MCAPI void updateLogSetting(std::string const& setting, bool newValue);
// NOLINTEND

}; // namespace BedrockLog
