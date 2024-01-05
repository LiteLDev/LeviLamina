#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LogAreaID.h"

// auto generated forward declare list
// clang-format off
class LogSettingsUpdater;
namespace Core { class Path; }
// clang-format on

namespace BedrockLog {

struct LogDetails {
public:
    // prevent constructor by default
    LogDetails& operator=(LogDetails const&);
    LogDetails(LogDetails const&);
    LogDetails();

public:
    // NOLINTBEGIN
    // symbol: ?closeLog@LogDetails@BedrockLog@@QEAAXXZ
    MCAPI void closeLog();

    // symbol:
    // ?createLog@LogDetails@BedrockLog@@QEAAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NPEAVLogSettingsUpdater@@N@Z
    MCAPI void createLog(
        class Core::Path const&   _logFilePath,
        std::string const&        _logFileName,
        std::string const&        _debugLogTimestamp,
        bool                      createLogFile,
        class LogSettingsUpdater* _settings,
        double                    _logCycleInS
    );

    // symbol:
    // ?updateLogFilter@LogDetails@BedrockLog@@QEAAXV?$unique_ptr@VLogSettingsUpdater@@U?$default_delete@VLogSettingsUpdater@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@AEAV54@_N@Z
    MCAPI void updateLogFilter(
        std::unique_ptr<class LogSettingsUpdater> options,
        std::string const&                        filterType,
        std::vector<std::string> const&           filters,
        std::string&                              result,
        bool                                      toggle
    );

    // symbol:
    // ?updateLogSetting@LogDetails@BedrockLog@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void updateLogSetting(std::string const& setting, bool newValue);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_appendLogEntryMetadata@LogDetails@BedrockLog@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@W4LogAreaID@@I1HH@Z
    MCAPI void _appendLogEntryMetadata(
        std::string& logEntry,
        std::string  timestamp,
        ::LogAreaID  area,
        uint         priority,
        std::string  functionName,
        int          lineNumber,
        int          _messageId
    );

    // symbol:
    // ?_getCurrentTimestamp@LogDetails@BedrockLog@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string _getCurrentTimestamp();

    // symbol:
    // ?_logToFile@LogDetails@BedrockLog@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _logToFile(std::string const& debugEvent);

    // symbol: ?_log_va@LogDetails@BedrockLog@@AEAAXW4LogAreaID@@IPEBDHH1PEAD@Z
    MCAPI void _log_va(
        ::LogAreaID _area,
        uint        _priority,
        char const* _function,
        int         line,
        int         _messageId,
        char const* pszFormat,
        char*       argptr
    );

    // symbol:
    // ?_makeLogString@LogDetails@BedrockLog@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@W4LogAreaID@@I0HHAEBV34@@Z
    MCAPI std::string
    _makeLogString(std::string timestamp, ::LogAreaID area, uint priority, std::string functionName, int lineNumber, int messageId, std::string const&);

    // symbol: ?_openLogFile@LogDetails@BedrockLog@@AEAAXXZ
    MCAPI void _openLogFile();

    // symbol: ?_updateAllSettings@LogDetails@BedrockLog@@AEAAXAEAVLogSettingsUpdater@@@Z
    MCAPI void _updateAllSettings(class LogSettingsUpdater& _settings);

    // NOLINTEND
};

}; // namespace BedrockLog
