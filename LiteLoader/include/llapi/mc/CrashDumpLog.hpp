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
     * @symbol  ?logEvent\@CrashDumpLog\@\@SAXAEBUCrashDumpEventData\@\@\@Z
     */
    MCAPI static void logEvent(struct CrashDumpEventData const &);
    /**
     * @symbol  ?logFrame\@CrashDumpLog\@\@SAXAEBUCrashDumpFrameData\@\@\@Z
     */
    MCAPI static void logFrame(struct CrashDumpFrameData const &);
    /**
     * @symbol  ?logKeyValue\@CrashDumpLog\@\@SAXAEBUCrashDumpKeyValueData\@\@\@Z
     */
    MCAPI static void logKeyValue(struct CrashDumpKeyValueData const &);
    /**
     * @symbol  ?setAssertMessage\@CrashDumpLog\@\@SAXPEBDH00\@Z
     */
    MCAPI static void setAssertMessage(char const *, int, char const *, char const *);
    /**
     * @symbol  ?setDeviceSessionID\@CrashDumpLog\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool setDeviceSessionID(std::string const &);
    /**
     * @symbol  ?setGameVersion\@CrashDumpLog\@\@SAXPEBD\@Z
     */
    MCAPI static void setGameVersion(char const *);
    /**
     * @symbol  ?setPlatform\@CrashDumpLog\@\@SAXPEBD\@Z
     */
    MCAPI static void setPlatform(char const *);
    /**
     * @symbol  ?setTotalMemory\@CrashDumpLog\@\@SAX_K\@Z
     */
    MCAPI static void setTotalMemory(unsigned __int64);
    /**
     * @symbol  ?startCrashDumpLogThread\@CrashDumpLog\@\@SA_NXZ
     */
    MCAPI static bool startCrashDumpLogThread();
    /**
     * @symbol  ?stopCrashDumpLogThread\@CrashDumpLog\@\@SAXXZ
     */
    MCAPI static void stopCrashDumpLogThread();

//protected:

//private:
    /**
     * @symbol  ?crashDumpLogThreadRoutine\@CrashDumpLog\@\@CAXXZ
     */
    MCAPI static void crashDumpLogThreadRoutine();

protected:
    /**
     * @symbol  ?mAllData\@CrashDumpLog\@\@1PEAUCrashDump_AllData\@\@EA
     */
    MCAPI static struct CrashDump_AllData * mAllData;

private:
    /**
     * @symbol  ?mAssertDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mAssertDataMutex;
    /**
     * @symbol  ?mCrashDumpLog_logThread\@CrashDumpLog\@\@0V?$unique_ptr\@Vthread\@std\@\@U?$default_delete\@Vthread\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class std::thread> mCrashDumpLog_logThread;
    /**
     * @symbol  ?mCrashDumpThreadMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mCrashDumpThreadMutex;
    /**
     * @symbol  ?mCrashDumpThreadMutexCV\@CrashDumpLog\@\@0Vcondition_variable\@std\@\@A
     */
    MCAPI static class std::condition_variable mCrashDumpThreadMutexCV;
    /**
     * @symbol  ?mEventDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mEventDataMutex;
    /**
     * @symbol  ?mFrameDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mFrameDataMutex;
    /**
     * @symbol  ?mGameplayDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mGameplayDataMutex;
    /**
     * @symbol  ?mGlobalDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mGlobalDataMutex;
    /**
     * @symbol  ?mIsThreadRunning\@CrashDumpLog\@\@0_NA
     */
    MCAPI static bool mIsThreadRunning;
    /**
     * @symbol  ?mKeyValueDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mKeyValueDataMutex;
    /**
     * @symbol  ?mPlayerDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mPlayerDataMutex;
    /**
     * @symbol  ?mRenderDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mRenderDataMutex;

};