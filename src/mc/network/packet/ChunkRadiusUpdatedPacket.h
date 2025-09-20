#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ChunkRadiusUpdatedPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ChunkRadiusUpdatedPacketInfo;
// clang-format on

class ChunkRadiusUpdatedPacket
: public ::SerializedPayloadPacket<::ChunkRadiusUpdatedPacketInfo, ::ChunkRadiusUpdatedPacketPayload> {
public:
    // ChunkRadiusUpdatedPacket inner types define
    using PayloadType = ::ChunkRadiusUpdatedPacketPayload;

    using PacketInfo = ::ChunkRadiusUpdatedPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkRadiusUpdatedPacket() /*override*/;
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
