#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelComponent;
class StrictEntityContext;
struct ParticleEventRequestQueueComponent;
struct TickingSystemWithInfo;
// clang-format on

struct ParticleEventRequestSystem {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void
    _tick(::StrictEntityContext const& level, ::LevelComponent& requests, ::ParticleEventRequestQueueComponent&);

    MCAPI static ::TickingSystemWithInfo create();
#endif
    // NOLINTEND
};
