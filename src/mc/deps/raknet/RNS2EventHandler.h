#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RNS2RecvStruct; }
// clang-format on

namespace RakNet {

class RNS2EventHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RNS2EventHandler();

    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct*) = 0;

    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct*, char const*, uint) = 0;

    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const*, uint) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet
