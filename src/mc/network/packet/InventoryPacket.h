#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class ServerPlayer;
struct ActorRotationComponent;
struct MoveInputComponent;
// clang-format on

class InventoryPacket : public ::Packet {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 15
    virtual void
    handle(::ServerPlayer&, ::BlockPalette&, ::MoveInputComponent const&, ::ActorRotationComponent&, bool) const = 0;

    // vIndex: 0
    virtual ~InventoryPacket() /*override*/;
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
};
