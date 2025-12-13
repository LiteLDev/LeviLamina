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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ::RenderDistanceConfiguration::RenderDistanceConfig&
        operator=(::RenderDistanceConfiguration::RenderDistanceConfig&&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfad652;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDistanceConfiguration& operator=(RenderDistanceConfiguration const&);
    RenderDistanceConfiguration(RenderDistanceConfiguration const&);
    RenderDistanceConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::RenderDistanceConfiguration& operator=(::RenderDistanceConfiguration&&);

    MCNAPI_C ~RenderDistanceConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
