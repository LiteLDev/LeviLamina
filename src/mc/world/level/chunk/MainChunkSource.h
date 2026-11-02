#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
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

    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap() const /*override*/;

    virtual bool canCreateViews() const /*override*/;

    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk> lc) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& cp);

    MCNAPI bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCNAPI ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Random& random);

    MCNAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCNAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    MCNAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& $getStorage() const;

    MCNAPI void $clearDeletedEntities();

    MCNAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap() const;

    MCNAPI bool $canCreateViews() const;

    MCNAPI void $setLevelChunk(::std::shared_ptr<::LevelChunk> lc);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
