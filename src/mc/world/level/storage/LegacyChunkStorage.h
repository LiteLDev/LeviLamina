#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class Biome;
class ChunkPos;
class LevelChunk;
class LevelStorage;
struct LevelChunkFinalDeleter;
// clang-format on

class LegacyChunkStorage : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk29a516;
    ::ll::UntypedStorage<8, 40> mUnk73f4a0;
    ::ll::UntypedStorage<8, 32> mUnk349e98;
    ::ll::UntypedStorage<8, 32> mUnk88bfc7;
    ::ll::UntypedStorage<8, 8>  mUnka9d2ec;
    ::ll::UntypedStorage<8, 8>  mUnkbb32d3;
    ::ll::UntypedStorage<4, 4>  mUnkdabb51;
    ::ll::UntypedStorage<8, 8>  mUnk91261c;
    ::ll::UntypedStorage<8, 64> mUnk1a2ca8;
    ::ll::UntypedStorage<8, 64> mUnk715963;
    ::ll::UntypedStorage<8, 80> mUnk3be0c7;
    ::ll::UntypedStorage<8, 80> mUnk68190f;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyChunkStorage& operator=(LegacyChunkStorage const&);
    LegacyChunkStorage(LegacyChunkStorage const&);
    LegacyChunkStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyChunkStorage() /*override*/ = default;

    // vIndex: 11
    virtual void loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad) /*override*/;

    // vIndex: 14
    virtual bool saveLiveChunk(::LevelChunk& lc) /*override*/;

    // vIndex: 20
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyChunkStorage(
        ::std::unique_ptr<::ChunkSource> parent,
        ::LevelStorage&                  levelStorage,
        ::StorageVersion                 v,
        ::Biome&                         defaultBiome
    );

    MCAPI bool _isImported(::ChunkPos const& pos);

    MCAPI bool _loadChunk(::LevelChunk& lc);

    MCAPI void _loadEntities();

    MCAPI void _markChunkAsImported(::ChunkPos const& pos);

    MCAPI bool _openRegionFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::ChunkSource> parent,
        ::LevelStorage&                  levelStorage,
        ::StorageVersion                 v,
        ::Biome&                         defaultBiome
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadChunk(::LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI bool $saveLiveChunk(::LevelChunk& lc);

    MCAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
