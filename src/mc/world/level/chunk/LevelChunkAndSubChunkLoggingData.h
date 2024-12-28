#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class SubChunkPos;
// clang-format on

struct LevelChunkAndSubChunkLoggingData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // LevelChunkAndSubChunkLoggingData inner types declare
    // clang-format off
    struct LogEntry;
    // clang-format on

    // LevelChunkAndSubChunkLoggingData inner types define
    struct LogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnke8ff39;
        ::ll::UntypedStorage<8, 32> mUnk398c02;
        ::ll::UntypedStorage<1, 1>  mUnk6c0f4b;
        // NOLINTEND

    public:
        // prevent constructor by default
        LogEntry& operator=(LogEntry const&);
        LogEntry(LogEntry const&);
        LogEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk825d58;
    ::ll::UntypedStorage<4, 12> mUnkeac1da;
    ::ll::UntypedStorage<1, 1>  mUnk6f8486;
    ::ll::UntypedStorage<1, 1>  mUnkde6950;
    ::ll::UntypedStorage<1, 1>  mUnk52206e;
    ::ll::UntypedStorage<1, 1>  mUnk9f6042;
    ::ll::UntypedStorage<1, 1>  mUnkcd7f6b;
    ::ll::UntypedStorage<1, 1>  mUnk3a940e;
    ::ll::UntypedStorage<4, 4>  mUnke24144;
    ::ll::UntypedStorage<4, 4>  mUnkd187a7;
    ::ll::UntypedStorage<4, 4>  mUnkd5517f;
    ::ll::UntypedStorage<8, 8>  mUnk2330e3;
    ::ll::UntypedStorage<8, 16> mUnkd1257b;
    ::ll::UntypedStorage<8, 16> mUnk768d4c;
    ::ll::UntypedStorage<8, 24> mUnk5de58f;
    ::ll::UntypedStorage<8, 80> mUnk15c6dd;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkAndSubChunkLoggingData& operator=(LevelChunkAndSubChunkLoggingData const&);
    LevelChunkAndSubChunkLoggingData(LevelChunkAndSubChunkLoggingData const&);
    LevelChunkAndSubChunkLoggingData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkAndSubChunkLoggingData() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void logLevelChunkEvent(::ChunkPos const& chunkPos, char const* message, bool isClientSide);

    MCAPI static void logSubChunkEvent(::SubChunkPos const& subChunkPos, char const* message, bool isClientSide);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
