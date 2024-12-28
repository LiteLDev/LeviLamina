#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerCameraInstructionComponent {
public:
    // ServerCameraInstructionComponent inner types declare
    // clang-format off
    struct EaseOption;
    // clang-format on

    // ServerCameraInstructionComponent inner types define
    struct EaseOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk52128b;
        ::ll::UntypedStorage<4, 12> mUnkf14eaa;
        ::ll::UntypedStorage<4, 4>  mUnkcecb68;
        ::ll::UntypedStorage<4, 4>  mUnkb1628b;
        // NOLINTEND

    public:
        // prevent constructor by default
        EaseOption& operator=(EaseOption const&);
        EaseOption(EaseOption const&);
        EaseOption();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf87beb;
    ::ll::UntypedStorage<4, 28> mUnkf740c1;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCameraInstructionComponent& operator=(ServerCameraInstructionComponent const&);
    ServerCameraInstructionComponent(ServerCameraInstructionComponent const&);
    ServerCameraInstructionComponent();
};
