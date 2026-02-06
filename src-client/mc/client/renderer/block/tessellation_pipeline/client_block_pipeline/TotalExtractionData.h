#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"

// auto generated forward declare list
// clang-format off
class Block;
struct BrightnessPair;
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct BlockLookupId; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlock; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlockIds; }
namespace ClientBlockPipeline { struct CustomGeometryBlock; }
namespace ClientBlockPipeline { struct PotentiallyFaceCulledBlock; }
// clang-format on

namespace ClientBlockPipeline {

struct TotalExtractionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::Block const*, ::ClientBlockPipeline::BlockLookupId>>
        blockLookupIds;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::ClientBlockPipeline::VectorCache<
            ::ClientBlockPipeline::BlockLookupData,
            ::ClientBlockPipeline::BlockLookupId>>>
        blockLookup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::ClientBlockPipeline::CompleteOpaqueFullBlock>>>
                                                                                                    unitCubes;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::CompleteOpaqueFullBlockIds>> unitCubeBlockIds;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::ClientBlockPipeline::PotentiallyFaceCulledBlock>>>
        potentiallyFaceCulledBlocks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::ClientBlockPipeline::CustomGeometryBlock>>>
                                                                                     customGeometry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::BitsetCache>> opaqueFullBlockCache;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::ArrayCache<::BrightnessPair>>> lightCache;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::ArrayCache<float>>>            aoCache;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::ArrayCache<::Block const*>>> cullingBlocksCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TotalExtractionData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
