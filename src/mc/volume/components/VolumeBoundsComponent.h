#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeBoundsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkf70e7e;
    ::ll::UntypedStorage<4, 12> mUnk453dd7;
    ::ll::UntypedStorage<4, 4>  mUnk944e9b;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeBoundsComponent& operator=(VolumeBoundsComponent const&);
    VolumeBoundsComponent(VolumeBoundsComponent const&);
    VolumeBoundsComponent();
};
