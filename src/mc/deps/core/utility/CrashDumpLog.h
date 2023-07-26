#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpLog {

public:
    // prevent constructor by default
    CrashDumpLog& operator=(CrashDumpLog const&) = delete;
    CrashDumpLog(CrashDumpLog const&)            = delete;
    CrashDumpLog()                               = delete;

public:
    /**
     * @symbol ?logEvent\@CrashDumpLog\@\@SAXAEBUCrashDumpEventData\@\@\@Z
     */
    MCAPI static void logEvent(struct CrashDumpEventData const&); // NOLINT
    /**
     * @symbol ?logFrame\@CrashDumpLog\@\@SAXAEBUCrashDumpFrameData\@\@\@Z
     */
    MCAPI static void logFrame(struct CrashDumpFrameData const&); // NOLINT
    /**
     * @symbol ?logKeyValue\@CrashDumpLog\@\@SAXAEBUCrashDumpKeyValueData\@\@\@Z
     */
    MCAPI static void logKeyValue(struct CrashDumpKeyValueData const&); // NOLINT
    /**
     * @symbol ?setAssertMessage\@CrashDumpLog\@\@SAXPEBDH00\@Z
     */
    MCAPI static void setAssertMessage(char const*, int, char const*, char const*); // NOLINT
    /**
     * @symbol
     * ?setDeviceSessionID\@CrashDumpLog\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool setDeviceSessionID(std::string const&); // NOLINT
    /**
     * @symbol ?setGameVersion\@CrashDumpLog\@\@SAXPEBD\@Z
     */
    MCAPI static void setGameVersion(char const*); // NOLINT
    /**
     * @symbol ?setPlatform\@CrashDumpLog\@\@SAXPEBD\@Z
     */
    MCAPI static void setPlatform(char const*); // NOLINT
    /**
     * @symbol ?setTotalMemory\@CrashDumpLog\@\@SAX_K\@Z
     */
    MCAPI static void setTotalMemory(unsigned __int64); // NOLINT
    /**
     * @symbol ?startCrashDumpLogThread\@CrashDumpLog\@\@SA_NXZ
     */
    MCAPI static bool startCrashDumpLogThread(); // NOLINT
    /**
     * @symbol ?stopCrashDumpLogThread\@CrashDumpLog\@\@SAXXZ
     */
    MCAPI static void stopCrashDumpLogThread(); // NOLINT

    // protected:

    // private:
    /**
     * @symbol ?crashDumpLogThreadRoutine\@CrashDumpLog\@\@CAXXZ
     */
    MCAPI static void crashDumpLogThreadRoutine(); // NOLINT

protected:
    /**
     * @symbol ?mAllData\@CrashDumpLog\@\@1PEAUCrashDump_AllData\@\@EA
     */
    MCAPI static struct CrashDump_AllData* mAllData; // NOLINT

private:
    /**
     * @symbol ?mAssertDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mAssertDataMutex; // NOLINT
    /**
     * @symbol
     * ?mCrashDumpLog_logThread\@CrashDumpLog\@\@0V?$unique_ptr\@Vthread\@std\@\@U?$default_delete\@Vthread\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class std::thread> mCrashDumpLog_logThread; // NOLINT
    /**
     * @symbol ?mCrashDumpThreadMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mCrashDumpThreadMutex; // NOLINT
    /**
     * @symbol ?mCrashDumpThreadMutexCV\@CrashDumpLog\@\@0Vcondition_variable\@std\@\@A
     */
    MCAPI static class std::condition_variable mCrashDumpThreadMutexCV; // NOLINT
    /**
     * @symbol ?mEventDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mEventDataMutex; // NOLINT
    /**
     * @symbol ?mFrameDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mFrameDataMutex; // NOLINT
    /**
     * @symbol ?mGameplayDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mGameplayDataMutex; // NOLINT
    /**
     * @symbol ?mGlobalDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mGlobalDataMutex; // NOLINT
    /**
     * @symbol ?mIsThreadRunning\@CrashDumpLog\@\@0_NA
     */
    MCAPI static bool mIsThreadRunning; // NOLINT
    /**
     * @symbol ?mKeyValueDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mKeyValueDataMutex; // NOLINT
    /**
     * @symbol ?mPlayerDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mPlayerDataMutex; // NOLINT
    /**
     * @symbol ?mRenderDataMutex\@CrashDumpLog\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mRenderDataMutex; // NOLINT
};
