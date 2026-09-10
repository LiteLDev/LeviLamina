#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/TextureCubeFace.h"
#include "mc/world/level/BlockPos.h"

namespace PointLighting {

struct TileAction {
public:
    // TileAction inner types define
    enum class Type : int {
        Invalidate = 0,
        Grow       = 1,
        Shrink     = 2,
        New        = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PointLighting::TileAction::Type>    mType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mProbePos;
    ::ll::TypedStorage<1, 1, ::dragon::rendering::TextureCubeFace> mFace;
    ::ll::TypedStorage<2, 2, ushort>                               mTargetDimension;
    ::ll::TypedStorage<4, 4, float>                                mScore;
    ::ll::TypedStorage<1, 1, bool>                                 mBudgetRejected;
    // NOLINTEND
};

} // namespace PointLighting
