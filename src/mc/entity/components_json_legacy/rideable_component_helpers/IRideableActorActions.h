#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RideableComponentHelpers { class IActorWrapper; }
// clang-format on

namespace RideableComponentHelpers {

class IRideableActorActions {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRideableActorActions() = default;

    // vIndex: 1
    virtual bool startRiding(::RideableComponentHelpers::IActorWrapper&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
