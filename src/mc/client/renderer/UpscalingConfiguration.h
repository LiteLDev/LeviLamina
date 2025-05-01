#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpscalingConfiguration {
public:
    // UpscalingConfiguration inner types declare
    // clang-format off
    struct Configs;
    // clang-format on

    // UpscalingConfiguration inner types define
    struct Configs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 20> mUnk1018f1;
        ::ll::UntypedStorage<4, 20> mUnk313843;
        ::ll::UntypedStorage<4, 20> mUnke61b18;
        ::ll::UntypedStorage<4, 20> mUnkc0751b;
        ::ll::UntypedStorage<4, 20> mUnkeabfe0;
        ::ll::UntypedStorage<4, 20> mUnk59d2b6;
        ::ll::UntypedStorage<4, 20> mUnk1e3773;
        ::ll::UntypedStorage<4, 20> mUnk173aec;
        // NOLINTEND

    public:
        // prevent constructor by default
        Configs& operator=(Configs const&);
        Configs(Configs const&);
        Configs();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 160> mUnk784765;
    // NOLINTEND

public:
    // prevent constructor by default
    UpscalingConfiguration& operator=(UpscalingConfiguration const&);
    UpscalingConfiguration(UpscalingConfiguration const&);
    UpscalingConfiguration();
};
