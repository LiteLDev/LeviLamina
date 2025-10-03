#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NatPunchthroughServerDebugInterface.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class PacketLogger; }
// clang-format on

namespace RakNet {

struct NatPunchthroughServerDebugInterface_PacketLogger : public ::RakNet::NatPunchthroughServerDebugInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::PacketLogger*> pl;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatPunchthroughServerDebugInterface_PacketLogger() /*override*/ = default;

    // vIndex: 1
    virtual void OnServerMessage(char const*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
