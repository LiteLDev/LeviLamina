#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

struct Dlrr {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 BlockLength() const;

    MCAPI void Create(uchar*) const;

    MCAPI Dlrr();

    MCAPI bool Parse(uchar const*, ushort);

    MCAPI ~Dlrr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::rtcp
