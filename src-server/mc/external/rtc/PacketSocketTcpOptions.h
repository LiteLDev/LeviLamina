#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct PacketSocketTcpOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka4f0eb;
    ::ll::UntypedStorage<8, 24> mUnk2be3b4;
    ::ll::UntypedStorage<8, 24> mUnk83371c;
    ::ll::UntypedStorage<8, 8> mUnk805247;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSocketTcpOptions& operator=(PacketSocketTcpOptions const&);
    PacketSocketTcpOptions(PacketSocketTcpOptions const&);
    PacketSocketTcpOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PacketSocketTcpOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
