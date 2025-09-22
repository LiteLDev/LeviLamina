#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LessonProgressPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct LessonProgressPacketInfo;
// clang-format on

class LessonProgressPacket
: public ::SerializedPayloadPacket<::LessonProgressPacketInfo, ::LessonProgressPacketPayload> {
public:
    // LessonProgressPacket inner types define
    using PayloadType = ::LessonProgressPacketPayload;

    using PacketInfo = ::LessonProgressPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LessonProgressPacket() /*override*/;
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
