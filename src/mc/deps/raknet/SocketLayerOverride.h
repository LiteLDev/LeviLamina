#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class SocketLayerOverride {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocketLayerOverride() = default;

    virtual int RakNetSendTo(char const*, int, ::RakNet::SystemAddress const&) = 0;

    virtual int RakNetRecvFrom(char*, ::RakNet::SystemAddress*, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
