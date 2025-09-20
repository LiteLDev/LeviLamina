#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/EditorNetworkPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct EditorNetworkPacketInfo;
// clang-format on

class EditorNetworkPacket : public ::SerializedPayloadPacket<::EditorNetworkPacketInfo, ::EditorNetworkPacketPayload> {
public:
    // EditorNetworkPacket inner types define
    using PayloadType = ::EditorNetworkPacketPayload;

    using PacketInfo = ::EditorNetworkPacketInfo;

public:
    // prevent constructor by default
    EditorNetworkPacket& operator=(EditorNetworkPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorNetworkPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EditorNetworkPacket();

    MCAPI EditorNetworkPacket(::EditorNetworkPacket&&);

    MCAPI EditorNetworkPacket(::EditorNetworkPacket const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::EditorNetworkPacket&&);

    MCAPI void* $ctor(::EditorNetworkPacket const&);
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
