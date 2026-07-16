#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/components/BlockMaterialInstancePackedBools.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Material; }
// clang-format on

struct BlockMaterialInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<4>>                              mTextureName;
    ::ll::TypedStorage<4, 4, float>                                                     mAmbientOcclusion;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                                        mRenderLayer;
    ::ll::TypedStorage<1, 1, ::BlockMaterialInstancePackedBools>                        mPackedBools;
    ::ll::TypedStorage<1, 1, ::TintMethod>                                              mTintMethod;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::Material const>> mMaterial;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockMaterialInstance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
