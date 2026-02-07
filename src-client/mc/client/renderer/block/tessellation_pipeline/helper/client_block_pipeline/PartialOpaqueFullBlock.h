#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/PackedPosition.h"
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct IResolvedTint; }
// clang-format on

namespace ClientBlockPipeline {

struct PartialOpaqueFullBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                                    mFaceMask;
    ::ll::TypedStorage<1, 1, ::Flip>                                                   mFlipRotation;
    ::ll::TypedStorage<1, 3, ::ClientBlockPipeline::PackedPosition>                    mPosition;
    ::ll::TypedStorage<1, 1, bool>                                                     mHasTextureVariations;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::IResolvedTint>> mResolvedTint;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PartialOpaqueFullBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
