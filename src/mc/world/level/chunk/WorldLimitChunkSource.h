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
// clang-format on

class WorldLimitChunkSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::Bounds> mLimitArea;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    WorldLimitChunkSource();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldLimitChunkSource() /*override*/ = default;

    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& cp) /*override*/;

    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const /*override*/;

    virtual bool canCreateViews() const /*override*/;

    virtual ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* getChunkMap() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI
    WorldLimitChunkSource(::std::unique_ptr<::ChunkSource> storage, ::BlockPos const& center, int width, int depth);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::unique_ptr<::ChunkSource> storage, ::BlockPos const& center, int width, int depth);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& cp);

    MCAPI bool $isWithinWorldLimit(::ChunkPos const& cp) const;

    MCFOLD bool $canCreateViews() const;

    MCAPI ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>> const* $getChunkMap() const;


    // NOLINTEND
};
