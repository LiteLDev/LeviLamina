#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/rendering/TextureCubeFace.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct TileRenderConfig; }
namespace dragon::rendering { struct Camera; }
// clang-format on

namespace PointLighting {

class PointLightShadowProbe {
public:
    // PointLightShadowProbe inner types declare
    // clang-format off
    struct FaceState;
    // clang-format on

    // PointLightShadowProbe inner types define
    struct FaceState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle> mActiveTileHandle;
        ::ll::TypedStorage<2, 2, ushort>                            mActiveDimension;
        ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle> mPendingTileHandle;
        ::ll::TypedStorage<2, 2, ushort>                            mPendingDimension;
        ::ll::TypedStorage<8, 8, uint64>                            mLastGrownMs;
        ::ll::TypedStorage<8, 8, uint64>                            mLastShrinkMs;
        ::ll::TypedStorage<8, 8, uint64>                            mLastInvalidateMs;
        ::ll::TypedStorage<8, 8, uint64>                            mLastBudgetSkipMs;
        ::ll::TypedStorage<8, 8, uint64>                            mFailureCount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>                                                         mLightWorldPosition;
    ::ll::TypedStorage<1, 1, uchar>                                                                mVanillaBrightness;
    ::ll::TypedStorage<8, 720, ::std::array<::PointLighting::PointLightShadowProbe::FaceState, 6>> mFaceStates;
    ::ll::TypedStorage<8, 8, uint64>                                                               mLastAccessedMs;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsVisibleThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsFreshProbe;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::dragon::atlas::TileRenderConfig createTileRenderConfig(
        ::glm::vec3 const&                   worldOrigin,
        ::dragon::rendering::TextureCubeFace face,
        float                                nearPlane,
        float                                farPlane
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::dragon::rendering::Camera createTileCamera(
        ::glm::vec3 const&                   probePos,
        ::glm::vec3 const&                   worldOrigin,
        ::dragon::rendering::TextureCubeFace face,
        ushort                               dimension,
        float                                nearPlane,
        float                                farPlane
    );
    // NOLINTEND
};

} // namespace PointLighting
