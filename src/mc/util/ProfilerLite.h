#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/network/TrackerType.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/ProfilerLiteTelemetry.h"

// auto generated forward declare list
// clang-format off
class _ProfilerLiteTimer;
struct NetworkStatMetrics;
struct ProfilerResourceUsage;
namespace Bedrock { class ScopeExit; }
namespace Core { class Path; }
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
        None            = 0,
        Root            = 1,
        PreFrame        = 2,
        BeginFrame      = 3,
        ClientInstance  = 4,
        EndFrame        = 5,
        Present         = 6,
        Input           = 7,
        ClientSimTick   = 8,
        ClientRealTick  = 9,
        ServerInstance  = 10,
        ServerSimTick   = 11,
        ServerRealTick  = 12,
        Render          = 13,
        RenderLevel     = 14,
        TickAndRenderUI = 15,
        UpdateFrame     = 16,
        UpdateGame      = 17,
        Last            = 17,
        SimTickFirst    = 8,
        SimTickLast     = 12,
        RenderTickFirst = 13,
        RenderTickLast  = 15,
    };

    struct RealtimeFrameData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                       mGameUpdates;
        ::ll::TypedStorage<4, 4, uint>                       mFrames;
        ::ll::TypedStorage<4, 4, float>                      mFPS;
        ::ll::TypedStorage<4, 4, float>                      mGameUpdateFPS;
        ::ll::TypedStorage<4, 4, float>                      mFrameTime;
        ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds> mLastFrame;
        ::ll::TypedStorage<1, 1, bool>                       mFirstFrame;
        // NOLINTEND
    };

    struct ScopedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*>                                 mName;
        ::ll::TypedStorage<4, 4, ::ProfilerLite::ScopeTag>                    mScope;
        ::ll::TypedStorage<4, 4, ::ProfilerLite::ScopeTag>                    mBaseScope;
        ::ll::TypedStorage<8, 8, ::ProfilerLite::ScopedData*>                 mParent;
        ::ll::TypedStorage<4, 4, int>                                         mTabCount;
        ::ll::TypedStorage<8, 24, ::std::vector<::ProfilerLite::ScopedData*>> mChildren;
        ::ll::TypedStorage<4, 4, int>                                         mHitCount;
        ::ll::TypedStorage<8, 8, double>                                      mTotalTime;
        ::ll::TypedStorage<8, 8, double>                                      mTotalInclusiveTime;
        ::ll::TypedStorage<8, 8, double>                                      mMaxTimePerLoop;
        ::ll::TypedStorage<8, 8, double>                                      mFrameAccumulatedTime;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C void resetRecursive();

        MCNAPI ~ScopedData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using EventSource = ::brstd::function_ref<
        void(::brstd::function_ref<void(::std::string const&, double), void(::std::string const&, double)>)>;

    using EventVisitor = ::brstd::function_ref<void(::std::string const&, double)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::std::array<::ProfilerLite::ScopedData*, 18>>       mCustomScopeDatas;
    ::ll::TypedStorage<8, 96, ::ProfilerLite::ScopedData>                           mUninitializedScopedData;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                            mLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mScreenLoadLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                            mScreenLoadLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mEventLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                            mEventLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mSecondaryLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                            mSecondaryLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mSecondaryScreenLoadLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                            mSecondaryScreenLoadLogFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mSecondaryEventLogFileName;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>                            mSecondaryEventLogFile;
    ::ll::TypedStorage<4, 4, float>                                                 mSecondsPerUpdate;
    ::ll::TypedStorage<8, 8, double>                                                mTime;
    ::ll::TypedStorage<8, 8, double>                                                mStartTime;
    ::ll::TypedStorage<8, 8, double>                                                mNextUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                                mLastUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                                mBenchmarkModeTime;
    ::ll::TypedStorage<4, 4, int>                                                   mTicksToNextMemoryUpdate;
    ::ll::TypedStorage<1, 1, bool>                                                  mBenchmarkModeDone;
    ::ll::TypedStorage<1, 1, bool>                                                  mBenchmarkModeIsSetup;
    ::ll::TypedStorage<1, 1, bool>                                                  mDefaultEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                  mForceEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                  mShouldCheckTreatments;
    ::ll::TypedStorage<1, 1, bool>                                                  mCanLogToSecondaryFile;
    ::ll::TypedStorage<8, 8, ::_ProfilerLiteTimer*>                                 mActiveScope;
    ::ll::TypedStorage<8, 16, ::std::map<::std::thread::id, ::_ProfilerLiteTimer*>> mThreadedActiveScopes;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mCurrentGamestate;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                            mDebugServerTickTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                            mDebugServerNetworkTime;
    ::ll::TypedStorage<4, 4, float>                                                 mDebugRemoteServerTickTime;
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                              mTelemetry;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mCachedProfileString;
    ::ll::TypedStorage<4, 16, ::std::array<uint, 4>>                                mLastNetworkStatSampleNum;
    ::ll::TypedStorage<8, 8, uint64>                                                mPrevTotalBytesWritten;
    ::ll::TypedStorage<8, 8, uint64>                                                mPrevTotalBytesRead;
    ::ll::TypedStorage<8, 40, ::ProfilerLite::RealtimeFrameData>                    mFrameData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProfilerLite();

    MCAPI_C void _calculateRealtimeFrameData();

    MCAPI_C void _getProfileStringRecursive(
        ::ProfilerLite::ScopedData& scope,
        uint64&                     writeCount,
        uint64&                     remainingLength,
        char*&                      stringBuilderTemp
    );

    MCFOLD_C void _shutdown();

    MCAPI_C ::Bedrock::ScopeExit init(::Core::Path const& logFilePath);

    MCAPI_C void logScreenCreationEvent(::std::string const& screenName, double creationTime, uchar clientID);

    MCAPI_C void reset();

    MCAPI_C bool tick(
        bool                           isVSynced,
        bool                           frameDiscarded,
        bool                           outputProfilerInfo,
        int                            benchmarkModeStartTime,
        ::ProfilerResourceUsage const& resources,
        bool                           logPackets
    );

    MCAPI ~ProfilerLite();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void
    _writeHeadersIfEmpty(::std::string const& header, ::Core::Path logFileName, ::Core::OutputFileStream& file);

    MCAPI_C static void getNetworkStats(::NetworkStatMetrics& stats, uint& lastSampleNum, ::TrackerType type);
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
