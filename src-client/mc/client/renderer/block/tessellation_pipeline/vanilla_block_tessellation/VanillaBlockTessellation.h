#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/VisualReference.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class BlockPos;
class BlockSource;
class Tessellator;
class Vec3;
struct DimensionType;
namespace ClientBlockPipeline { class Description; }
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { class TessellatorContext; }
namespace VanillaBlockTessellation { struct Config; }
namespace mce::framebuilder { struct FrameLightingModelCapabilities; }
// clang-format on

namespace VanillaBlockTessellation {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::ClientBlockPipeline::Description> _createMaterialOverridePipelineDescription(
    ::VanillaBlockTessellation::Config const&                         config,
    ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const> materialOverride
);

MCAPI ::std::unique_ptr<::ClientBlockPipeline::Description>
_createSingleBlockPipelineDescription(::VanillaBlockTessellation::Config const& config);

MCAPI ::std::unique_ptr<::ClientBlockPipeline::Description>
_createWorldPipelineDescription(::VanillaBlockTessellation::Config const& config);

MCAPI void _tessellateBlockWithPipeline(
    ::Tessellator&                               tessellator,
    ::Block const&                               block,
    ::VanillaBlockTessellation::Config&&         config,
    ::ClientBlockPipeline::VisualReference const visualReference,
    ::Vec3 const                                 postTransformOffset,
    ::BlockSource*                               region,
    ::BlockPos const&                            blockPos
);

MCAPI ::VanillaBlockTessellation::Config createCrackPipelineConfig(
    ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository>      materialRepository,
    ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const> materialOverride
);

MCAPI ::VanillaBlockTessellation::Config createWorldPipelineConfig(
    ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> materialRepository,
    ::DimensionType const&                                       dimension,
    ::BakedBlockLightType                                        lightingType,
    ::BiomeTintCache*                                            biomeTintCache,
    bool                                                         textureShiftsEnabled
);

MCAPI void tessellateBlockAsItem(
    ::ClientBlockPipeline::TessellatorContext const&           pipelineContext,
    ::Tessellator&                                             tessellator,
    ::Block const&                                             block,
    ::mce::framebuilder::FrameLightingModelCapabilities const& lightingModelCaps
);

MCAPI void tessellateBlockInWorld(
    ::ClientBlockPipeline::TessellatorContext const&           pipelineContext,
    ::Tessellator&                                             tessellator,
    ::Block const&                                             block,
    ::BlockSource&                                             region,
    ::BlockPos const&                                          blockPos,
    ::mce::framebuilder::FrameLightingModelCapabilities const& lightingModelCaps,
    ::Vec3 const&                                              postTransformOffset
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::Vec3 const& DEFAULT_POST_TRANSFORM_OFFSET();
// NOLINTEND

} // namespace VanillaBlockTessellation
