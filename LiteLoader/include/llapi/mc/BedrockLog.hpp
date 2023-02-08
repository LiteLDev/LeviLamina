/**
 * @file  BedrockLog.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class LogAreaID;

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BedrockLog.
 *
 */
namespace BedrockLog {

#define AFTER_EXTRA
// Add Member There
class LogAreaFilter {
public:
    LogAreaFilter() = delete;
    LogAreaFilter(LogAreaFilter const&) = delete;
    LogAreaFilter(LogAreaFilter const&&) = delete;
};
enum class LogChannel;
enum class LogRule;
enum class LogCategory;
struct LogDetails {
    LogDetails() = delete;
    LogDetails(LogDetails const&) = delete;
    LogDetails(LogDetails const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @hash   -1812014547
     * @symbol  ?_areaFilterString\@BedrockLog\@\@YAPEBDW4LogAreaID\@\@\@Z
     */
    MCAPI char const * _areaFilterString(enum class LogAreaID);
    /**
     * @hash   784185438
     * @symbol  ?_constructAreaFilterFromString\@BedrockLog\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLogAreaFilter\@1\@\@Z
     */
    MCAPI bool _constructAreaFilterFromString(std::string const &, class BedrockLog::LogAreaFilter &);
    /**
     * @hash   344342259
     * @symbol  ?_constructAreaFilterStringFromFilter\@BedrockLog\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLogAreaFilter\@1\@\@Z
     */
    MCAPI std::string _constructAreaFilterStringFromFilter(class BedrockLog::LogAreaFilter const &);
    /**
     * @hash   53741064
     * @symbol  ?_getLog\@BedrockLog\@\@YAAEAULogDetails\@1\@W4LogCategory\@1\@W4LogChannel\@1\@\@Z
     */
    MCAPI struct BedrockLog::LogDetails & _getLog(enum class BedrockLog::LogCategory, enum class BedrockLog::LogChannel);
    /**
     * @hash   -230280530
     * @symbol  ?_initAreaFilterMap\@BedrockLog\@\@YAXXZ
     */
    MCAPI void _initAreaFilterMap();
    /**
     * @hash   -742313026
     * @symbol  ?_initPriorityFilterMap\@BedrockLog\@\@YAXXZ
     */
    MCAPI void _initPriorityFilterMap();
    /**
     * @hash   -1981800090
     * @symbol  ?_messageIdString\@BedrockLog\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI std::string _messageIdString(int);
    /**
     * @hash   -615450197
     * @symbol  ?_openChannel\@BedrockLog\@\@YAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1W4LogCategory\@1\@W4LogChannel\@1\@_NPEAVLogSettingsUpdater\@\@N\@Z
     */
    MCAPI void _openChannel(class Core::Path const &, std::string const &, std::string const &, enum class BedrockLog::LogCategory, enum class BedrockLog::LogChannel, bool, class LogSettingsUpdater *, double);
    /**
     * @hash   989809873
     * @symbol  ?_priorityFilterString\@BedrockLog\@\@YAPEBDI\@Z
     */
    MCAPI char const * _priorityFilterString(unsigned int);
    /**
     * @hash   -1287703575
     * @symbol  ?_processIdString\@BedrockLog\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _processIdString();
    /**
     * @hash   2068899726
     * @symbol  ?closeAndResetAllLogs\@BedrockLog\@\@YAXXZ
     */
    MCAPI void closeAndResetAllLogs();
    /**
     * @hash   -1119970068
     * @symbol  ?createLog\@BedrockLog\@\@YAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1W4LogCategory\@1\@V?$bitset\@$02\@5\@_NPEAVLogSettingsUpdater\@\@N\@Z
     */
    MCAPI void createLog(class Core::Path const &, std::string const &, std::string const &, enum class BedrockLog::LogCategory, class std::bitset<3>, bool, class LogSettingsUpdater *, double);
    /**
     * @hash   1379173630
     * @symbol  ?flushAllLogs\@BedrockLog\@\@YAXXZ
     */
    MCAPI void flushAllLogs();
    /**
     * @hash   -291071839
     * @symbol  ?initialize\@BedrockLog\@\@YA?AVScopeExit\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::ScopeExit initialize();
    /**
     * @hash   -462843284
     * @symbol  ?initializeLogExtensions\@BedrockLog\@\@YAXXZ
     */
    MCAPI void initializeLogExtensions();
    /**
     * @hash   -127590890
     * @symbol  ?log\@BedrockLog\@\@YAXW4LogCategory\@1\@V?$bitset\@$02\@std\@\@W4LogRule\@1\@W4LogAreaID\@\@IPEBDH4ZZ
     */
    MCAPI void log(enum class BedrockLog::LogCategory, class std::bitset<3>, enum class BedrockLog::LogRule, enum class LogAreaID, unsigned int, char const *, int, char const *, ...);
    /**
     * @hash   -1018468197
     * @symbol  ?log_va\@BedrockLog\@\@YAXW4LogCategory\@1\@V?$bitset\@$02\@std\@\@W4LogRule\@1\@W4LogAreaID\@\@IPEBDH4PEAD\@Z
     */
    MCAPI void log_va(enum class BedrockLog::LogCategory, class std::bitset<3>, enum class BedrockLog::LogRule, enum class LogAreaID, unsigned int, char const *, int, char const *, char *);
    /**
     * @hash   394500950
     * @symbol  ?rakDebugLog\@BedrockLog\@\@YAHPEBDZZ
     */
    MCAPI int rakDebugLog(char const *, ...);
    /**
     * @hash   -1137738402
     * @symbol  ?update\@BedrockLog\@\@YAXXZ
     */
    MCAPI void update();
    /**
     * @hash   24889656
     * @symbol  ?updateLogFilter\@BedrockLog\@\@YAXV?$unique_ptr\@VLogSettingsUpdater\@\@U?$default_delete\@VLogSettingsUpdater\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@AEAV43\@_N\@Z
     */
    MCAPI void updateLogFilter(std::unique_ptr<class LogSettingsUpdater>, std::string const &, std::vector<std::string> const &, std::string &, bool);
    /**
     * @hash   -1966471684
     * @symbol  ?updateLogSetting\@BedrockLog\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void updateLogSetting(std::string const &, bool);

};