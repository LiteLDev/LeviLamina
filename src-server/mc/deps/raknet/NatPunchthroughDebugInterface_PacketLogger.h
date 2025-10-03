#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NatPunchthroughDebugInterface.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class PacketLogger; }
// clang-format on

namespace RakNet {

struct NatPunchthroughDebugInterface_PacketLogger : public ::RakNet::NatPunchthroughDebugInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::PacketLogger*> pl;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatPunchthroughDebugInterface_PacketLogger() /*override*/ = default;

    // vIndex: 1
    virtual void OnClientMessage(char const*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
