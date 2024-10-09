#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"

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
    MCAPI void closeLog();

    MCAPI void createLog(
        class Core::Path const&   _logFilePath,
        std::string const&        _logFileName,
        std::string const&        _debugLogTimestamp,
        bool                      createLogFile,
        class LogSettingsUpdater* _settings,
        double                    _logCycleInS
    );

    MCAPI void updateLogFilter(
        std::unique_ptr<class LogSettingsUpdater> options,
        std::string const&                        filterType,
        std::vector<std::string> const&           filters,
        std::string&                              result,
        bool                                      toggle
    );

    MCAPI void updateLogSetting(std::string const& setting, bool newValue);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _appendLogEntryMetadata(
        std::string& logEntry,
        std::string  timestamp,
        ::LogAreaID  area,
        uint         priority,
        std::string  functionName,
        int          lineNumber,
        int          _messageId
    );

    MCAPI std::string _getCurrentTimestamp();

    MCAPI void _logToFile(std::string const& debugEvent);

    MCAPI void _log_va(
        ::LogAreaID _area,
        uint        _priority,
        char const* _function,
        int         line,
        int         _messageId,
        char const* pszFormat,
        char*       argptr
    );

    MCAPI std::string _makeLogString(
        std::string        timestamp,
        ::LogAreaID        area,
        uint               priority,
        std::string        functionName,
        int                lineNumber,
        int                messageId,
        std::string const& logMessage
    );

    MCAPI void _openLogFile();

    MCAPI void _updateAllSettings(class LogSettingsUpdater& _settings);

    // NOLINTEND
};

}; // namespace BedrockLog
