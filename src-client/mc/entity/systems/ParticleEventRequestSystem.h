#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelComponent;
class StrictEntityContext;
struct ParticleEventRequestQueueComponent;
// clang-format on

struct ParticleEventRequestSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _tick(::StrictEntityContext const&, ::LevelComponent& level, ::ParticleEventRequestQueueComponent& requests);
    // NOLINTEND
};
