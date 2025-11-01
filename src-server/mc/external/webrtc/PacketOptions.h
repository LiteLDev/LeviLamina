#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfcfbe0;
    ::ll::UntypedStorage<1, 1> mUnkb8408c;
    ::ll::UntypedStorage<1, 1> mUnk5bee3a;
    ::ll::UntypedStorage<1, 1> mUnkd6451f;
    ::ll::UntypedStorage<1, 1> mUnk90a3f8;
    ::ll::UntypedStorage<1, 1> mUnk3941c8;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketOptions& operator=(PacketOptions const&);
    PacketOptions(PacketOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PacketOptions();

    MCNAPI ~PacketOptions();
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

} // namespace webrtc
