#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class Biome;
class ChunkPos;
class LevelChunk;
class LevelStorage;
class PerlinSimplexNoise;
class RegionFile;
struct LevelChunkFinalDeleter;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class LegacyChunkStorage : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                             mDone;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>                      mGrassNoise;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const>         mLevelPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const>         mImportedChunksPath;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RegionFile>>                  mRegionFile;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RegionFile>>                  mEntitiesFile;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                                 mLoadedStorageVersion;
    ::ll::TypedStorage<8, 8, ::Biome&>                                         mDefaultBiome;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::string>> mChunkEntities;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::string>> mChunkBlockEntities;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                     mRegionFileMutex;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                     mChunkMapMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyChunkStorage() /*override*/;

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
    MCAPI void $dtor();
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
