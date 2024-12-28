#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RideableComponentHelpers { class IActorWrapper; }
// clang-format on

namespace RideableComponentHelpers {

class IRideableActorActions {
public:
    // prevent constructor by default
    IRideableActorActions& operator=(IRideableActorActions const&);
    IRideableActorActions(IRideableActorActions const&);
    IRideableActorActions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRideableActorActions();

    // vIndex: 1
    virtual bool startRiding(::RideableComponentHelpers::IActorWrapper&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
