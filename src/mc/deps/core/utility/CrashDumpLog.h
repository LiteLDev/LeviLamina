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
    MCNAPI static void crashDumpLogThreadRoutine();

    MCNAPI static void logEvent(::CrashDumpEventData const& eventData);

    MCNAPI static void logKeyValue(::CrashDumpKeyValueData const& keyValueData);

    MCNAPI_C static bool setDeviceID(::std::string const& str);

    MCNAPI static bool setDeviceSessionID(::std::string const& str);

    MCNAPI_C static void setMainSceneStack(::std::vector<::std::string> const& sceneNames);

    MCNAPI_C static void setPlayerSceneStack(int playerIndex, ::std::vector<::std::string> const& sceneNames);

    MCNAPI static bool startCrashDumpLogThread();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::CrashDump_AllData*& mAllData();

    MCNAPI static ::Bedrock::Threading::Mutex& mAssertDataMutex();

    MCNAPI static ::std::unique_ptr<::std::thread>& mCrashDumpLog_logThread();

    MCNAPI static ::Bedrock::Threading::Mutex& mCrashDumpThreadMutex();

    MCNAPI static ::std::condition_variable& mCrashDumpThreadMutexCV();

    MCNAPI static ::Bedrock::Threading::Mutex& mEventDataMutex();

    MCNAPI static ::Bedrock::Threading::Mutex& mFrameDataMutex();

    MCNAPI static ::Bedrock::Threading::Mutex& mGameplayDataMutex();

    MCNAPI static ::Bedrock::Threading::Mutex& mGlobalDataMutex();

    MCNAPI static bool& mIsThreadRunning();

    MCNAPI static ::Bedrock::Threading::Mutex& mKeyValueDataMutex();

    MCNAPI static ::Bedrock::Threading::Mutex& mPlayerDataMutex();

    MCNAPI static ::Bedrock::Threading::Mutex& mRenderDataMutex();
    // NOLINTEND
};
