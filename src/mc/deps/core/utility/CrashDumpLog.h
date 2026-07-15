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
    MCNAPI static void logEvent(::CrashDumpEventData const& eventData);

    MCNAPI static void logKeyValue(::CrashDumpKeyValueData const& keyValueData);

    MCNAPI static void setAssertMessage(char const* desc, int line, char const* file, char const* function);

    MCNAPI static void setBehaviorPackIds(::std::vector<::std::string> const& packIds);

    MCNAPI static bool setDeviceID(::std::string const& str);

    MCNAPI static bool setDeviceSessionID(::std::string const& str);

#ifdef LL_PLAT_C
    MCNAPI static void setMainSceneStack(::std::vector<::std::string> const& sceneNames);

    MCNAPI static void setPlayerSceneStack(int playerIndex, ::std::vector<::std::string> const& sceneNames);

    MCNAPI static void setResourcePackIds(::std::vector<::std::string> const& packIds);
#endif

    MCNAPI static bool startCrashDumpLogThread();

#ifdef LL_PLAT_S
    MCNAPI static void stopCrashDumpLogThread();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::CrashDump_AllData*& mAllData();

    MCNAPI static ::Bedrock::Threading::Mutex& mAssertDataMutex();

    MCNAPI static ::std::unique_ptr<::std::thread>& mCrashDumpLog_logThread();

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
