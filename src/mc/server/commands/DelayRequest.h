#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DelayRequest {
public:
    // prevent constructor by default
    DelayRequest& operator=(DelayRequest const&);
    DelayRequest(DelayRequest const&);
    DelayRequest();

public:
    // NOLINTBEGIN
    MCAPI DelayRequest(std::unique_ptr<class IRequestAction> action, uint64 tickToExecuteOn);

    MCAPI void executeAction(class ServerLevel& level, class Dimension& dimension);

    MCAPI gsl::not_null<class IRequestAction*> getAction() const;

    MCAPI uint64 getTickToExecuteOn() const;

    MCAPI bool operator>(class DelayRequest const& rhs) const;

    MCAPI ~DelayRequest();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::unique_ptr<class IRequestAction> action, uint64 tickToExecuteOn);

    MCAPI void dtor$();

    // NOLINTEND
};
