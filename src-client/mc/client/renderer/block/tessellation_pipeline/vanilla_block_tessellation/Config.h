#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/vanilla_block_tessellation/PipelineType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
struct BiomeTintCache;
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { class MaterialRepository; }
// clang-format on

namespace VanillaBlockTessellation {

struct Config {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::VanillaBlockTessellation::PipelineType>                      mPipelineType;
    ::ll::TypedStorage<1, 1, bool>                                                          mGenerateNormals;
    ::ll::TypedStorage<1, 1, bool>                                                          mFaceDimming;
    ::ll::TypedStorage<1, 1, bool>                                                          mSmoothLighting;
    ::ll::TypedStorage<1, 1, bool>                                                          mFlatLighting;
    ::ll::TypedStorage<1, 1, bool>                                                          mShouldEmitColors;
    ::ll::TypedStorage<1, 1, bool>                                                          mEmitPBRTextures;
    ::ll::TypedStorage<1, 1, bool>                                                          mFaceCulling;
    ::ll::TypedStorage<4, 24, ::std::array<float, 6>>                                       mDimensionDimmingScalars;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository>> mMaterialRepository;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                                mRenderChunkPos;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const>> mOverrideMaterial;
    ::ll::TypedStorage<8, 8, ::BiomeTintCache*>                                                  mBiomeTintCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Config();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace VanillaBlockTessellation
