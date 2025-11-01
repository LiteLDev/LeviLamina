#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
// clang-format on

class MinecraftScheduler {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scheduler& client();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::Scheduler>& mInstance();
    // NOLINTEND

};
