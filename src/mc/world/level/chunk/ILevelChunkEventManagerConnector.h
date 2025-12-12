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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelChunkEventManagerConnector() = default;

    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>& getOnChunkLoadedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>& getOnChunkReloadedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& getOnChunkDiscardedConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
