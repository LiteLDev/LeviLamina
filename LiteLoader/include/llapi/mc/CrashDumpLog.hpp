/**
 * @file  CrashDumpLog.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CrashDumpLog.
 *
 */
class CrashDumpLog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPLOG
public:
    class CrashDumpLog& operator=(class CrashDumpLog const &) = delete;
    CrashDumpLog(class CrashDumpLog const &) = delete;
    CrashDumpLog() = delete;
#endif

public:
    /**
     * @hash   -1304434794
     * @symbol  ?logEvent\@CrashDumpLog\@\@SAXAEBUCrashDumpEventData\@\@\@Z
     */
    MCAPI static void logEvent(struct CrashDumpEventData const &);
    /**
     * @hash   -1483777750
     * @symbol  ?logFrame\@CrashDumpLog\@\@SAXAEBUCrashDumpFrameData\@\@\@Z
     */
    MCAPI static void logFrame(struct CrashDumpFrameData const &);
    /**
     * @hash   -1546973284
     * @symbol  ?logKeyValue\@CrashDumpLog\@\@SAXAEBUCrashDumpKeyValueData\@\@\@Z
     */
    MCAPI static void logKeyValue(struct CrashDumpKeyValueData const &);
    /**
     * @hash   -1913475072
     * @symbol  ?setAssertMessage\@CrashDumpLog\@\@SAXPEBDH00\@Z
     */
    MCAPI static void setAssertMessage(char const *, int, char const *, char const *);
    /**
     * @hash   -1088631555
     * @symbol  ?setDeviceSessionID\@CrashDumpLog\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool setDeviceSessionID(std::string const &);
    /**
     * @hash   1052328045
     * @symbol  ?setGameVersion\@CrashDumpLog\@\@SAXPEBD\@Z
     */
    MCAPI static void setGameVersion(char const *);
    /**
     * @hash   -1600119287
     * @symbol  ?setPlatform\@CrashDumpLog\@\@SAXPEBD\@Z
     */
    MCAPI static void setPlatform(char const *);
    /**
     * @hash   -181053361
     * @symbol  ?setTotalMemory\@CrashDumpLog\@\@SAX_K\@Z
     */
    MCAPI static void setTotalMemory(unsigned __int64);
    /**
     * @hash   -2075462014
     * @symbol  ?startCrashDumpLogThread\@CrashDumpLog\@\@SA_NXZ
     */
    MCAPI static bool startCrashDumpLogThread();
    /**
     * @hash   -1559634205
     * @symbol  ?stopCrashDumpLogThread\@CrashDumpLog\@\@SAXXZ
     */
    MCAPI static void stopCrashDumpLogThread();

//protected:

//private:
    /**
     * @hash   1633839448
     * @symbol  ?crashDumpLogThreadRoutine\@CrashDumpLog\@\@CAXXZ
     */
    MCAPI static void crashDumpLogThreadRoutine();

protected:
    /**
     * @hash   777228689
     * @symbol  ?mAllData\@CrashDumpLog\@\@1PEAUCrashDump_AllData\@\@EA
     */
    MCAPI static struct CrashDump_AllData * mAllData;

private:
    /**
     * @hash   446111888
     * @symbol  ?mAssertDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mAssertDataMutex;
    /**
     * @hash   1417121089
     * @symbol  ?mCrashDumpLog_logThread\@CrashDumpLog\@\@0V?$unique_ptr\@Vthread\@std\@\@U?$default_delete\@Vthread\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class std::thread> mCrashDumpLog_logThread;
    /**
     * @hash   1588549317
     * @symbol  ?mCrashDumpThreadMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mCrashDumpThreadMutex;
    /**
     * @hash   -824835787
     * @symbol  ?mCrashDumpThreadMutexCV\@CrashDumpLog\@\@0Vcondition_variable\@std\@\@A
     */
    MCAPI static class std::condition_variable mCrashDumpThreadMutexCV;
    /**
     * @hash   1970435030
     * @symbol  ?mEventDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mEventDataMutex;
    /**
     * @hash   -1154640157
     * @symbol  ?mFrameDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mFrameDataMutex;
    /**
     * @hash   868667392
     * @symbol  ?mGameplayDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mGameplayDataMutex;
    /**
     * @hash   -1484854077
     * @symbol  ?mGlobalDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mGlobalDataMutex;
    /**
     * @hash   223218777
     * @symbol  ?mIsThreadRunning\@CrashDumpLog\@\@0_NA
     */
    MCAPI static bool mIsThreadRunning;
    /**
     * @hash   -926979020
     * @symbol  ?mKeyValueDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mKeyValueDataMutex;
    /**
     * @hash   1694215141
     * @symbol  ?mPlayerDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mPlayerDataMutex;
    /**
     * @hash   970589600
     * @symbol  ?mRenderDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mRenderDataMutex;

};