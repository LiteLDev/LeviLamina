#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class CrashDumpLog {
public:
    // prevent constructor by default
    CrashDumpLog& operator=(CrashDumpLog const&);
    CrashDumpLog(CrashDumpLog const&);
    CrashDumpLog();

public:
    // NOLINTBEGIN
    MCAPI static void logEvent(struct CrashDumpEventData const&);

    MCAPI static void logFrame(struct CrashDumpFrameData const&);

    MCAPI static void logKeyValue(struct CrashDumpKeyValueData const&);

    MCAPI static void setAssertMessage(char const*, int, char const*, char const*);

    MCAPI static void setBehaviorPackIds(std::vector<std::string> const&);

    MCAPI static bool setDeviceSessionID(std::string const&);

    MCAPI static void setGameVersion(char const*);

    MCAPI static void setPlatform(char const*);

    MCAPI static void setTotalMemory(uint64);

    MCAPI static bool startCrashDumpLogThread();

    MCAPI static void stopCrashDumpLogThread();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void crashDumpLogThreadRoutine();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static struct CrashDump_AllData*& mAllData();

    MCAPI static class Bedrock::Threading::Mutex& mAssertDataMutex();

    MCAPI static std::unique_ptr<std::thread>& mCrashDumpLog_logThread();

    MCAPI static class Bedrock::Threading::Mutex& mCrashDumpThreadMutex();

    MCAPI static std::condition_variable& mCrashDumpThreadMutexCV();

    MCAPI static class Bedrock::Threading::Mutex& mEventDataMutex();

    MCAPI static class Bedrock::Threading::Mutex& mFrameDataMutex();

    MCAPI static class Bedrock::Threading::Mutex& mGameplayDataMutex();

    MCAPI static class Bedrock::Threading::Mutex& mGlobalDataMutex();

    MCAPI static bool& mIsThreadRunning();

    MCAPI static class Bedrock::Threading::Mutex& mKeyValueDataMutex();

    MCAPI static class Bedrock::Threading::Mutex& mPlayerDataMutex();

    MCAPI static class Bedrock::Threading::Mutex& mRenderDataMutex();

    // NOLINTEND
};
