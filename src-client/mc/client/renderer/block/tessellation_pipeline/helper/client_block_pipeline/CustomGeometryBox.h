#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/BlockLookupId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CustomGeometryBoxMask.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct IResolvedTint; }
// clang-format on

namespace ClientBlockPipeline {

struct CustomGeometryBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix>                                                mMatrix;
    ::ll::TypedStorage<2, 2, ::ClientBlockPipeline::BlockLookupId>                     mBlockId;
    ::ll::TypedStorage<1, 1, ::ClientBlockPipeline::CustomGeometryBoxMask>             mMask;
    ::ll::TypedStorage<1, 1, ::Flip>                                                   mFlipRotation;
    ::ll::TypedStorage<4, 4, float>                                                    mPosRandom;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::IResolvedTint>> mResolvedTint;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CustomGeometryBox();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
