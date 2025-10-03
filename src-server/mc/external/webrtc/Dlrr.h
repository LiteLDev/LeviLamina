#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class Dlrr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke5cd0b;
    // NOLINTEND

public:
    // prevent constructor by default
    Dlrr& operator=(Dlrr const&);
    Dlrr(Dlrr const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint64 BlockLength() const;

    MCNAPI void Create(uchar* buffer) const;

    MCNAPI Dlrr();

    MCNAPI bool Parse(uchar const* buffer, ushort block_length_32bits);

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
