/**
 * @file  CrashDumpLog.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -2055813786
     * @symbol ?logEvent@CrashDumpLog@@SAXAEBUCrashDumpEventData@@@Z
     */
    MCAPI static void logEvent(struct CrashDumpEventData const &);
    /**
     * @hash   2059810554
     * @symbol ?logFrame@CrashDumpLog@@SAXAEBUCrashDumpFrameData@@@Z
     */
    MCAPI static void logFrame(struct CrashDumpFrameData const &);
    /**
     * @hash   1996615020
     * @symbol ?logKeyValue@CrashDumpLog@@SAXAEBUCrashDumpKeyValueData@@@Z
     */
    MCAPI static void logKeyValue(struct CrashDumpKeyValueData const &);
    /**
     * @hash   1630113232
     * @symbol ?setAssertMessage@CrashDumpLog@@SAXPEBDH00@Z
     */
    MCAPI static void setAssertMessage(char const *, int, char const *, char const *);
    /**
     * @hash   -1840010547
     * @symbol ?setDeviceSessionID@CrashDumpLog@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool setDeviceSessionID(std::string const &);
    /**
     * @hash   300949053
     * @symbol ?setGameVersion@CrashDumpLog@@SAXPEBD@Z
     */
    MCAPI static void setGameVersion(char const *);
    /**
     * @hash   1943469017
     * @symbol ?setPlatform@CrashDumpLog@@SAXPEBD@Z
     */
    MCAPI static void setPlatform(char const *);
    /**
     * @hash   -932432353
     * @symbol ?setTotalMemory@CrashDumpLog@@SAX_K@Z
     */
    MCAPI static void setTotalMemory(unsigned __int64);
    /**
     * @hash   1468126290
     * @symbol ?startCrashDumpLogThread@CrashDumpLog@@SA_NXZ
     */
    MCAPI static bool startCrashDumpLogThread();
    /**
     * @hash   1983954099
     * @symbol ?stopCrashDumpLogThread@CrashDumpLog@@SAXXZ
     */
    MCAPI static void stopCrashDumpLogThread();

//protected:

//private:
    /**
     * @hash   882460456
     * @symbol ?crashDumpLogThreadRoutine@CrashDumpLog@@CAXXZ
     */
    MCAPI static void crashDumpLogThreadRoutine();

protected:
    /**
     * @hash   -39974959
     * @symbol ?mAllData@CrashDumpLog@@1PEAUCrashDump_AllData@@EA
     */
    MCAPI static struct CrashDump_AllData * mAllData;

private:
    /**
     * @hash   -371091760
     * @symbol ?mAssertDataMutex@CrashDumpLog@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mAssertDataMutex;
    /**
     * @hash   599917441
     * @symbol ?mCrashDumpLog_logThread@CrashDumpLog@@0V?$unique_ptr@Vthread@std@@U?$default_delete@Vthread@std@@@2@@std@@A
     */
    MCAPI static std::unique_ptr<class std::thread> mCrashDumpLog_logThread;
    /**
     * @hash   771345669
     * @symbol ?mCrashDumpThreadMutex@CrashDumpLog@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mCrashDumpThreadMutex;
    /**
     * @hash   -1642039435
     * @symbol ?mCrashDumpThreadMutexCV@CrashDumpLog@@0Vcondition_variable@std@@A
     */
    MCAPI static class std::condition_variable mCrashDumpThreadMutexCV;
    /**
     * @hash   1153231382
     * @symbol ?mEventDataMutex@CrashDumpLog@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mEventDataMutex;
    /**
     * @hash   -1971843805
     * @symbol ?mFrameDataMutex@CrashDumpLog@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mFrameDataMutex;
    /**
     * @hash   51463744
     * @symbol ?mGameplayDataMutex@CrashDumpLog@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mGameplayDataMutex;
    /**
     * @hash   1992909571
     * @symbol ?mGlobalDataMutex@CrashDumpLog@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mGlobalDataMutex;
    /**
     * @hash   -593984871
     * @symbol ?mIsThreadRunning@CrashDumpLog@@0_NA
     */
    MCAPI static bool mIsThreadRunning;
    /**
     * @hash   -1744182668
     * @symbol ?mKeyValueDataMutex@CrashDumpLog@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mKeyValueDataMutex;
    /**
     * @hash   877011493
     * @symbol ?mPlayerDataMutex@CrashDumpLog@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mPlayerDataMutex;
    /**
     * @hash   153385952
     * @symbol ?mRenderDataMutex@CrashDumpLog@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mRenderDataMutex;

};