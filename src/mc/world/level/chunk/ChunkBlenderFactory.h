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
    public:
        // prevent constructor by default
        IntermediateAttenuationData& operator=(IntermediateAttenuationData const&);
        IntermediateAttenuationData(IntermediateAttenuationData const&);
        IntermediateAttenuationData();
    };

public:
    // prevent constructor by default
    ChunkBlenderFactory& operator=(ChunkBlenderFactory const&);
    ChunkBlenderFactory(ChunkBlenderFactory const&);
    ChunkBlenderFactory();

public:
    // NOLINTBEGIN
    // symbol: ?getOrCreateChunkBlender@ChunkBlenderFactory@@QEAA?AV?$shared_ptr@VChunkBlender@@@std@@AEBVChunkPos@@@Z
    MCAPI std::shared_ptr<class ChunkBlender> getOrCreateChunkBlender(class ChunkPos const& lcPosition);

    // symbol: ?isClientSide@ChunkBlenderFactory@@QEBA?B_NXZ
    MCAPI bool const isClientSide() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createChunkBlendingAttenuator@ChunkBlenderFactory@@AEBA?AV?$shared_ptr@VChunkBlender@@@std@@AEBVChunkPos@@@Z
    MCAPI std::shared_ptr<class ChunkBlender> _createChunkBlendingAttenuator(class ChunkPos const& lcPosition) const;

    // symbol:
    // ?_finalizeChunkAttenuationData@ChunkBlenderFactory@@AEBA?AV?$vector@V?$array@UAttenuationData@ChunkBlenderUtil@@$03@std@@V?$allocator@V?$array@UAttenuationData@ChunkBlenderUtil@@$03@std@@@2@@std@@AEBV?$vector@V?$array@UIntermediateAttenuationData@ChunkBlenderFactory@@$03@std@@V?$allocator@V?$array@UIntermediateAttenuationData@ChunkBlenderFactory@@$03@std@@@2@@3@@Z
    MCAPI std::vector<std::array<struct ChunkBlenderUtil::AttenuationData, 4>>
          _finalizeChunkAttenuationData(std::vector<
                                        std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>> const&) const;

    // symbol:
    // ?_processDensityColumn@ChunkBlenderFactory@@AEBAXAEAV?$vector@V?$array@UIntermediateAttenuationData@ChunkBlenderFactory@@$03@std@@V?$allocator@V?$array@UIntermediateAttenuationData@ChunkBlenderFactory@@$03@std@@@2@@std@@AEBVBlendingData@@MU?$pair@HH@3@2_N@Z
    MCAPI void _processDensityColumn(
        std::vector<std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>>&,
        class BlendingData const&,
        float weight,
        std::pair<int, int>,
        std::pair<int, int>,
        bool
    ) const;

    // symbol:
    // ?_updateIntermediateAttenuationData@ChunkBlenderFactory@@AEBAXAEAV?$vector@V?$array@UIntermediateAttenuationData@ChunkBlenderFactory@@$03@std@@V?$allocator@V?$array@UIntermediateAttenuationData@ChunkBlenderFactory@@$03@std@@@2@@std@@AEBVChunkPos@@1AEBVBlendingData@@_N@Z
    MCAPI void _updateIntermediateAttenuationData(
        std::vector<std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>>&,
        class ChunkPos const&,
        class ChunkPos const&,
        class BlendingData const&,
        bool
    ) const;

    // NOLINTEND
};
