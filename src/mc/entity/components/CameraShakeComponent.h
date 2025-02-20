#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraShakeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka70a70;
    ::ll::UntypedStorage<8, 8>  mUnk4af12c;
    ::ll::UntypedStorage<8, 8>  mUnk25c1e6;
    ::ll::UntypedStorage<8, 8>  mUnk48300a;
    ::ll::UntypedStorage<8, 8>  mUnkb2f591;
    ::ll::UntypedStorage<4, 4>  mUnk706a18;
    ::ll::UntypedStorage<4, 4>  mUnk8d03b0;
    ::ll::UntypedStorage<4, 4>  mUnka13555;
    ::ll::UntypedStorage<1, 1>  mUnk75cd60;
    ::ll::UntypedStorage<1, 1>  mUnk695edd;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakeComponent& operator=(CameraShakeComponent const&);
    CameraShakeComponent(CameraShakeComponent const&);
    CameraShakeComponent();
};
