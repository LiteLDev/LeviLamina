#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
struct TickingSystemWithInfo;
// clang-format on

class UpdateBoundingBoxSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem(::BaseGameVersion const& version, bool isClientSide);
    // NOLINTEND
};
