#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/VisualReference.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/BlockLookupId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CacheId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/PackedPosition.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
struct BiomeTintCache;
namespace ClientBlockPipeline { class ITintResolver; }
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlock; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlockIds; }
namespace ClientBlockPipeline { struct CustomGeometryBlock; }
namespace ClientBlockPipeline { struct PipelineError; }
namespace ClientBlockPipeline { struct PotentiallyFaceCulledBlock; }
namespace ClientBlockPipeline::WorldView { class Interface; }
// clang-format on

namespace ClientBlockPipeline {

class WorldExtractorStep : public ::ClientBlockPipeline::Step {
public:
    // WorldExtractorStep inner types declare
    // clang-format off
    struct BlockIterationData;
    struct ExtractionData;
    struct BlockExtractionData;
    // clang-format on

    // WorldExtractorStep inner types define
    struct BlockIterationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>                           relativePos;
        ::ll::TypedStorage<1, 3, ::ClientBlockPipeline::PackedPosition> packedPositon;
        ::ll::TypedStorage<2, 2, ::ClientBlockPipeline::CacheId>        index;
        // NOLINTEND
    };

    struct ExtractionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unordered_map<::Block const*, ::ClientBlockPipeline::BlockLookupId>&>
            blockLookupIds;
        ::ll::TypedStorage<
            8,
            8,
            ::ClientBlockPipeline::
                VectorCache<::ClientBlockPipeline::BlockLookupData, ::ClientBlockPipeline::BlockLookupId>&>
                                                                                                 blockLookupCache;
        ::ll::TypedStorage<8, 8, ::std::vector<::ClientBlockPipeline::CompleteOpaqueFullBlock>&> unitCubes;
        ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::CompleteOpaqueFullBlockIds&>             unitCubeBlocksIds;
        ::ll::TypedStorage<8, 8, ::std::vector<::ClientBlockPipeline::CustomGeometryBlock>&>     customGeometry;
        ::ll::TypedStorage<8, 8, ::std::vector<::ClientBlockPipeline::PotentiallyFaceCulledBlock>*>
                                                                      potentiallyFaceCulledBlocks;
        ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::BitsetCache*> opaqueFullBlockCache;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExtractionData& operator=(ExtractionData const&);
        ExtractionData(ExtractionData const&);
        ExtractionData();
    };

    struct BlockExtractionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::ClientBlockPipeline::BlockLookupId>    mId;
        ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::BlockLookupData&> mData;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockExtractionData& operator=(BlockExtractionData const&);
        BlockExtractionData(BlockExtractionData const&);
        BlockExtractionData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>              mShouldGenerateFaceCulling;
    ::ll::TypedStorage<8, 8, ::BiomeTintCache*> mBiomeTintCache;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const& inputs) const /*override*/;

    virtual ~WorldExtractorStep() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ClientBlockPipeline::WorldExtractorStep::BlockExtractionData _getBlockExtractionData(
        ::ClientBlockPipeline::WorldExtractorStep::ExtractionData& extraction,
        ::Block const&                                             block,
        bool                                                       checkIgnoreBlockTransforms,
        ::ClientBlockPipeline::VisualReference                     visualReference
    );

    MCAPI static ::std::optional<::ClientBlockPipeline::PipelineError> extractCustomBlock(
        ::Block const&                                                       block,
        ::ClientBlockPipeline::WorldExtractorStep::BlockIterationData const& iterData,
        ::ClientBlockPipeline::WorldExtractorStep::ExtractionData&           extraction,
        ::ClientBlockPipeline::WorldView::Interface*                         worldView,
        bool                                                                 shouldGenerateFaceCulling,
        ::ClientBlockPipeline::VisualReference                               visualReference,
        ::ClientBlockPipeline::ITintResolver&                                tintResolver,
        ::BiomeTintCache*                                                    biomeTintCache,
        ::BlockPos const&                                                    chunkMinPos,
        bool                                                                 checkIgnoreBlockTransforms
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ClientBlockPipeline::StepResult $run(::ClientBlockPipeline::Inputs const& inputs) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
