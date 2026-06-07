#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpEventData;
struct CrashDumpFrameData;
struct CrashDumpKeyValueData;
struct CrashDumpRenderData;
struct CrashDump_AllData;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class CrashDumpLog {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void crashDumpLogThreadRoutine();

    MCNAPI static void logEvent(::CrashDumpEventData const& eventData);

    MCNAPI static void logFrame(::CrashDumpFrameData const& frameData);

    MCNAPI static void logKeyValue(::CrashDumpKeyValueData const& keyValueData);

#ifdef LL_PLAT_C
    MCNAPI static void logRenderCall(::CrashDumpRenderData const& renderData);
#endif

    MCNAPI static void setAssertMessage(char const* desc, int line, char const* file, char const* function);

    MCNAPI static void setBehaviorPackIds(::std::vector<::std::string> const& packIds);

    MCNAPI static bool setDeviceID(::std::string const& str);

    MCNAPI static bool setDeviceSessionID(::std::string const& str);

#ifdef LL_PLAT_C
    MCNAPI static void setEditorWorld(bool editorWorld);
#endif

    MCNAPI static void setGameVersion(char const* gameVersion);

#ifdef LL_PLAT_C
    MCNAPI static void setGraphicsMode(short graphicsMode);

    MCNAPI static void setMainSceneStack(::std::vector<::std::string> const& sceneNames);
#endif

    MCNAPI static void setPlatform(char const* platformString);

#ifdef LL_PLAT_C
    MCNAPI static void setPlayerSceneStack(int playerIndex, ::std::vector<::std::string> const& sceneNames);

    MCNAPI static void setResourcePackIds(::std::vector<::std::string> const& packIds);
#endif

    MCNAPI static void setTotalMemory(uint64 memory);

#ifdef LL_PLAT_C
    MCNAPI static void setWorldSeed(int seed);
#endif

    MCNAPI static bool startCrashDumpLogThread();

    MCNAPI static void stopCrashDumpLogThread();
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
