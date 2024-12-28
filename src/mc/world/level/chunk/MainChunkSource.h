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
    ::ll::UntypedStorage<8, 64> mUnk48482e;
    // NOLINTEND

public:
    // prevent constructor by default
    MainChunkSource& operator=(MainChunkSource const&);
    MainChunkSource(MainChunkSource const&);
    MainChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MainChunkSource() /*override*/;

    // vIndex: 3
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& cp) /*override*/;

    // vIndex: 5
    virtual bool isChunkKnown(::ChunkPos const& chunkPos) /*override*/;

    // vIndex: 4
    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Random& random) /*override*/;

    // vIndex: 7
    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    // vIndex: 20
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;

    // vIndex: 26
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& getStorage() const /*override*/;

    // vIndex: 27
    virtual void clearDeletedEntities() /*override*/;

    // vIndex: 25
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap() /*override*/;

    // vIndex: 28
    virtual bool canCreateViews() const /*override*/;

    // vIndex: 31
    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk> lc) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MainChunkSource(::std::unique_ptr<::ChunkSource> storage);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::ChunkSource> storage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& cp);

    MCAPI bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCAPI ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Random& random);

    MCAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    MCAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& $getStorage() const;

    MCAPI void $clearDeletedEntities();

    MCAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap();

    MCAPI bool $canCreateViews() const;

    MCAPI void $setLevelChunk(::std::shared_ptr<::LevelChunk> lc);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
