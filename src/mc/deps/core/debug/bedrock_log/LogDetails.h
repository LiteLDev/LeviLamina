#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/LogAreaID.h"

// auto generated forward declare list
// clang-format off
class LogSettingsUpdater;
namespace Core { class Path; }
// clang-format on

namespace BedrockLog {

struct LogDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnkd6e125;
    ::ll::UntypedStorage<1, 1>   mUnk3fa36f;
    ::ll::UntypedStorage<1, 1>   mUnk9c26d4;
    ::ll::UntypedStorage<1, 1>   mUnk9ff44e;
    ::ll::UntypedStorage<8, 32>  mUnk1c80b4;
    ::ll::UntypedStorage<8, 32>  mUnk377c22;
    ::ll::UntypedStorage<8, 296> mUnk52b3f7;
    ::ll::UntypedStorage<1, 1>   mUnk98388d;
    ::ll::UntypedStorage<1, 1>   mUnkbd562e;
    ::ll::UntypedStorage<1, 1>   mUnk8dc1a4;
    ::ll::UntypedStorage<1, 1>   mUnkef8f13;
    ::ll::UntypedStorage<1, 1>   mUnk94b151;
    ::ll::UntypedStorage<1, 1>   mUnk39777d;
    ::ll::UntypedStorage<1, 1>   mUnk2f550b;
    ::ll::UntypedStorage<1, 1>   mUnke5f581;
    ::ll::UntypedStorage<1, 1>   mUnkf140b5;
    ::ll::UntypedStorage<1, 1>   mUnkd577e9;
    ::ll::UntypedStorage<4, 4>   mUnk2ef1c2;
    ::ll::UntypedStorage<8, 8>   mUnkbdf6bc;
    ::ll::UntypedStorage<8, 8>   mUnk3dc6d5;
    ::ll::UntypedStorage<1, 1>   mUnk381674;
    ::ll::UntypedStorage<8, 8>   mUnk4c7730;
    ::ll::UntypedStorage<8, 8>   mUnk9d155d;
    ::ll::UntypedStorage<4, 4>   mUnke1734c;
    ::ll::UntypedStorage<8, 16>  mUnka42560;
    ::ll::UntypedStorage<8, 16>  mUnkba0ae8;
    // NOLINTEND

public:
    // prevent constructor by default
    LogDetails& operator=(LogDetails const&);
    LogDetails(LogDetails const&);
    LogDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _appendLogEntryMetadata(
        ::std::string& logEntry,
        ::std::string  timestamp,
        ::LogAreaID    area,
        uint           priority,
        ::std::string  functionName,
        int            lineNumber,
        int            _messageId
    );

    MCAPI ::std::string _getCurrentTimestamp();

    MCAPI void _logToFile(::std::string const& debugEvent);

    MCAPI void _log_va(
        ::LogAreaID _area,
        uint        _priority,
        char const* _function,
        int         line,
        int         _messageId,
        char const* pszFormat,
        char*       argptr
    );

    MCAPI ::std::string _makeLogString(
        ::std::string        timestamp,
        ::LogAreaID          area,
        uint                 priority,
        ::std::string        functionName,
        int                  lineNumber,
        int                  messageId,
        ::std::string const& logMessage
    );

    MCAPI void _openLogFile();

    MCAPI_C void _updateAllSettings(::LogSettingsUpdater& _settings);

    MCAPI void closeLog();

    MCAPI void createLog(
        ::Core::Path const&   _logFilePath,
        ::std::string const&  _logFileName,
        ::std::string const&  _debugLogTimestamp,
        bool                  createLogFile,
        ::LogSettingsUpdater* _settings,
        double                _logCycleInS
    );

    MCAPI_S void updateLogFilter(
        ::std::unique_ptr<::LogSettingsUpdater> options,
        ::std::string const&                    filterType,
        ::std::vector<::std::string> const&     filters,
        ::std::string&                          result,
        bool                                    toggle
    );

    MCAPI void updateLogSetting(::std::string const& setting, bool newValue);
    // NOLINTEND
};

} // namespace BedrockLog
