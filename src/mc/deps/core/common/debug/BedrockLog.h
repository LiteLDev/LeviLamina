#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ScopeExit; }
namespace BedrockLog { class LogAreaFilter; }
namespace BedrockLog { enum class LogCategory; }
namespace BedrockLog { enum class LogChannel; }
namespace BedrockLog { enum class LogRule; }
namespace BedrockLog { struct LogDetails; }
namespace Core { class Path; }
// clang-format on

namespace BedrockLog {
/**
 * @symbol ?_areaFilterString\@BedrockLog\@\@YAPEBDW4LogAreaID\@\@\@Z
 */
MCAPI char const* _areaFilterString(enum class LogAreaID); // NOLINT
/**
 * @symbol
 * ?_constructAreaFilterFromString\@BedrockLog\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLogAreaFilter\@1\@\@Z
 */
MCAPI bool _constructAreaFilterFromString(std::string const&, class BedrockLog::LogAreaFilter&); // NOLINT
/**
 * @symbol
 * ?_constructAreaFilterStringFromFilter\@BedrockLog\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLogAreaFilter\@1\@\@Z
 */
MCAPI std::string _constructAreaFilterStringFromFilter(class BedrockLog::LogAreaFilter const&); // NOLINT
/**
 * @symbol ?_getLog\@BedrockLog\@\@YAAEAULogDetails\@1\@W4LogCategory\@1\@W4LogChannel\@1\@\@Z
 */
MCAPI struct BedrockLog::LogDetails&
    _getLog(enum class BedrockLog::LogCategory, enum class BedrockLog::LogChannel); // NOLINT
/**
 * @symbol ?_initAreaFilterMap\@BedrockLog\@\@YAXXZ
 */
MCAPI void _initAreaFilterMap(); // NOLINT
/**
 * @symbol ?_initPriorityFilterMap\@BedrockLog\@\@YAXXZ
 */
MCAPI void _initPriorityFilterMap(); // NOLINT
/**
 * @symbol
 * ?_messageIdString\@BedrockLog\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
 */
MCAPI std::string _messageIdString(int); // NOLINT
/**
 * @symbol
 * ?_openChannel\@BedrockLog\@\@YAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1W4LogCategory\@1\@W4LogChannel\@1\@_NPEAVLogSettingsUpdater\@\@N\@Z
 */
MCAPI void _openChannel(
    class Core::Path const&,
    std::string const&,
    std::string const&,
    enum class BedrockLog::LogCategory,
    enum class BedrockLog::LogChannel,
    bool,
    class LogSettingsUpdater*,
    double
); // NOLINT
/**
 * @symbol ?_priorityFilterString\@BedrockLog\@\@YAPEBDI\@Z
 */
MCAPI char const* _priorityFilterString(unsigned int); // NOLINT
/**
 * @symbol
 * ?_processIdString\@BedrockLog\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
 */
MCAPI std::string _processIdString(); // NOLINT
/**
 * @symbol ?closeAndResetAllLogs\@BedrockLog\@\@YAXXZ
 */
MCAPI void closeAndResetAllLogs(); // NOLINT
/**
 * @symbol
 * ?createLog\@BedrockLog\@\@YAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1W4LogCategory\@1\@V?$bitset\@$02\@5\@_NPEAVLogSettingsUpdater\@\@N\@Z
 */
MCAPI void createLog(
    class Core::Path const&,
    std::string const&,
    std::string const&,
    enum class BedrockLog::LogCategory,
    class std::bitset<3>,
    bool,
    class LogSettingsUpdater*,
    double
); // NOLINT
/**
 * @symbol ?initialize\@BedrockLog\@\@YA?AVScopeExit\@Bedrock\@\@XZ
 */
MCAPI class Bedrock::ScopeExit initialize(); // NOLINT
/**
 * @symbol ?initializeLogExtensions\@BedrockLog\@\@YAXXZ
 */
MCAPI void initializeLogExtensions(); // NOLINT
/**
 * @symbol ?log\@BedrockLog\@\@YAXW4LogCategory\@1\@V?$bitset\@$02\@std\@\@W4LogRule\@1\@W4LogAreaID\@\@IPEBDH4ZZ
 */
MCAPI void
log(enum class BedrockLog::LogCategory,
    class std::bitset<3>,
    enum class BedrockLog::LogRule,
    enum class LogAreaID,
    unsigned int,
    char const*,
    int,
    char const*,
    ...); // NOLINT
/**
 * @symbol
 * ?log_va\@BedrockLog\@\@YAXW4LogCategory\@1\@V?$bitset\@$02\@std\@\@W4LogRule\@1\@W4LogAreaID\@\@IPEBDH4PEAD\@Z
 */
MCAPI void
log_va(enum class BedrockLog::LogCategory, class std::bitset<3>, enum class BedrockLog::LogRule, enum class LogAreaID, unsigned int, char const*, int, char const*, char*); // NOLINT
/**
 * @symbol ?rakDebugLog\@BedrockLog\@\@YAHPEBDZZ
 */
MCAPI int rakDebugLog(char const*, ...); // NOLINT
/**
 * @symbol ?update\@BedrockLog\@\@YAXXZ
 */
MCAPI void update(); // NOLINT
/**
 * @symbol
 * ?updateLogFilter\@BedrockLog\@\@YAXV?$unique_ptr\@VLogSettingsUpdater\@\@U?$default_delete\@VLogSettingsUpdater\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEAV43\@_N\@Z
 */
MCAPI void updateLogFilter(
    std::unique_ptr<class LogSettingsUpdater>,
    std::string const&,
    std::vector<std::string> const&,
    std::string&,
    bool
); // NOLINT
/**
 * @symbol
 * ?updateLogSetting\@BedrockLog\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
 */
MCAPI void updateLogSetting(std::string const&, bool); // NOLINT

}; // namespace BedrockLog
