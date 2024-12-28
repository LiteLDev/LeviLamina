#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
namespace Json { class Value; }
// clang-format on

struct ChunkLoadTelemetryData {
public:
    // ChunkLoadTelemetryData inner types declare
    // clang-format off
    struct ClientSubChunkCache;
    struct ServerChunkLoading;
    // clang-format on

    // ChunkLoadTelemetryData inner types define
    struct ServerChunkLoading {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkcfd81b;
        ::ll::UntypedStorage<4, 4> mUnk233b11;
        ::ll::UntypedStorage<4, 4> mUnkf2b37c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerChunkLoading& operator=(ServerChunkLoading const&);
        ServerChunkLoading(ServerChunkLoading const&);
        ServerChunkLoading();
    };

    struct ClientSubChunkCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkfa962e;
        ::ll::UntypedStorage<4, 4> mUnk84bbfb;
        ::ll::UntypedStorage<4, 4> mUnk507fa8;
        // NOLINTEND

    public:
        // prevent constructor by default
        ClientSubChunkCache& operator=(ClientSubChunkCache const&);
        ClientSubChunkCache(ClientSubChunkCache const&);
        ClientSubChunkCache();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkad3a61;
    ::ll::UntypedStorage<4, 12> mUnk7e8f63;
    ::ll::UntypedStorage<4, 12> mUnke520d6;
    ::ll::UntypedStorage<4, 12> mUnk22eb06;
    ::ll::UntypedStorage<4, 12> mUnkdcf7fe;
    ::ll::UntypedStorage<4, 12> mUnk3c1e83;
    ::ll::UntypedStorage<4, 12> mUnk1ff4d8;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkLoadTelemetryData& operator=(ChunkLoadTelemetryData const&);
    ChunkLoadTelemetryData(ChunkLoadTelemetryData const&);
    ChunkLoadTelemetryData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void recordLoadedChunk(::LevelChunk const& chunk);

    MCAPI ::Json::Value toJson() const;
    // NOLINTEND
};
