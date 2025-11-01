#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

class StationaryCameraComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk604b86;
    ::ll::UntypedStorage<4, 8>  mUnkb14dba;
    // NOLINTEND

public:
    // prevent constructor by default
    StationaryCameraComponent& operator=(StationaryCameraComponent const&);
    StationaryCameraComponent(StationaryCameraComponent const&);
    StationaryCameraComponent();
};

} // namespace MinecraftCamera
