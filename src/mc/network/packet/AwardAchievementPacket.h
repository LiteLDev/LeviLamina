#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/AwardAchievementPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct AwardAchievementPacketInfo;
// clang-format on

class AwardAchievementPacket
: public ::SerializedPayloadPacket<::AwardAchievementPacketInfo, ::AwardAchievementPacketPayload> {
public:
    // AwardAchievementPacket inner types define
    using PayloadType = ::AwardAchievementPacketPayload;

    using PacketInfo = ::AwardAchievementPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AwardAchievementPacket() /*override*/;
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
