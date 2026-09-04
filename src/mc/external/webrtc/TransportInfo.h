#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TransportInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk1e85bb;
    ::ll::UntypedStorage<8, 104> mUnkd5bbd4;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportInfo& operator=(TransportInfo const&);
    TransportInfo(TransportInfo const&);
    TransportInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TransportInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
