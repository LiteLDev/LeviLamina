#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct PlayerProfileFacet {
public:
    // PlayerProfileFacet inner types declare
    // clang-format off
    struct PlayerProfileDataWrapper;
    struct PlayerProfileDataWrapperOreUI;
    struct PlayerProfileDataWrapperstruct;
    struct PlayerProfileWrapper;
    // clang-format on

    // PlayerProfileFacet inner types define
    struct PlayerProfileDataWrapper {};

    struct PlayerProfileDataWrapperOreUI {
    public:
        // PlayerProfileDataWrapperOreUI inner types declare
        // clang-format off
        struct PlayerProfileFacet;
        // clang-format on

        // PlayerProfileDataWrapperOreUI inner types define
        struct PlayerProfileFacet {
        public:
            // PlayerProfileFacet inner types declare
            // clang-format off
            struct PlayerProfileWrapper;
            // clang-format on

            // PlayerProfileFacet inner types define
            struct PlayerProfileWrapper {};
        };
    };

    struct PlayerProfileDataWrapperstruct {};

    struct PlayerProfileWrapper {};
};

} // namespace OreUI
