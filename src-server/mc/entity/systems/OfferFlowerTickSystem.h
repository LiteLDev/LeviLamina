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
    MCNAPI static void _doOfferFlowerTickSystem(::StrictEntityContext const&, ::OfferFlowerTickComponent& offerFlowerTickComponent);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND

};
