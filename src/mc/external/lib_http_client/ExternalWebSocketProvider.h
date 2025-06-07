#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class ExternalWebSocketProvider {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool HasCallbacks() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::xbox::httpclient::ExternalWebSocketProvider& Get();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace xbox::httpclient
