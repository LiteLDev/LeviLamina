#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class AtlasItemManager;
class BlockCullingGroup;
class GeometryGroup;
class TextureShiftManager;
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { class SchematicsRepository; }
// clang-format on

struct BlockComponentFinalizerForRendererContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::SchematicsRepository&> mSchematicsRepo;
    ::ll::TypedStorage<8, 8, ::GeometryGroup&>                             mGeometryGroup;
    ::ll::TypedStorage<8, 8, ::BlockCullingGroup&>                         mBlockCullingGroup;
    ::ll::TypedStorage<8, 8, ::AtlasItemManager const&>                    mAtlasItemManager;
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::MaterialRepository&>   mMaterialRepository;
    ::ll::TypedStorage<8, 8, ::Experiments const&>                         mExperiments;
    ::ll::TypedStorage<8, 8, ::TextureShiftManager const&>                 mTextureShiftManager;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentFinalizerForRendererContext& operator=(BlockComponentFinalizerForRendererContext const&);
    BlockComponentFinalizerForRendererContext(BlockComponentFinalizerForRendererContext const&);
    BlockComponentFinalizerForRendererContext();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI BlockComponentFinalizerForRendererContext(
        ::ClientBlockPipeline::SchematicsRepository& schematicsRepo,
        ::GeometryGroup&                             geometryGroup,
        ::BlockCullingGroup&                         blockCullingGroup,
        ::AtlasItemManager const&                    atlasItemManager,
        ::ClientBlockPipeline::MaterialRepository&   materialRepository,
        ::Experiments const&                         experiments,
        ::TextureShiftManager const&                 textureShiftManager
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::ClientBlockPipeline::SchematicsRepository& schematicsRepo,
        ::GeometryGroup&                             geometryGroup,
        ::BlockCullingGroup&                         blockCullingGroup,
        ::AtlasItemManager const&                    atlasItemManager,
        ::ClientBlockPipeline::MaterialRepository&   materialRepository,
        ::Experiments const&                         experiments,
        ::TextureShiftManager const&                 textureShiftManager
    );
#endif
    // NOLINTEND
};
