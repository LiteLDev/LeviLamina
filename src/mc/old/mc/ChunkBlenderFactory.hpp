/**
 * @file  ChunkBlenderFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ChunkBlenderFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLENDERFACTORY
public:
    class ChunkBlenderFactory& operator=(class ChunkBlenderFactory const &) = delete;
    ChunkBlenderFactory(class ChunkBlenderFactory const &) = delete;
    ChunkBlenderFactory() = delete;
#endif

public:
    /**
     * @symbol  ??0ChunkBlenderFactory\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI ChunkBlenderFactory(class Dimension &);
    /**
     * @symbol  ?getOrCreateChunkBlender\@ChunkBlenderFactory\@\@QEAA?AV?$shared_ptr\@VChunkBlender\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ChunkBlender> getOrCreateChunkBlender(class ChunkPos const &);
    /**
     * @symbol  ?isClientSide\@ChunkBlenderFactory\@\@QEBA?B_NXZ
     */
    MCAPI bool const isClientSide() const;

//private:
    /**
     * @symbol  ?_createChunkBlendingAttenuator\@ChunkBlenderFactory\@\@AEBA?AV?$shared_ptr\@VChunkBlender\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ChunkBlender> _createChunkBlendingAttenuator(class ChunkPos const &) const;
    /**
     * @symbol  ?_finalizeChunkAttenuationData\@ChunkBlenderFactory\@\@AEBA?AV?$vector\@V?$array\@UAttenuationData\@ChunkBlenderUtil\@\@$03\@std\@\@V?$allocator\@V?$array\@UAttenuationData\@ChunkBlenderUtil\@\@$03\@std\@\@\@2\@\@std\@\@AEBV?$vector\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@V?$allocator\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::vector<class std::array<struct ChunkBlenderUtil::AttenuationData, 4>> _finalizeChunkAttenuationData(std::vector<class std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>> const &) const;
    /**
     * @symbol  ?_processDensityColumn\@ChunkBlenderFactory\@\@AEBAXAEAV?$vector\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@V?$allocator\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@\@2\@\@std\@\@AEBVBlendingData\@\@MU?$pair\@HH\@3\@2_N\@Z
     */
    MCAPI void _processDensityColumn(std::vector<class std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>> &, class BlendingData const &, float, struct std::pair<int, int>, struct std::pair<int, int>, bool) const;
    /**
     * @symbol  ?_updateIntermediateAttenuationData\@ChunkBlenderFactory\@\@AEBAXAEAV?$vector\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@V?$allocator\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@\@2\@\@std\@\@AEBVChunkPos\@\@1AEBVBlendingData\@\@_N\@Z
     */
    MCAPI void _updateIntermediateAttenuationData(std::vector<class std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>> &, class ChunkPos const &, class ChunkPos const &, class BlendingData const &, bool) const;

private:

};