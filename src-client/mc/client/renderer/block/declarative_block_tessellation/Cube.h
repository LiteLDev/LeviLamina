#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/declarative_block_tessellation/CubePoint.h"
#include "mc/client/renderer/block/declarative_block_tessellation/Face.h"
#include "mc/world/level/BlockPos.h"

namespace DeclarativeBlockTessellation {

struct Cube {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::DeclarativeBlockTessellation::CubePoint>              mOrigin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mSize;
    ::ll::TypedStorage<4, 24, ::DeclarativeBlockTessellation::CubePoint>              mMax;
    ::ll::TypedStorage<8, 192, ::std::array<::DeclarativeBlockTessellation::Face, 6>> mFaces;
    // NOLINTEND
};

} // namespace DeclarativeBlockTessellation
