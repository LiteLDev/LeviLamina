#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

struct CameraBlendStateComponent {
public:
    // CameraBlendStateComponent inner types declare
    // clang-format off
    struct EaseState;
    struct SnapShotEaseValues;
    // clang-format on
    
    // CameraBlendStateComponent inner types define
    struct SnapShotEaseValues {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkb15ad3;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        SnapShotEaseValues& operator=(SnapShotEaseValues const&);
        SnapShotEaseValues(SnapShotEaseValues const&);
        SnapShotEaseValues();
    
    };
    
    struct EaseState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk9836a6;
        ::ll::UntypedStorage<4, 4> mUnk7c07aa;
        ::ll::UntypedStorage<4, 12> mUnke2c2ba;
        ::ll::UntypedStorage<4, 12> mUnka68579;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        EaseState& operator=(EaseState const&);
        EaseState(EaseState const&);
        EaseState();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 36> mUnkc7e2ad;
    ::ll::UntypedStorage<8, 24> mUnkef16cf;
    ::ll::UntypedStorage<4, 4> mUnkbef08b;
    ::ll::UntypedStorage<8, 8> mUnk8e5dca;
    ::ll::UntypedStorage<4, 4> mUnkb9fd6c;
    ::ll::UntypedStorage<4, 4> mUnka520a3;
    ::ll::UntypedStorage<4, 12> mUnka943fa;
    ::ll::UntypedStorage<4, 12> mUnk1bfa6b;
    ::ll::UntypedStorage<4, 12> mUnkbc2cda;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraBlendStateComponent& operator=(CameraBlendStateComponent const&);
    CameraBlendStateComponent(CameraBlendStateComponent const&);
    CameraBlendStateComponent();

};

}
