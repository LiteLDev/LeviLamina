#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
struct BrightnessPair;
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline::SmoothLightBitHelpers { struct CachedData; }
namespace ClientBlockPipeline::SmoothLightBitHelpers { struct SampledLightValues; }
// clang-format on

namespace ClientBlockPipeline::SmoothLightBitHelpers {
// functions
// NOLINTBEGIN
MCAPI ::ClientBlockPipeline::SmoothLightBitHelpers::SampledLightValues _computeLightValueWeightedAverage(
    ::ClientBlockPipeline::SmoothLightBitHelpers::CachedData const& cache,
    ::BlockPos const&                                               bottomLeft,
    ::Vec3 const&                                                   position,
    ::Vec3 const&                                                   normal,
    bool                                                            calculate_ao
);

MCAPI ::ClientBlockPipeline::SmoothLightBitHelpers::CachedData _generateCache(
    ::BlockPos const&                                          bottomLeft,
    ::ClientBlockPipeline::BlockVolumeArea const&              area,
    ::ClientBlockPipeline::ArrayCache<::BrightnessPair> const& lightCache,
    ::ClientBlockPipeline::ArrayCache<float> const&            aoCache,
    ::ClientBlockPipeline::BitsetCache const&                  opaqueFullBlockCache
);
// NOLINTEND

} // namespace ClientBlockPipeline::SmoothLightBitHelpers
