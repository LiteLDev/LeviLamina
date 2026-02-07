#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/BoxFaceSchematic.h"
#include "mc/deps/core/math/Matrix.h"

namespace ClientBlockPipeline {

struct BoxSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix>                                                  mLocalToModelTransform;
    ::ll::TypedStorage<4, 264, ::std::array<::ClientBlockPipeline::BoxFaceSchematic, 6>> mFaces;
    ::ll::TypedStorage<1, 1, bool>                                                       mUsesFaceUVs;
    ::ll::TypedStorage<1, 1, bool>                                                       mFacesHaveCull;
    // NOLINTEND

public:
    // prevent constructor by default
    BoxSchematic(BoxSchematic const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BoxSchematic();

    MCAPI ::ClientBlockPipeline::BoxSchematic& operator=(::ClientBlockPipeline::BoxSchematic const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
