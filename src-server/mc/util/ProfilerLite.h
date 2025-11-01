#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/util/ProfilerLiteTelemetry.h"

// auto generated forward declare list
// clang-format off
class _ProfilerLiteTimer;
// clang-format on

class ProfilerLite {
public:
    // ProfilerLite inner types declare
    // clang-format off
    struct RealtimeFrameData;
    struct ScopedData;
    // clang-format on
    
    // ProfilerLite inner types define
    enum class ScopeTag : int {
        None = 0,
        Root = 1,
        PreFrame = 2,
        BeginFrame = 3,
        ClientInstance = 4,
        EndFrame = 5,
        Present = 6,
        Input = 7,
        ClientSimTick = 8,
        ClientRealTick = 9,
        ServerInstance = 10,
        ServerSimTick = 11,
        ServerRealTick = 12,
        Render = 13,
        RenderLevel = 14,
        TickAndRenderUI = 15,
        UpdateFrame = 16,
        UpdateGame = 17,
        Last = 17,
        SimTickFirst = 8,
        SimTickLast = 12,
        RenderTickFirst = 13,
        RenderTickLast = 15,
    };
    
    struct ScopedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk639906;
        ::ll::UntypedStorage<4, 4> mUnk757818;
        ::ll::UntypedStorage<4, 4> mUnkffc636;
        ::ll::UntypedStorage<8, 8> mUnkf95090;
        ::ll::UntypedStorage<4, 4> mUnkcc0c31;
        ::ll::UntypedStorage<8, 24> mUnk966309;
        ::ll::UntypedStorage<4, 4> mUnk5a0990;
        ::ll::UntypedStorage<8, 8> mUnk7b5357;
        ::ll::UntypedStorage<8, 8> mUnkb9f549;
        ::ll::UntypedStorage<8, 8> mUnk5163f4;
        ::ll::UntypedStorage<8, 8> mUnke9f4fd;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ScopedData& operator=(ScopedData const&);
        ScopedData(ScopedData const&);
        ScopedData();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ScopedData();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    struct RealtimeFrameData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk423d24;
        ::ll::UntypedStorage<4, 4> mUnkbe74e1;
        ::ll::UntypedStorage<4, 4> mUnkf5e907;
        ::ll::UntypedStorage<4, 4> mUnk6aeac2;
        ::ll::UntypedStorage<4, 4> mUnkc71324;
        ::ll::UntypedStorage<8, 8> mUnkf09595;
        ::ll::UntypedStorage<1, 1> mUnk5f6eae;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        RealtimeFrameData& operator=(RealtimeFrameData const&);
        RealtimeFrameData(RealtimeFrameData const&);
        RealtimeFrameData();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::std::array<::ProfilerLite::ScopedData*, 18>> mCustomScopeDatas;
    ::ll::TypedStorage<8, 96, ::ProfilerLite::ScopedData> mUninitializedScopedData;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream> mLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mScreenLoadLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream> mScreenLoadLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mEventLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream> mEventLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mSecondaryLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream> mSecondaryLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mSecondaryScreenLoadLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream> mSecondaryScreenLoadLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mSecondaryEventLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream> mSecondaryEventLogFile;
    ::ll::TypedStorage<4, 4, float> mSecondsPerUpdate;
    ::ll::TypedStorage<8, 8, double> mTime;
    ::ll::TypedStorage<8, 8, double> mStartTime;
    ::ll::TypedStorage<8, 8, double> mNextUpdateTime;
    ::ll::TypedStorage<8, 8, double> mLastUpdateTime;
    ::ll::TypedStorage<8, 8, double> mBenchmarkModeTime;
    ::ll::TypedStorage<4, 4, int> mTicksToNextMemoryUpdate;
    ::ll::TypedStorage<1, 1, bool> mBenchmarkModeDone;
    ::ll::TypedStorage<1, 1, bool> mBenchmarkModeIsSetup;
    ::ll::TypedStorage<1, 1, bool> mDefaultEnabled;
    ::ll::TypedStorage<1, 1, bool> mForceEnabled;
    ::ll::TypedStorage<1, 1, bool> mShouldCheckTreatments;
    ::ll::TypedStorage<1, 1, bool> mCanLogToSecondaryFile;
    ::ll::TypedStorage<8, 8, ::_ProfilerLiteTimer*> mActiveScope;
    ::ll::TypedStorage<8, 16, ::std::map<::std::thread::id, ::_ProfilerLiteTimer*>> mThreadedActiveScopes;
    ::ll::TypedStorage<8, 32, ::std::string> mCurrentGamestate;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mDebugServerTickTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mDebugServerNetworkTime;
    ::ll::TypedStorage<4, 4, float> mDebugRemoteServerTickTime;
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry> mTelemetry;
    ::ll::TypedStorage<8, 32, ::std::string> mCachedProfileString;
    ::ll::TypedStorage<4, 16, ::std::array<uint, 4>> mLastNetworkStatSampleNum;
    ::ll::TypedStorage<8, 8, uint64> mPrevTotalBytesWritten;
    ::ll::TypedStorage<8, 8, uint64> mPrevTotalBytesRead;
    ::ll::TypedStorage<8, 40, ::ProfilerLite::RealtimeFrameData> mFrameData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProfilerLite();

    MCAPI ~ProfilerLite();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ProfilerLite& gProfilerLiteInstance();

    MCAPI static ::std::thread::id& sEmptyThreadID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
