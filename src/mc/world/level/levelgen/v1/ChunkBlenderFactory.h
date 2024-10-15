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
    MCAPI explicit ChunkBlenderFactory(class Dimension& dimension);

    MCAPI std::shared_ptr<class ChunkBlender> getOrCreateChunkBlender(class ChunkPos const& lcPosition);

    MCAPI bool const isClientSide() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class ChunkBlender> _createChunkBlendingAttenuator(class ChunkPos const& lcPosition) const;

    MCAPI std::vector<std::array<struct ChunkBlenderUtil::AttenuationData, 4>> _finalizeChunkAttenuationData(
        std::vector<std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>> const&
            chunkIntermediateAttenuationData
    ) const;

    MCAPI void _processDensityColumn(
        std::vector<std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>>&
                                  chunkIntermediateAttenuationData,
        class BlendingData const& blendingData,
        float                     weight,
        std::pair<int, int>       oldChunkCell,
        std::pair<int, int>       newChunkCell,
        bool                      overwriteOldValue
    ) const;

    MCAPI void _updateIntermediateAttenuationData(
        std::vector<std::array<struct ChunkBlenderFactory::IntermediateAttenuationData, 4>>&
                                  chunkIntermediateAttenuationData,
        class ChunkPos const&     oldChunkPosition,
        class ChunkPos const&     newChunkPosition,
        class BlendingData const& blendingData,
        bool                      adjacentChunk
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Dimension& dimension);

    // NOLINTEND
};
