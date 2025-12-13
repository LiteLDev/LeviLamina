#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/chunk/ChunkState.h"
#include "mc/world/level/chunk/SubChunk.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
// clang-format on

struct LevelChunkAndSubChunkLoggingData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // LevelChunkAndSubChunkLoggingData inner types declare
    // clang-format off
    struct CollatedLogEntry;
    struct DebugRenderingOptions;
    struct LogEntry;
    // clang-format on

    // LevelChunkAndSubChunkLoggingData inner types define
    struct LogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mTimePoint;
        ::ll::TypedStorage<8, 32, ::std::string>                          mLogEntry;
        ::ll::TypedStorage<1, 1, bool>                                    mIsClientSide;
        // NOLINTEND
    };

    struct CollatedLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::std::chrono::duration<float, ::std::ratio<1, 1>>> mElapsedTime;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mClientOrServer;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mType;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mMessage;
        // NOLINTEND
    };

    struct DebugRenderingOptions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mEnabled;
        ::ll::TypedStorage<1, 1, bool> mShowLevelChunk;
        ::ll::TypedStorage<1, 1, bool> mShowSubChunk;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                            mCurrentPlayerSubChunk;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                            mSubChunkToTrack;
    ::ll::TypedStorage<1, 1, bool>                                                      mCollectData;
    ::ll::TypedStorage<1, 1, bool>                                                      mLogAllData;
    ::ll::TypedStorage<1, 1, bool>                                                      mCollectSubChunkPosition;
    ::ll::TypedStorage<1, 3, ::LevelChunkAndSubChunkLoggingData::DebugRenderingOptions> mDebugRenderingOptions;
    ::ll::TypedStorage<1, 1, ::ChunkState>                                              mTrackedLevelChunkStateServer;
    ::ll::TypedStorage<1, 1, ::ChunkState>                                              mTrackedLevelChunkStateClient;
    ::ll::TypedStorage<1, 1, ::ChunkState>                            mTrackedLevelChunkStateClientServer;
    ::ll::TypedStorage<4, 4, ::SubChunk::SubChunkState>               mTrackedSubChunkStateServer;
    ::ll::TypedStorage<4, 4, ::SubChunk::SubChunkState>               mTrackedSubChunkStateClient;
    ::ll::TypedStorage<4, 4, ::SubChunk::SubChunkState>               mTrackedSubChunkStateClientServer;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLogStartTime;
    ::ll::TypedStorage<8, 16, ::std::map<::SubChunkPos, ::std::vector<::LevelChunkAndSubChunkLoggingData::LogEntry>>>
        mSubChunkLog;
    ::ll::TypedStorage<8, 16, ::std::map<::ChunkPos, ::std::vector<::LevelChunkAndSubChunkLoggingData::LogEntry>>>
                                                                                           mLevelChunkLog;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunkAndSubChunkLoggingData::LogEntry>> mGeneralEventLog;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                 mMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkAndSubChunkLoggingData() /*override*/ = default;
    // NOLINTEND
};
