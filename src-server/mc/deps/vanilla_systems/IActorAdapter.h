#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on

namespace VanillaSystems {

class IActorAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IActorAdapter() = default;

    // vIndex: 1
    virtual void dropHangingActor(::StrictEntityContext const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace VanillaSystems
