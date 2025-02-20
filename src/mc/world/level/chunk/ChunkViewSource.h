#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class LevelChunk;
class Random;
struct Bounds;
struct LevelChunkFinalDeleter;
// clang-format on

class ChunkViewSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ChunkSource::LoadMode>                       mParentLoadMode;
    ::ll::TypedStorage<8, 376, ::GridArea<::std::shared_ptr<::LevelChunk>>> mArea;
    ::ll::TypedStorage<8, 8, ::ChunkSource&>                                mMainSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewSource& operator=(ChunkViewSource const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& pos) /*override*/;

    // vIndex: 4
    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Random& random) /*override*/;

    // vIndex: 20
    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;

    // vIndex: 7
    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    // vIndex: 24
    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const /*override*/;

    // vIndex: 31
    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk> lc) /*override*/;

    // vIndex: 0
    virtual ~ChunkViewSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkViewSource(::ChunkViewSource const& otherChunkViewSource);

    MCAPI ChunkViewSource(
        ::ChunkSource&                                              mainSource,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& gridArea,
        ::Bounds const&                                             bounds
    );

    MCAPI void clearEntryAtChunkPos(::ChunkPos const& chunkPos);

    MCAPI void move(
        ::Bounds const&               bounds,
        bool                          isCircle,
        ::ChunkSourceViewGenerateMode chunkViewGenerateMode,
        ::std::function<void(::buffer_span_mut<::std::shared_ptr<::LevelChunk>>, ::buffer_span<uint>)> add,
        float const*                                                                                   serverBuildRatio
    );

    MCAPI void move(
        ::BlockPos const&             blockMin,
        ::BlockPos const&             blockMax,
        bool                          isCircle,
        ::ChunkSourceViewGenerateMode chunkViewGenerateMode,
        ::std::function<void(::buffer_span_mut<::std::shared_ptr<::LevelChunk>>, ::buffer_span<uint>)> add,
        float const*                                                                                   serverBuildRatio
    );

    MCAPI void move(
        ::BlockPos const&             center,
        int                           radius,
        bool                          isCircle,
        ::ChunkSourceViewGenerateMode chunkViewGenerateMode,
        ::std::function<void(::buffer_span_mut<::std::shared_ptr<::LevelChunk>>, ::buffer_span<uint>)> add,
        float const*                                                                                   serverBuildRatio
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkViewSource const& otherChunkViewSource);

    MCAPI void* $ctor(
        ::ChunkSource&                                              mainSource,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& gridArea,
        ::Bounds const&                                             bounds
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
    MCAPI ::std::shared_ptr<::LevelChunk> $getExistingChunk(::ChunkPos const& pos);

    MCAPI ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Random& random);

    MCAPI void $acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr);

    MCFOLD ::std::shared_ptr<::LevelChunk>
    $createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI bool $isWithinWorldLimit(::ChunkPos const& cp) const;

    MCAPI void $setLevelChunk(::std::shared_ptr<::LevelChunk> lc);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
