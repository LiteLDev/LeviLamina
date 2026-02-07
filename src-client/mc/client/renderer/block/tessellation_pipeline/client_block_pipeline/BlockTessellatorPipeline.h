#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/VisualReference.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/NamedMeshStreams.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class ChunkViewSource;
struct TessellatorQuadInfo;
namespace ClientBlockPipeline { class Description; }
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { struct Transforms; }
namespace mce { class MeshData; }
// clang-format on

namespace ClientBlockPipeline {

class BlockTessellatorPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ClientBlockPipeline::NamedMeshStreams> mMeshStreams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _run(::ClientBlockPipeline::Description const& description, ::ClientBlockPipeline::Inputs& inputs);

    MCAPI void mergeStreams(
        ::mce::MeshData&                            outputMesh,
        ::std::vector<::TessellatorQuadInfo>&       outputFaceInfo,
        ::mce::MeshData const&                      inputMesh,
        ::std::vector<::TessellatorQuadInfo> const& inputFaceInfo
    ) const;

    MCAPI ~BlockTessellatorPipeline();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ClientBlockPipeline::Inputs setupFullChunkInputs(
        ::AABB&&                            aabb,
        ::ClientBlockPipeline::Transforms&& transforms,
        ::ChunkViewSource&                  source,
        bool                                inUI
    );

    MCAPI static ::ClientBlockPipeline::Inputs setupSingleBlockInWorldInput(
        ::Block const&                      block,
        ::AABB&&                            aabb,
        ::ClientBlockPipeline::Transforms&& transforms,
        ::ChunkViewSource&                  source
    );

    MCAPI static ::ClientBlockPipeline::Inputs setupSingleBlockInputs(
        ::Block const&                         block,
        ::ClientBlockPipeline::Transforms&&    transforms,
        bool                                   shouldCheckIgnoreBlockTransforms,
        ::ClientBlockPipeline::VisualReference visualReference
    );

    MCAPI static ::ClientBlockPipeline::Inputs
    setupStandardInputs(::AABB&& aabb, ::ClientBlockPipeline::Transforms&& transforms, ::ChunkViewSource& source);

    MCAPI static bool useNewTessellation(::Block const& block, bool onlyNew);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
