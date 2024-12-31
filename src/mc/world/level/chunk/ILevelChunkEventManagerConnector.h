#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class ILevelChunkEventManagerConnector {
public:
    // prevent constructor by default
    ILevelChunkEventManagerConnector& operator=(ILevelChunkEventManagerConnector const&);
    ILevelChunkEventManagerConnector(ILevelChunkEventManagerConnector const&);
    ILevelChunkEventManagerConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelChunkEventManagerConnector() = default;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>& getOnChunkLoadedConnector() = 0;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>& getOnChunkReloadedConnector() = 0;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& getOnChunkDiscardedConnector() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
