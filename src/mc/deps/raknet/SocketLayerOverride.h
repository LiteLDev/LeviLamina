#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class SocketLayerOverride {
public:
    // prevent constructor by default
    SocketLayerOverride& operator=(SocketLayerOverride const&);
    SocketLayerOverride(SocketLayerOverride const&);
    SocketLayerOverride();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SocketLayerOverride() = default;

    // vIndex: 1
    virtual int RakNetSendTo(char const*, int, ::RakNet::SystemAddress const&) = 0;

    // vIndex: 2
    virtual int RakNetRecvFrom(char*, ::RakNet::SystemAddress*, bool) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
