#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

struct Dlrr {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint64 BlockLength() const;

    MCNAPI void Create(uchar*) const;

    MCNAPI Dlrr();

    MCNAPI bool Parse(uchar const*, ushort);

    MCNAPI ~Dlrr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::rtcp
