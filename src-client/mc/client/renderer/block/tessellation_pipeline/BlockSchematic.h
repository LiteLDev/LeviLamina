#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/FitToFrame.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct BlockSchematicPart; }
namespace ClientBlockPipeline::ItemTransforms { struct Transform; }
// clang-format on

namespace ClientBlockPipeline {

struct BlockSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix>                                                        mModelToGridTransform;
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlockPipeline::BlockSchematicPart>>        mParts;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                    mMaterialNames;
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlockPipeline::ItemTransforms::Transform>> mItemTransforms;
    ::ll::TypedStorage<1, 1, ::FitToFrame>                                                     mFitGuiItemToFrame;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                          mSchematicMax;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                          mSchematicMin;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockSchematic();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
