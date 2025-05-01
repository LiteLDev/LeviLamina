#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Json::Value toJson() const;
        // NOLINTEND
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Json::Value toJson() const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                          mServerSimDistance;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoading;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingInsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading> mServerChunkLoadingOutsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading>
        mServerChunkLoadingRequestedInsideTickRangeLoadedOutsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ServerChunkLoading>
        mServerChunkLoadingRequestedOutsideTickRangeLoadedInsideTickRange;
    ::ll::TypedStorage<4, 12, ::ChunkLoadTelemetryData::ClientSubChunkCache> mClientSubChunkCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Json::Value toJson() const;
    // NOLINTEND
};
