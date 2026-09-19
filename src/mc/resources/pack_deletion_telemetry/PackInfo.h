#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackDeletionTelemetry {

struct PackInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkff6369;
    ::ll::UntypedStorage<1, 1>  mUnkaa0ebc;
    ::ll::UntypedStorage<1, 1>  mUnk7eed05;
    ::ll::UntypedStorage<8, 32> mUnk5c29f6;
    // NOLINTEND

public:
    // prevent constructor by default
    PackInfo& operator=(PackInfo const&);
    PackInfo(PackInfo const&);
    PackInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackDeletionTelemetry
