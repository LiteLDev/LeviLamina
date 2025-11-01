#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraTargetSettingsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3ae205;
    ::ll::UntypedStorage<1, 1> mUnkbcd459;
    ::ll::UntypedStorage<4, 4> mUnked6184;
    ::ll::UntypedStorage<4, 4> mUnkf07497;
    ::ll::UntypedStorage<4, 12> mUnkcfb1d3;
    ::ll::UntypedStorage<4, 12> mUnkdd7640;
    ::ll::UntypedStorage<4, 8> mUnk821167;
    ::ll::UntypedStorage<4, 12> mUnkb523be;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraTargetSettingsComponent& operator=(CameraTargetSettingsComponent const&);
    CameraTargetSettingsComponent(CameraTargetSettingsComponent const&);
    CameraTargetSettingsComponent();

};

}
