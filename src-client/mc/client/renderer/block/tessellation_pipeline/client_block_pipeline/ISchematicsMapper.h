#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Matrix;
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline { struct CustomGeometryBlock; }
namespace ClientBlockPipeline { struct CustomGeometryBox; }
namespace ClientBlockPipeline { struct CustomGeometryFace; }
// clang-format on

namespace ClientBlockPipeline {

struct ISchematicsMapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISchematicsMapper() = default;

    virtual void execute(
        ::std::vector<::ClientBlockPipeline::CustomGeometryBox>&  customBoxes,
        ::std::vector<::ClientBlockPipeline::CustomGeometryFace>& customFaces,
        ::ClientBlockPipeline::BlockVolumeArea const&             area,
        ::ClientBlockPipeline::BitsetCache const&                 opaqueFullBlockCache,
        ::ClientBlockPipeline::ArrayCache<::Block const*> const*  cullingBlocksCache,
        ::ClientBlockPipeline::CustomGeometryBlock const&         customBlock,
        ::ClientBlockPipeline::BlockLookupData const&             blockData,
        ::BlockPos const&                                         relativePos,
        ::Matrix const&                                           blockPosTransform
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ClientBlockPipeline
