#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/rendering/TextureCubeFace.h"

namespace PointLighting {

class PointLightShadowProbe {
public:
    // PointLightShadowProbe inner types define
    using ProbeFace = ::dragon::rendering::TextureCubeFace;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>                                        mLightWorldPosition;
    ::ll::TypedStorage<1, 1, ::dragon::rendering::TextureCubeFace>                mFaceToUpdate;
    ::ll::TypedStorage<4, 4, int>                                                 mShadowProbeIndex;
    ::ll::TypedStorage<8, 192, ::std::array<::dragon::atlas::AtlasTileHandle, 6>> mFaceTiles;
    ::ll::TypedStorage<1, 1, bool>                                                mFresh;
    // NOLINTEND
};

} // namespace PointLighting
