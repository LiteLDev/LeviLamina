#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_spline_utils/Spline3d.h"
#include "mc/deps/minecraft_camera/camera_spline_utils/SplineType.h"

namespace CameraSplineUtils {

struct Linear3d : public ::CameraSplineUtils::Spline3d {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec3>>           mControlPoints;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                 mSegStart;
    ::ll::TypedStorage<1, 1, ::CameraSplineUtils::SplineType const> type;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::glm::vec3 eval(float t) const /*override*/;

    virtual ::CameraSplineUtils::SplineType getType() const /*override*/;

#ifdef LL_PLAT_S
    virtual ~Linear3d() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~Linear3d() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::glm::vec3 $eval(float t) const;

    MCFOLD ::CameraSplineUtils::SplineType $getType() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace CameraSplineUtils
