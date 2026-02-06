#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct BiomeTintCache;
namespace ClientBlockPipeline { class Description; }
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { class MaterialRepository; }
namespace VanillaBlockTessellation { struct Config; }
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

MCAPI ::VanillaBlockTessellation::Config createCrackPipelineConfig(
    ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository>      materialRepository,
    ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const> materialOverride
);

MCAPI ::VanillaBlockTessellation::Config
createHighlightPipelineConfig(::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> materialRepository);

MCAPI ::std::unique_ptr<::ClientBlockPipeline::Description>
createPipelineFromConfig(::VanillaBlockTessellation::Config&& config);

MCAPI ::VanillaBlockTessellation::Config createWorldPipelineConfig(
    ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> materialRepository,
    ::DimensionType const&                                       dimension,
    ::BakedBlockLightType                                        lightingType,
    ::BiomeTintCache*                                            biomeTintCache
);
// NOLINTEND

} // namespace VanillaBlockTessellation
