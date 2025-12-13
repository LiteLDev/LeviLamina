#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class ISubChunkManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISubChunkManagerConnector() = default;

    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, short, bool)>&
    getOnSubChunkLoadedConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
