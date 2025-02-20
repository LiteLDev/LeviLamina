#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
// clang-format on

class PacketSecurityController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc814bd;
    ::ll::UntypedStorage<8, 40> mUnk2b4bd9;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSecurityController& operator=(PacketSecurityController const&);
    PacketSecurityController(PacketSecurityController const&);
    PacketSecurityController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketSecurityController(::NetworkIdentifier const& netId, bool packetLimitHandlerEnabled);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkIdentifier const& netId, bool packetLimitHandlerEnabled);
    // NOLINTEND
};
