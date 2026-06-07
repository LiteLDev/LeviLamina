#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class LevelChunk;
class LevelChunkBlockActorAccessToken;
class Random;
struct Bounds;
struct LevelChunkFinalDeleter;
// clang-format on

class ChunkViewSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ChunkSource::LoadMode>                       mParentLoadMode;
    ::ll::TypedStorage<8, 304, ::GridArea<::std::shared_ptr<::LevelChunk>>> mArea;
    ::ll::TypedStorage<8, 8, ::ChunkSource&>                                mMainSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewSource& operator=(ChunkViewSource const&);
    ChunkViewSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::LevelChunk> getExistingChunk(::ChunkPos const& pos) /*override*/;

    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Random& random) /*override*/;

    virtual void acquireDiscarded(::std::unique_ptr<::LevelChunk, ::LevelChunkFinalDeleter> ptr) /*override*/;

    virtual ::std::shared_ptr<::LevelChunk>
    createNewChunk(::ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly) /*override*/;

    virtual bool isWithinWorldLimit(::ChunkPos const& cp) const /*override*/;

    virtual void setLevelChunk(::std::shared_ptr<::LevelChunk> lc) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkViewSource(::ChunkViewSource const& otherChunkViewSource);

    MCAPI ChunkViewSource(::ChunkSource& mainSource, ::ChunkSource::LoadMode parentLoadMode);

    MCAPI ChunkViewSource(
        ::ChunkSource&                                              mainSource,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& gridArea,
        ::Bounds const&                                             bounds
    );

#ifdef LL_PLAT_C
    MCAPI void addChunkPosForProcessingNeighbours(::std::shared_ptr<::LevelChunk> lc);
#endif

    MCAPI void clear();

    MCAPI void clearEntryAtChunkPos(::ChunkPos const& chunkPos);

    MCFOLD ::std::vector<::LevelChunkBlockActorAccessToken> enableBlockEntityAccess();

    MCFOLD ::GridArea<::std::shared_ptr<::LevelChunk>>& getArea();

#ifdef LL_PLAT_C
    MCAPI ::DimensionType getDimensionId() const;
#endif

    MCAPI void move(
        ::Bounds const&                                                     bounds,
        bool                                                                isCircle,
        ::ChunkSourceViewGenerateMode                                       chunkViewGenerateMode,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)> add,
        float const*                                                        serverBuildRatio
    );

    MCAPI void move(
        ::BlockPos const&                                                   blockMin,
        ::BlockPos const&                                                   blockMax,
        bool                                                                isCircle,
        ::ChunkSourceViewGenerateMode                                       chunkViewGenerateMode,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)> add,
        float const*                                                        serverBuildRatio
    );

    MCAPI void move(
        ::BlockPos const&                                                   center,
        int                                                                 radius,
        bool                                                                isCircle,
        ::ChunkSourceViewGenerateMode                                       chunkViewGenerateMode,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)> add,
        float const*                                                        serverBuildRatio
    );

    MCAPI void rebuildSpecificArea(
        ::Bounds const& bounds,
        bool,
        ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ChunkSourceViewGenerateMode getGenerateMode(bool isClientSide, bool isClientSideGenerationEnabled);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkViewSource const& otherChunkViewSource);

    MCAPI void* $ctor(::ChunkSource& mainSource, ::ChunkSource::LoadMode parentLoadMode);

    MCAPI void* $ctor(
        ::ChunkSource&                                              mainSource,
        ::LevelChunkGridAreaElement<::std::weak_ptr<::LevelChunk>>& gridArea,
        ::Bounds const&                                             bounds
    );
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
