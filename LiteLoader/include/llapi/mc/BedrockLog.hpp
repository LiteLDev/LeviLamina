/**
 * @file  BedrockLog.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   35112846
     * @symbol ?_constructAreaFilterFromString@BedrockLog@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLogAreaFilter@1@@Z
     */
    MCAPI bool _constructAreaFilterFromString(std::string const &, class BedrockLog::LogAreaFilter &);
    /**
     * @hash   -404745709
     * @symbol ?_constructAreaFilterStringFromFilter@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLogAreaFilter@1@@Z
     */
    MCAPI std::string _constructAreaFilterStringFromFilter(class BedrockLog::LogAreaFilter const &);
    /**
     * @hash   -695346904
     * @symbol ?_getLog@BedrockLog@@YAAEAULogDetails@1@W4LogCategory@1@W4LogChannel@1@@Z
     */
    MCAPI struct BedrockLog::LogDetails & _getLog(enum BedrockLog::LogCategory, enum BedrockLog::LogChannel);
    /**
     * @hash   -979368498
     * @symbol ?_initAreaFilterMap@BedrockLog@@YAXXZ
     */
    MCAPI void _initAreaFilterMap();
    /**
     * @hash   -1491001218
     * @symbol ?_initPriorityFilterMap@BedrockLog@@YAXXZ
     */
    MCAPI void _initPriorityFilterMap();
    /**
     * @hash   1564801910
     * @symbol ?_messageIdString@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI std::string _messageIdString(int);
    /**
     * @hash   -1363969253
     * @symbol ?_openChannel@BedrockLog@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4LogCategory@1@W4LogChannel@1@_NPEAVLogSettingsUpdater@@N@Z
     */
    MCAPI void _openChannel(class Core::Path const &, std::string const &, std::string const &, enum BedrockLog::LogCategory, enum BedrockLog::LogChannel, bool, class LogSettingsUpdater *, double);
    /**
     * @hash   241321569
     * @symbol ?_priorityFilterString@BedrockLog@@YAPEBDI@Z
     */
    MCAPI char const * _priorityFilterString(unsigned int);
    /**
     * @hash   -2036191879
     * @symbol ?_processIdString@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string _processIdString();
    /**
     * @hash   1320150030
     * @symbol ?closeAndResetAllLogs@BedrockLog@@YAXXZ
     */
    MCAPI void closeAndResetAllLogs();
    /**
     * @hash   -1868719764
     * @symbol ?createLog@BedrockLog@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4LogCategory@1@V?$bitset@$02@5@_NPEAVLogSettingsUpdater@@N@Z
     */
    MCAPI void createLog(class Core::Path const &, std::string const &, std::string const &, enum BedrockLog::LogCategory, class std::bitset<3>, bool, class LogSettingsUpdater *, double);
    /**
     * @hash   630439310
     * @symbol ?flushAllLogs@BedrockLog@@YAXXZ
     */
    MCAPI void flushAllLogs();
    /**
     * @hash   -1039806159
     * @symbol ?initialize@BedrockLog@@YA?AVScopeExit@Bedrock@@XZ
     */
    MCAPI class Bedrock::ScopeExit initialize();
    /**
     * @hash   -720852564
     * @symbol ?initializeLogExtensions@BedrockLog@@YAXXZ
     */
    MCAPI void initializeLogExtensions();
    /**
     * @hash   -876325210
     * @symbol ?log@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4ZZ
     */
    MCAPI void log(enum BedrockLog::LogCategory, class std::bitset<3>, enum BedrockLog::LogRule, enum LogAreaID, unsigned int, char const *, int, char const *, ...);
    /**
     * @hash   -1767202517
     * @symbol ?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z
     */
    MCAPI void log_va(enum BedrockLog::LogCategory, class std::bitset<3>, enum BedrockLog::LogRule, enum LogAreaID, unsigned int, char const *, int, char const *, char *);
    /**
     * @hash   136491670
     * @symbol ?rakDebugLog@BedrockLog@@YAHPEBDZZ
     */
    MCAPI int rakDebugLog(char const *, ...);
    /**
     * @hash   -1886595730
     * @symbol ?update@BedrockLog@@YAXXZ
     */
    MCAPI void update();
    /**
     * @hash   -723967672
     * @symbol ?updateLogFilter@BedrockLog@@YAXV?$unique_ptr@VLogSettingsUpdater@@U?$default_delete@VLogSettingsUpdater@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEAV43@_N@Z
     */
    MCAPI void updateLogFilter(std::unique_ptr<class LogSettingsUpdater>, std::string const &, std::vector<std::string> const &, std::string &, bool);
    /**
     * @hash   1579346140
     * @symbol ?updateLogSetting@BedrockLog@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI void updateLogSetting(std::string const &, bool);

};