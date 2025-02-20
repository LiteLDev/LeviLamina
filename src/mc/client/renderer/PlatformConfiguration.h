#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlatformConfiguration {
public:
    // PlatformConfiguration inner types declare
    // clang-format off
    struct GraphicsQualityPreset;
    // clang-format on

    // PlatformConfiguration inner types define
    struct GraphicsQualityPreset {
    public:
        // GraphicsQualityPreset inner types declare
        // clang-format off
        struct LODs;
        // clang-format on

        // GraphicsQualityPreset inner types define
        struct LODs {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1> mUnk4faaa6;
            ::ll::UntypedStorage<1, 1> mUnk49ccd9;
            ::ll::UntypedStorage<1, 1> mUnkf2dc3d;
            ::ll::UntypedStorage<1, 1> mUnk376acf;
            ::ll::UntypedStorage<1, 1> mUnk95840c;
            ::ll::UntypedStorage<1, 1> mUnk96a7c1;
            ::ll::UntypedStorage<1, 1> mUnkea636c;
            ::ll::UntypedStorage<1, 1> mUnk1345a0;
            // NOLINTEND

        public:
            // prevent constructor by default
            LODs& operator=(LODs const&);
            LODs(LODs const&);
            LODs();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkad3f19;
        ::ll::UntypedStorage<1, 8>  mUnk5d03f0;
        // NOLINTEND

    public:
        // prevent constructor by default
        GraphicsQualityPreset& operator=(GraphicsQualityPreset const&);
        GraphicsQualityPreset(GraphicsQualityPreset const&);
        GraphicsQualityPreset();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 688> mUnk3cd524;
    ::ll::UntypedStorage<4, 144> mUnkb6a0ef;
    ::ll::UntypedStorage<4, 192> mUnkb4d9d6;
    ::ll::UntypedStorage<4, 12>  mUnkdef3d9;
    ::ll::UntypedStorage<8, 224> mUnk50b476;
    ::ll::UntypedStorage<4, 416> mUnkef3903;
    ::ll::UntypedStorage<4, 168> mUnkadb7ff;
    ::ll::UntypedStorage<4, 64>  mUnkf33225;
    ::ll::UntypedStorage<8, 32>  mUnka6a4a1;
    ::ll::UntypedStorage<8, 24>  mUnk6cb495;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformConfiguration& operator=(PlatformConfiguration const&);
    PlatformConfiguration(PlatformConfiguration const&);
    PlatformConfiguration();
};
