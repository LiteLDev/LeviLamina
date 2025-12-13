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
    virtual ~IRideableActorActions() = default;

    virtual bool startRiding(::RideableComponentHelpers::IActorWrapper&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
