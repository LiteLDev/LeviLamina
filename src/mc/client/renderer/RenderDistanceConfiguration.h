#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderDistanceConfiguration {
public:
    // RenderDistanceConfiguration inner types declare
    // clang-format off
    struct RenderDistanceConfig;
    // clang-format on

    // RenderDistanceConfiguration inner types define
    struct RenderDistanceConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkbd64c3;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderDistanceConfig& operator=(RenderDistanceConfig const&);
        RenderDistanceConfig(RenderDistanceConfig const&);
        RenderDistanceConfig();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfad652;
    ::ll::UntypedStorage<4, 4>  mUnk9922b6;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDistanceConfiguration& operator=(RenderDistanceConfiguration const&);
    RenderDistanceConfiguration(RenderDistanceConfiguration const&);
    RenderDistanceConfiguration();
};
