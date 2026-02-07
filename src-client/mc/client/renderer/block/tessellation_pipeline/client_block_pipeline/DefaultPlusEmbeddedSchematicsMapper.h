#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/ISchematicsMapper.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CustomGeometryBlock.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Matrix;
struct BiomeTintCache;
namespace ClientBlockPipeline { class ITintResolver; }
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct BlockLookupId; }
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline { struct CustomGeometryBox; }
namespace ClientBlockPipeline { struct CustomGeometryFace; }
namespace ClientBlockPipeline::WorldView { class Interface; }
// clang-format on

namespace ClientBlockPipeline {

struct DefaultPlusEmbeddedSchematicsMapper : public ::ClientBlockPipeline::ISchematicsMapper {
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
    DefaultPlusEmbeddedSchematicsMapper& operator=(DefaultPlusEmbeddedSchematicsMapper const&);
    DefaultPlusEmbeddedSchematicsMapper(DefaultPlusEmbeddedSchematicsMapper const&);
    DefaultPlusEmbeddedSchematicsMapper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(
        ::std::vector<::ClientBlockPipeline::CustomGeometryBox>&  customBoxes,
        ::std::vector<::ClientBlockPipeline::CustomGeometryFace>& customFaces,
        ::ClientBlockPipeline::BlockVolumeArea const&             area,
        ::ClientBlockPipeline::BitsetCache const&                 opaqueFullBlockCache,
        ::ClientBlockPipeline::ArrayCache<::Block const*> const*,
        ::ClientBlockPipeline::CustomGeometryBlock const&,
        ::ClientBlockPipeline::BlockLookupData const&,
        ::BlockPos const& relativePos,
        ::Matrix const&   blockPosTransform
    ) const /*override*/;

    virtual ~DefaultPlusEmbeddedSchematicsMapper() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefaultPlusEmbeddedSchematicsMapper(
        ::ClientBlockPipeline::
            VectorCache<::ClientBlockPipeline::BlockLookupData, ::ClientBlockPipeline::BlockLookupId>& blockLookupCache,
        ::ClientBlockPipeline::WorldView::Interface const&                                             worldView,
        ::ClientBlockPipeline::ITintResolver&                                                          tintResolver,
        ::BiomeTintCache*                                                                              biomeTintCache,
        ::BlockPos const&                                                                              relativePos,
        ::Matrix const& transformationMatrix
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ClientBlockPipeline::
            VectorCache<::ClientBlockPipeline::BlockLookupData, ::ClientBlockPipeline::BlockLookupId>& blockLookupCache,
        ::ClientBlockPipeline::WorldView::Interface const&                                             worldView,
        ::ClientBlockPipeline::ITintResolver&                                                          tintResolver,
        ::BiomeTintCache*                                                                              biomeTintCache,
        ::BlockPos const&                                                                              relativePos,
        ::Matrix const& transformationMatrix
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(
        ::std::vector<::ClientBlockPipeline::CustomGeometryBox>&  customBoxes,
        ::std::vector<::ClientBlockPipeline::CustomGeometryFace>& customFaces,
        ::ClientBlockPipeline::BlockVolumeArea const&             area,
        ::ClientBlockPipeline::BitsetCache const&                 opaqueFullBlockCache,
        ::ClientBlockPipeline::ArrayCache<::Block const*> const*,
        ::ClientBlockPipeline::CustomGeometryBlock const&,
        ::ClientBlockPipeline::BlockLookupData const&,
        ::BlockPos const& relativePos,
        ::Matrix const&   blockPosTransform
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
