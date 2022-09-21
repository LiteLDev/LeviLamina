/**
 * @file  MC/SeamlessChunkBlendingAttenuatorFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SeamlessChunkBlendingAttenuatorFactory.
 *
 */
class SeamlessChunkBlendingAttenuatorFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAMLESSCHUNKBLENDINGATTENUATORFACTORY
public:
    class SeamlessChunkBlendingAttenuatorFactory& operator=(class SeamlessChunkBlendingAttenuatorFactory const &) = delete;
    SeamlessChunkBlendingAttenuatorFactory(class SeamlessChunkBlendingAttenuatorFactory const &) = delete;
    SeamlessChunkBlendingAttenuatorFactory() = delete;
#endif

public:
    /**
     * @hash   432359231
     * @symbol ??0SeamlessChunkBlendingAttenuatorFactory@@QEAA@AEAVDimension@@@Z
     */
    MCAPI SeamlessChunkBlendingAttenuatorFactory(class Dimension &);
    /**
     * @hash   1103344222
     * @symbol ?getOrCreateAttenuator@SeamlessChunkBlendingAttenuatorFactory@@QEAA?AV?$shared_ptr@VSeamlessChunkBlendingAttenuator@@@std@@AEBVChunkPos@@@Z
     */
    MCAPI class std::shared_ptr<class SeamlessChunkBlendingAttenuator> getOrCreateAttenuator(class ChunkPos const &);
    /**
     * @hash   -799708740
     * @symbol ?isClientSide@SeamlessChunkBlendingAttenuatorFactory@@QEBA?B_NXZ
     */
    MCAPI bool const isClientSide() const;

//private:
    /**
     * @hash   -141878771
     * @symbol ?_createChunkBlendingAttenuator@SeamlessChunkBlendingAttenuatorFactory@@AEBA?AV?$shared_ptr@VSeamlessChunkBlendingAttenuator@@@std@@AEBVChunkPos@@@Z
     */
    MCAPI class std::shared_ptr<class SeamlessChunkBlendingAttenuator> _createChunkBlendingAttenuator(class ChunkPos const &) const;
    /**
     * @hash   470002541
     * @symbol ?_finalizeChunkAttenuationData@SeamlessChunkBlendingAttenuatorFactory@@AEBA?AV?$vector@V?$array@UAttenuationData@SeamlessChunkBlendingAttenuatorUtil@@$03@std@@V?$allocator@V?$array@UAttenuationData@SeamlessChunkBlendingAttenuatorUtil@@$03@std@@@2@@std@@AEBV?$vector@V?$array@UIntermediateAttenuationData@SeamlessChunkBlendingAttenuatorFactory@@$03@std@@V?$allocator@V?$array@UIntermediateAttenuationData@SeamlessChunkBlendingAttenuatorFactory@@$03@std@@@2@@3@@Z
     */
    MCAPI std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorUtil::AttenuationData, 4>> _finalizeChunkAttenuationData(std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorFactory::IntermediateAttenuationData, 4>> const &) const;
    /**
     * @hash   852450801
     * @symbol ?_processDensityColumn@SeamlessChunkBlendingAttenuatorFactory@@AEBAXAEAV?$vector@V?$array@UIntermediateAttenuationData@SeamlessChunkBlendingAttenuatorFactory@@$03@std@@V?$allocator@V?$array@UIntermediateAttenuationData@SeamlessChunkBlendingAttenuatorFactory@@$03@std@@@2@@std@@AEBVBlendingData@@MU?$pair@HH@3@2_N@Z
     */
    MCAPI void _processDensityColumn(std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorFactory::IntermediateAttenuationData, 4>> &, class BlendingData const &, float, struct std::pair<int, int>, struct std::pair<int, int>, bool) const;
    /**
     * @hash   -1203421970
     * @symbol ?_updateIntermediateAttenuationData@SeamlessChunkBlendingAttenuatorFactory@@AEBAXAEAV?$vector@V?$array@UIntermediateAttenuationData@SeamlessChunkBlendingAttenuatorFactory@@$03@std@@V?$allocator@V?$array@UIntermediateAttenuationData@SeamlessChunkBlendingAttenuatorFactory@@$03@std@@@2@@std@@AEBVChunkPos@@1AEBVBlendingData@@_N@Z
     */
    MCAPI void _updateIntermediateAttenuationData(std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorFactory::IntermediateAttenuationData, 4>> &, class ChunkPos const &, class ChunkPos const &, class BlendingData const &, bool) const;

private:

};