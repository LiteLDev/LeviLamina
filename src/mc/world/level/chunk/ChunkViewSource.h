#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/level/chunk/LevelChunkGridAreaElement.h"

class ChunkViewSource : public ::ChunkSource {
public:
    // prevent constructor by default
    ChunkViewSource& operator=(ChunkViewSource const&);
    ChunkViewSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkViewSource();

    // vIndex: 3
    virtual std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const& pos);

    // vIndex: 4
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Random& random);

    // vIndex: 7
    virtual std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    // vIndex: 19
    virtual void acquireDiscarded(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    // vIndex: 23
    virtual bool isWithinWorldLimit(class ChunkPos const& cp) const;

    // vIndex: 30
    virtual void setLevelChunk(std::shared_ptr<class LevelChunk> lc);

    MCAPI ChunkViewSource(class ChunkViewSource const& otherChunkViewSource);

    MCAPI ChunkViewSource(class ChunkSource& mainSource, ::ChunkSource::LoadMode parentLoadMode);

    MCAPI ChunkViewSource(
        class ChunkSource&                                                mainSource,
        class LevelChunkGridAreaElement<std::weak_ptr<class LevelChunk>>& gridArea,
        struct Bounds const&                                              bounds
    );

    MCAPI void clear();

    MCAPI void clearEntryAtChunkPos(class ChunkPos const& chunkPos);

    MCAPI std::vector<class LevelChunkBlockActorAccessToken> enableBlockEntityAccess();

    MCAPI class GridArea<std::shared_ptr<class LevelChunk>>& getArea();

    MCAPI void move(
        struct Bounds const&          bounds,
        bool                          isCircle,
        ::ChunkSourceViewGenerateMode chunkViewGenerateMode,
        std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add,
        float const* serverBuildRatio
    );

    MCAPI void move(
        class BlockPos const&         blockMin,
        class BlockPos const&         blockMax,
        bool                          isCircle,
        ::ChunkSourceViewGenerateMode chunkViewGenerateMode,
        std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add,
        float const* serverBuildRatio
    );

    MCAPI void move(
        class BlockPos const&         center,
        int                           radius,
        bool                          isCircle,
        ::ChunkSourceViewGenerateMode chunkViewGenerateMode,
        std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add,
        float const* serverBuildRatio
    );

    MCAPI void rebuildSpecificArea(
        struct Bounds const& bounds,
        bool,
        std::function<void(class buffer_span_mut<std::shared_ptr<class LevelChunk>>, class buffer_span<uint>)> add
    );

    MCAPI static ::ChunkSourceViewGenerateMode getGenerateMode(bool isClientSide, bool isClientSideGenerationEnabled);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void acquireDiscarded$(std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter> ptr);

    MCAPI std::shared_ptr<class LevelChunk>
          createNewChunk$(class ChunkPos const& cp, ::ChunkSource::LoadMode lm, bool readOnly);

    MCAPI std::shared_ptr<class LevelChunk> getExistingChunk$(class ChunkPos const& pos);

    MCAPI std::shared_ptr<class LevelChunk> getRandomChunk$(class Random& random);

    MCAPI bool isWithinWorldLimit$(class ChunkPos const& cp) const;

    MCAPI void setLevelChunk$(std::shared_ptr<class LevelChunk> lc);

    // NOLINTEND
};
