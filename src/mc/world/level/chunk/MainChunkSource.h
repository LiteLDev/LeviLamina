#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class LevelChunk;
class Random;
struct LevelChunkFinalDeleter;
// clang-format on

class MainChunkSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>>> mChunkMap;
    // NOLINTEND

public:
    // prevent constructor by default
    MainChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MainChunkSource() /*override*/ = default;

    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& cp) /*override*/;

    virtual bool isChunkKnown(::ChunkPos const& chunkPos) /*override*/;

    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Random& random) /*override*/;

    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;

    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& getStorage() const /*override*/;

    virtual void clearDeletedEntities() /*override*/;

    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap() /*override*/;

    virtual bool canCreateViews() const /*override*/;

    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk> lc) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C explicit MainChunkSource(::std::unique_ptr<::ChunkSource> storage);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::std::unique_ptr<::ChunkSource> storage);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& cp);

    MCAPI bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCAPI ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Random& random);

    MCAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCFOLD void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    MCFOLD ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& $getStorage() const;

    MCAPI void $clearDeletedEntities();

    MCFOLD ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap();

    MCFOLD bool $canCreateViews() const;

    MCAPI void $setLevelChunk(::std::shared_ptr<::LevelChunk> lc);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
