#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NatPunchthroughServerDebugInterface.h"

namespace RakNet {

struct NatPunchthroughServerDebugInterface_PacketLogger : public ::RakNet::NatPunchthroughServerDebugInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk27b348;
    // NOLINTEND

public:
    // prevent constructor by default
    NatPunchthroughServerDebugInterface_PacketLogger&
    operator=(NatPunchthroughServerDebugInterface_PacketLogger const&);
    NatPunchthroughServerDebugInterface_PacketLogger(NatPunchthroughServerDebugInterface_PacketLogger const&);
    NatPunchthroughServerDebugInterface_PacketLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatPunchthroughServerDebugInterface_PacketLogger() /*override*/ = default;

    // vIndex: 1
    virtual void OnServerMessage(char const*) /*override*/;
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
