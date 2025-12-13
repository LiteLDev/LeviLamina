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
    ::ll::UntypedStorage<8, 24> mUnk757189;
    ::ll::UntypedStorage<8, 24> mUnk37c736;
    ::ll::UntypedStorage<1, 1>  mUnkc640a8;
    // NOLINTEND

public:
    // prevent constructor by default
    Linear3d& operator=(Linear3d const&);
    Linear3d(Linear3d const&);
    Linear3d();

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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::glm::vec3 $eval(float t) const;

    MCNAPI ::CameraSplineUtils::SplineType $getType() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace CameraSplineUtils
