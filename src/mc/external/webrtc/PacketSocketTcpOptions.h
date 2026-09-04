#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketSocketTcpOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3fe5db;
    ::ll::UntypedStorage<8, 24> mUnk41e980;
    ::ll::UntypedStorage<8, 24> mUnkc1e088;
    ::ll::UntypedStorage<8, 8>  mUnka45b68;
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

} // namespace webrtc
