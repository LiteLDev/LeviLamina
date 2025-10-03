#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Bounds.h"
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class LevelChunk;
struct Bounds;
// clang-format on

class WorldLimitChunkSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::Bounds> mLimitArea;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLimitChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldLimitChunkSource() /*override*/ = default;

    // vIndex: 7
    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    // vIndex: 3
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& cp) /*override*/;

    // vIndex: 24
    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const /*override*/;

    // vIndex: 28
    virtual bool canCreateViews() const /*override*/;

    // vIndex: 25
    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    WorldLimitChunkSource(::std::unique_ptr<::ChunkSource> storage, ::BlockPos const& center, int width, int depth);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::ChunkSource> storage, ::BlockPos const& center, int width, int depth);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCNAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& cp);

    MCNAPI bool $isWithinWorldLimit(::ChunkPos const& cp) const;

    MCNAPI bool $canCreateViews() const;

    MCNAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
