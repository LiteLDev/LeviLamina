#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ProfileClient.h"

namespace Core::Profile {

class NoOp_ProfileClient : public ::Core::Profile::ProfileClient {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NoOp_ProfileClient() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::Profile
