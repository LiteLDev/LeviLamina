#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkAndSubChunkLoggingData {
public:
    // LevelChunkAndSubChunkLoggingData inner types declare
    // clang-format off
    struct CollatedLogEntry;
    struct LogEntry;
    // clang-format on

    // LevelChunkAndSubChunkLoggingData inner types define
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

    struct LogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mTimePoint;
        ::ll::TypedStorage<8, 32, ::std::string>                          mLogEntry;
        ::ll::TypedStorage<1, 1, bool>                                    mIsClientSide;
        // NOLINTEND
    };
};
