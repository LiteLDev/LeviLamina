#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpEventData;
struct CrashDumpKeyValueData;
struct CrashDump_AllData;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class CrashDumpLog {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void crashDumpLogThreadRoutine();

    MCAPI static void logEvent(::CrashDumpEventData const& eventData);

    MCAPI static void logKeyValue(::CrashDumpKeyValueData const& keyValueData);

    MCAPI static bool setDeviceSessionID(::std::string const& str);

    MCAPI static bool startCrashDumpLogThread();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::CrashDump_AllData*& mAllData();

    MCAPI static ::Bedrock::Threading::Mutex& mAssertDataMutex();

    MCAPI static ::std::unique_ptr<::std::thread>& mCrashDumpLog_logThread();

    MCAPI static ::Bedrock::Threading::Mutex& mCrashDumpThreadMutex();

    MCAPI static ::std::condition_variable& mCrashDumpThreadMutexCV();

    MCAPI static ::Bedrock::Threading::Mutex& mEventDataMutex();

    MCAPI static ::Bedrock::Threading::Mutex& mFrameDataMutex();

    MCAPI static ::Bedrock::Threading::Mutex& mGameplayDataMutex();

    MCAPI static ::Bedrock::Threading::Mutex& mGlobalDataMutex();

    MCAPI static bool& mIsThreadRunning();

    MCAPI static ::Bedrock::Threading::Mutex& mKeyValueDataMutex();

    MCAPI static ::Bedrock::Threading::Mutex& mPlayerDataMutex();

    MCAPI static ::Bedrock::Threading::Mutex& mRenderDataMutex();
    // NOLINTEND
};
