#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_100 { struct CameraAvoidanceRay; }
// clang-format on

namespace MinecraftCamera {

struct CameraAvoidanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkab1374;
    ::ll::UntypedStorage<8, 24> mUnk40851f;
    ::ll::UntypedStorage<4, 4>  mUnk9afcb1;
    ::ll::UntypedStorage<4, 4>  mUnkbb1843;
    ::ll::UntypedStorage<4, 4>  mUnk4bd5a5;
    ::ll::UntypedStorage<4, 4>  mUnk9f8889;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAvoidanceComponent& operator=(CameraAvoidanceComponent const&);
    CameraAvoidanceComponent(CameraAvoidanceComponent const&);
    CameraAvoidanceComponent();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace MinecraftCamera
