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
            LiveEntities = 0,
            RecalculateRequestEntities = 1,
        };
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnke15f90;
        ::ll::UntypedStorage<4, 4> mUnk8e37f5;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    
    };
    
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createCalculateControlledByLocalInstanceSystem(::ControlledByLocalInstanceSystem::Config const& config);
    // NOLINTEND

};
