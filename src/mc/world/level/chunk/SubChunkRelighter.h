#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkRelighter {
public:
    // prevent constructor by default
    SubChunkRelighter& operator=(SubChunkRelighter const&);
    SubChunkRelighter(SubChunkRelighter const&);
    SubChunkRelighter();

public:
    // NOLINTBEGIN
    MCAPI SubChunkRelighter(
        class IBlockSource&   source,
        uint64                centerSubChunkIndex,
        class ChunkPos const& centerChunkPos,
        bool                  originalLighting,
        bool                  useFullyDarkSubchunk
    );

    MCAPI void _checkEdgeForSubtractiveBlockLightProcessing(struct SubChunkLightIndex const& coordIndex);

    MCAPI void _checkEdgeForSubtractiveSkyLightProcessing(struct SubChunkLightIndex const& coordIndex);

    MCAPI struct SubChunk* _getAbsorption(struct SubChunkLightIndex coordIndex, uchar& absorption) const;

    MCAPI void _propagateBlockLight();

    MCAPI void _propagateBlockLight(struct SubChunkLightIndex coordIndex, uchar brightness);

    MCAPI void _propagateSkyLight();

    MCAPI void _propagateSkyLight(struct SubChunkLightIndex coordIndex, uchar brightness);

    MCAPI void _propagateSubtractiveBlockLight();

    MCAPI void _propagateSubtractiveBlockLight(struct SubChunkLightIndex coordIndex, uchar effectiveBrightness);

    MCAPI void _propagateSubtractiveSkyLight();

    MCAPI void _propagateSubtractiveSkyLight(struct SubChunkLightIndex coordIndex, uchar effectiveBrightness);

    MCAPI void _setLightHelper(
        struct SubChunkLightIndex coordIndex,
        struct Brightness         oldBrightness,
        struct Brightness         newBrightness,
        struct Brightness         oldAbsorption,
        struct Brightness         newAbsorption,
        uint                      lightType,
        uint                      subChunkIndex
    );

    MCAPI void _setPropagatedBlockLightValue(struct SubChunkLightIndex coordIndex, uchar brightness);

    MCAPI void _setPropagatedSkyLightValue(struct SubChunkLightIndex coordIndex, uchar brightness);

    MCAPI void _setSkyLight(
        struct SubChunkLightIndex coordIndex,
        struct Brightness         oldBrightness,
        struct Brightness         newBrightness,
        struct Brightness         oldAbsorption,
        struct Brightness         newAbsorption
    );

    MCAPI void relightSubChunk(
        class LevelChunk const&                        levelChunk,
        std::vector<struct SubChunkLightUpdate> const& alteredBlockList,
        std::vector<class BlockPos>&                   brightnessChangedList
    );

    MCAPI void setBlockLight(
        class Pos const&  pos,
        struct Brightness oldBrightness,
        struct Brightness newBrightness,
        struct Brightness oldAbsorption,
        struct Brightness newAbsorption
    );

    MCAPI void setSkyLight(
        class Pos const&  pos,
        struct Brightness oldBrightness,
        struct Brightness newBrightness,
        struct Brightness oldAbsorption,
        struct Brightness newAbsorption
    );

    MCAPI ~SubChunkRelighter();

    MCAPI static std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();

    MCAPI static std::bitset<196608> computeOuterEdgeOfComputationBits();

    MCAPI static void initializeStatics();

    MCAPI static void shutdownStatics();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct SubChunk* _dirtySubChunk(struct SubChunkLightIndex coordIndex, uint& subChunkIndex);

    MCAPI struct SubChunk*
    _getBlock(struct SubChunkLightIndex coordIndex, class Block const*& block, class Block const*& extraBlock) const;

    MCAPI uchar _getLight(struct SubChunkLightIndex index);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class IBlockSource&   source,
        uint64                centerSubChunkIndex,
        class ChunkPos const& centerChunkPos,
        bool                  originalLighting,
        bool                  useFullyDarkSubchunk
    );

    MCAPI void dtor$();

    MCAPI static std::bitset<196608>& mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();

    MCAPI static std::bitset<196608>& mOuterEdgeOfComputationBits();

    MCAPI static class SpinLock& sDarkSpinLock();

    MCAPI static std::unique_ptr<struct SubChunk>& sFullyDarkSubChunk();

    MCAPI static std::unique_ptr<struct SubChunk>& sFullyLitSubChunk();

    MCAPI static class SpinLock& sLitSpinLock();

    // NOLINTEND
};
