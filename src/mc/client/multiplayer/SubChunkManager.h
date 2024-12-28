#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/multiplayer/ISubChunkManagerConnector.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class SubChunkManager : public ::ISubChunkManagerConnector {
public:
    // SubChunkManager inner types declare
    // clang-format off
    struct SubChunkChange;
    // clang-format on

    // SubChunkManager inner types define
    struct SubChunkChange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnka5f8a3;
        ::ll::UntypedStorage<8, 16> mUnk694c5a;
        ::ll::UntypedStorage<8, 64> mUnkf23ba7;
        // NOLINTEND

    public:
        // prevent constructor by default
        SubChunkChange& operator=(SubChunkChange const&);
        SubChunkChange(SubChunkChange const&);
        SubChunkChange();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk50bfa9;
    ::ll::UntypedStorage<8, 448> mUnk8d019d;
    ::ll::UntypedStorage<8, 312> mUnkfd9284;
    ::ll::UntypedStorage<8, 128> mUnk152c73;
    ::ll::UntypedStorage<8, 16>  mUnk8c704d;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkManager& operator=(SubChunkManager const&);
    SubChunkManager(SubChunkManager const&);
    SubChunkManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, short, bool)>&
    getOnSubChunkLoadedConnector() /*override*/;

    // vIndex: 0
    virtual ~SubChunkManager() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, short, bool)>&
    $getOnSubChunkLoadedConnector();
    // NOLINTEND
};
