#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct OfferFlowerTickComponent;
struct TickingSystemWithInfo;
// clang-format on

class OfferFlowerTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doOfferFlowerTickSystem(::StrictEntityContext const& offerFlowerTickComponent, ::OfferFlowerTickComponent&);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
