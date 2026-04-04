#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ControlledByLocalInstanceSystem {
public:
    // ControlledByLocalInstanceSystem inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // ControlledByLocalInstanceSystem inner types define
    struct Config {
    public:
        // Config inner types define
        enum class ApplyTo : int {
            LiveEntities               = 0,
            RecalculateRequestEntities = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                               mIsClientSide;
        ::ll::TypedStorage<4, 4, ::ControlledByLocalInstanceSystem::Config::ApplyTo> mApplyTo;
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo
    createCalculateControlledByLocalInstanceSystem(::ControlledByLocalInstanceSystem::Config const& config);
    // NOLINTEND
};
