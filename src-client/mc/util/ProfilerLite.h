#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/network/TrackerType.h"
#include "mc/util/ProfilerLiteTelemetry.h"

// auto generated forward declare list
// clang-format off
struct NetworkStatMetrics;
struct ProfilerResourceUsage;
struct _ProfilerLiteTimer;
namespace Bedrock { struct ScopeExit; }
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
    enum class ScopeTag : uint {};

    struct ScopedData {};

    struct RealtimeFrameData {};

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

    MCAPI void _calculateRealtimeFrameData();

    MCAPI void _getProfileStringRecursive(
        ::ProfilerLite::ScopedData& scope,
        uint64&                     writeCount,
        uint64&                     remainingLength,
        char*&                      stringBuilderTemp
    );

    MCFOLD void _shutdown();

    MCAPI ::Bedrock::ScopeExit init(::Core::Path const& logFilePath);

    MCAPI void logScreenCreationEvent(::std::string const& screenName, double creationTime, uchar clientID);

    MCAPI void reset();

    MCAPI bool tick(
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
    MCAPI static void
    _writeHeadersIfEmpty(::std::string const& header, ::Core::Path logFileName, ::Core::OutputFileStream& file);

    MCAPI static void getNetworkStats(::NetworkStatMetrics& stats, uint& lastSampleNum, ::TrackerType type);
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
