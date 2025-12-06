#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
struct AtlasItemManager;
struct BlockCullingGroup;
struct GeometryGroup;
namespace ClientBlockPipeline { struct MaterialRepository; }
namespace ClientBlockPipeline { struct SchematicsRepository; }
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
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentFinalizerForRendererContext& operator=(BlockComponentFinalizerForRendererContext const&);
    BlockComponentFinalizerForRendererContext(BlockComponentFinalizerForRendererContext const&);
    BlockComponentFinalizerForRendererContext();
};
