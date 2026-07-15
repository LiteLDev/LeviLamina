#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class LevelChunk;
// clang-format on

class EditorChunkSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::LevelChunk>>> mStructureLevelChunks;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorChunkSource() /*override*/ = default;

    virtual bool canCreateViews() const /*override*/;

    virtual ::std::shared_ptr<::LevelChunk>
    getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    virtual bool isChunkKnown(::ChunkPos const& chunkPos) /*override*/;

    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& cp) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    EditorChunkSource(::Dimension* dimension, int side, ::std::vector<::std::unique_ptr<::LevelChunk>> levelChunks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension* dimension, int side, ::std::vector<::std::unique_ptr<::LevelChunk>> levelChunks);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canCreateViews() const;

    MCNAPI ::std::shared_ptr<::LevelChunk>
    $getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCNAPI bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCNAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCNAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& cp);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
