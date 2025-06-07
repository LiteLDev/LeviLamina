#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class ExternalHttpProvider {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool HasCallback() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::xbox::httpclient::ExternalHttpProvider& Get();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace xbox::httpclient
