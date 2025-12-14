#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class LevelChunk;
struct LevelChunkFinalDeleter;
// clang-format on

class NetworkChunkSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>>> mChunkMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& cp) /*override*/;

    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    virtual ::std::shared_ptr<::LevelChunk>
    getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;

    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& getStorage() const /*override*/;

    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap() /*override*/;

    virtual bool canCreateViews() const /*override*/;

    virtual bool canLaunchTasks() const /*override*/;

    virtual ~NetworkChunkSource() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& cp);

    MCAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCFOLD ::std::shared_ptr<::LevelChunk>
    $getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCFOLD void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    MCFOLD ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const& $getStorage() const;

    MCFOLD ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap();

    MCFOLD bool $canCreateViews() const;

    MCFOLD bool $canLaunchTasks() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
