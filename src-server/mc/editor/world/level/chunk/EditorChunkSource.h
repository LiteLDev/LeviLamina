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
    // vIndex: 0
    virtual ~EditorChunkSource() /*override*/ = default;

    // vIndex: 31
    virtual bool canCreateViews() const /*override*/;

    // vIndex: 8
    virtual ::std::shared_ptr<::LevelChunk> getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    // vIndex: 5
    virtual bool isChunkKnown(::ChunkPos const& chunkPos) /*override*/;

    // vIndex: 7
    virtual ::std::shared_ptr<::LevelChunk> createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    // vIndex: 3
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& cp) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorChunkSource(::Dimension* dimension, int side, ::std::vector<::std::unique_ptr<::LevelChunk>> levelChunks);
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

    MCNAPI ::std::shared_ptr<::LevelChunk> $getOrLoadChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCNAPI bool $isChunkKnown(::ChunkPos const& chunkPos);

    MCNAPI ::std::shared_ptr<::LevelChunk> $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCNAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& cp);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
