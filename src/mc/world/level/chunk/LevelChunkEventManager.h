#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/level/chunk/ILevelChunkEventManagerConnector.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ILevelChunkEventManagerProxy;
class LevelChunk;
// clang-format on

class LevelChunkEventManager : public ::ILevelChunkEventManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk5fa7b8;
    ::ll::UntypedStorage<8, 128> mUnkb42b90;
    ::ll::UntypedStorage<8, 128> mUnk7144be;
    ::ll::UntypedStorage<8, 8>   mUnka9f96b;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkEventManager& operator=(LevelChunkEventManager const&);
    LevelChunkEventManager(LevelChunkEventManager const&);
    LevelChunkEventManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkEventManager() /*override*/ = default;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>&
    getOnChunkLoadedConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>&
    getOnChunkReloadedConnector() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& getOnChunkDiscardedConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LevelChunkEventManager(::std::unique_ptr<::ILevelChunkEventManagerProxy> levelChunkEventManagerProxy
    );

    MCAPI void onChunkDiscarded(::LevelChunk& levelChunk);

    MCAPI void onChunkLoaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);

    MCAPI void onChunkReloaded(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::ILevelChunkEventManagerProxy> levelChunkEventManagerProxy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>& $getOnChunkLoadedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>& $getOnChunkReloadedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& $getOnChunkDiscardedConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
