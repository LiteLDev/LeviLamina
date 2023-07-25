#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ChunkBlenderUtil { struct AttenuationData; }
// clang-format on

class ChunkBlenderFactory {
public:
    // ChunkBlenderFactory inner types declare
    // clang-format off
    struct IntermediateAttenuationData;
    // clang-format on

    // ChunkBlenderFactory inner types define
    struct IntermediateAttenuationData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLENDERFACTORY_INTERMEDIATEATTENUATIONDATA
    public:
        IntermediateAttenuationData& operator=(IntermediateAttenuationData const&) = delete;
        IntermediateAttenuationData(IntermediateAttenuationData const&)            = delete;
        IntermediateAttenuationData()                                              = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLENDERFACTORY
public:
    ChunkBlenderFactory& operator=(ChunkBlenderFactory const&) = delete;
    ChunkBlenderFactory(ChunkBlenderFactory const&)            = delete;
    ChunkBlenderFactory()                                      = delete;
#endif

public:
    /**
     * @symbol ??0ChunkBlenderFactory\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI ChunkBlenderFactory(class Dimension&);
    /**
     * @symbol
     * ?getOrCreateChunkBlender\@ChunkBlenderFactory\@\@QEAA?AV?$shared_ptr\@VChunkBlender\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ChunkBlender> getOrCreateChunkBlender(class ChunkPos const&);
    /**
     * @symbol ?isClientSide\@ChunkBlenderFactory\@\@QEBA?B_NXZ
     */
    MCAPI bool const isClientSide() const;

    // private:
    /**
     * @symbol
     * ?_createChunkBlendingAttenuator\@ChunkBlenderFactory\@\@AEBA?AV?$shared_ptr\@VChunkBlender\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ChunkBlender> _createChunkBlendingAttenuator(class ChunkPos const&) const;
    /**
     * @symbol
     * ?_finalizeChunkAttenuationData\@ChunkBlenderFactory\@\@AEBA?AV?$vector\@V?$array\@UAttenuationData\@ChunkBlenderUtil\@\@$03\@std\@\@V?$allocator\@V?$array\@UAttenuationData\@ChunkBlenderUtil\@\@$03\@std\@\@\@2\@\@std\@\@AEBV?$vector\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@V?$allocator\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::vector<class std::array<struct ChunkBlenderUtil::AttenuationData, 4>>
          _finalizeChunkAttenuationData(std::vector<
                                  class std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>> const&)
        const;
    /**
     * @symbol
     * ?_processDensityColumn\@ChunkBlenderFactory\@\@AEBAXAEAV?$vector\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@V?$allocator\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@\@2\@\@std\@\@AEBVBlendingData\@\@MU?$pair\@HH\@3\@2_N\@Z
     */
    MCAPI void _processDensityColumn(
        std::vector<class std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>>&,
        class BlendingData const&,
        float,
        struct std::pair<int, int>,
        struct std::pair<int, int>,
        bool
    ) const;
    /**
     * @symbol
     * ?_updateIntermediateAttenuationData\@ChunkBlenderFactory\@\@AEBAXAEAV?$vector\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@V?$allocator\@V?$array\@UIntermediateAttenuationData\@ChunkBlenderFactory\@\@$03\@std\@\@\@2\@\@std\@\@AEBVChunkPos\@\@1AEBVBlendingData\@\@_N\@Z
     */
    MCAPI void _updateIntermediateAttenuationData(
        std::vector<class std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>>&,
        class ChunkPos const&,
        class ChunkPos const&,
        class BlendingData const&,
        bool
    ) const;

private:
};
