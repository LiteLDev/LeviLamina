#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/GuiDataPickItemPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct GuiDataPickItemPacketInfo;
// clang-format on

class GuiDataPickItemPacket
: public ::SerializedPayloadPacket<::GuiDataPickItemPacketInfo, ::GuiDataPickItemPacketPayload> {
public:
    // GuiDataPickItemPacket inner types define
    using PayloadType = ::GuiDataPickItemPacketPayload;

    using PacketInfo = ::GuiDataPickItemPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GuiDataPickItemPacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
