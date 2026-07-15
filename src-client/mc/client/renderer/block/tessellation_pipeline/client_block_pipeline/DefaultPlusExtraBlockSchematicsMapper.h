#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/ISchematicsMapper.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CustomGeometryBlock.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class BlockPos;
class Matrix;
namespace ClientBlockPipeline { class ITintResolver; }
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct BlockLookupId; }
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline { struct CustomGeometryBox; }
namespace ClientBlockPipeline { struct CustomGeometryFace; }
// clang-format on

namespace ClientBlockPipeline {

struct DefaultPlusExtraBlockSchematicsMapper : public ::ClientBlockPipeline::ISchematicsMapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mHasEmbeddedBlock;
    ::ll::TypedStorage<
        8,
        8,
        ::ClientBlockPipeline::
            VectorCache<::ClientBlockPipeline::BlockLookupData, ::ClientBlockPipeline::BlockLookupId>&>
                                                                          mBlockLookupCache;
    ::ll::TypedStorage<8, 56, ::ClientBlockPipeline::CustomGeometryBlock> mEmbeddedCustomBlock;
    ::ll::TypedStorage<8, 8, ::Matrix const&>                             mTransformationMatrix;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultPlusExtraBlockSchematicsMapper& operator=(DefaultPlusExtraBlockSchematicsMapper const&);
    DefaultPlusExtraBlockSchematicsMapper(DefaultPlusExtraBlockSchematicsMapper const&);
    DefaultPlusExtraBlockSchematicsMapper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(
        ::std::vector<::ClientBlockPipeline::CustomGeometryBox>&,
        ::std::vector<::ClientBlockPipeline::CustomGeometryFace>&,
        ::ClientBlockPipeline::BlockVolumeArea const&,
        ::ClientBlockPipeline::BitsetCache const&,
        ::ClientBlockPipeline::ArrayCache<::Block const*> const*,
        ::ClientBlockPipeline::CustomGeometryBlock const&,
        ::ClientBlockPipeline::BlockLookupData const&,
        ::BlockPos const&,
        ::Matrix const&
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefaultPlusExtraBlockSchematicsMapper(
        ::ClientBlockPipeline::
            VectorCache<::ClientBlockPipeline::BlockLookupData, ::ClientBlockPipeline::BlockLookupId>& blockLookupCache,
        ::ClientBlockPipeline::ITintResolver&                                                          tintResolver,
        ::BiomeTintCache*                                                                              biomeTintCache,
        ::BlockPos const&                                                                              relativePos,
        ::Matrix const&   transformationMatrix,
        ::Block const&    extraBlock,
        ::BlockPos const& blockWorldPos
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ClientBlockPipeline::
            VectorCache<::ClientBlockPipeline::BlockLookupData, ::ClientBlockPipeline::BlockLookupId>& blockLookupCache,
        ::ClientBlockPipeline::ITintResolver&                                                          tintResolver,
        ::BiomeTintCache*                                                                              biomeTintCache,
        ::BlockPos const&                                                                              relativePos,
        ::Matrix const&   transformationMatrix,
        ::Block const&    extraBlock,
        ::BlockPos const& blockWorldPos
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ClientBlockPipeline
