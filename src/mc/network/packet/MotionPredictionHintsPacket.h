#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MotionPredictionHintsPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct MotionPredictionHintsPacketInfo;
// clang-format on

class MotionPredictionHintsPacket
: public ::SerializedPayloadPacket<::MotionPredictionHintsPacketInfo, ::MotionPredictionHintsPacketPayload> {
public:
    // MotionPredictionHintsPacket inner types define
    using PayloadType = ::MotionPredictionHintsPacketPayload;

    using PacketInfo = ::MotionPredictionHintsPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MotionPredictionHintsPacket() /*override*/;
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
