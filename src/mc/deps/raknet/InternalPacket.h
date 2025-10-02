#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/InternalPacketFixedSizeTransmissionHeader.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/uint24_t.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct InternalPacketRefCountedData; }
// clang-format on

namespace RakNet {

struct InternalPacket : public ::RakNet::InternalPacketFixedSizeTransmissionHeader {
public:
    // InternalPacket inner types define
    enum class AllocationScheme : int {
        Normal     = 0,
        RefCounted = 1,
        Stack      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                         messageInternalOrder;
    ::ll::TypedStorage<1, 1, bool>                                       messageNumberAssigned;
    ::ll::TypedStorage<8, 8, uint64>                                     creationTime;
    ::ll::TypedStorage<8, 8, uint64>                                     nextActionTime;
    ::ll::TypedStorage<8, 8, uint64>                                     retransmissionTime;
    ::ll::TypedStorage<4, 4, uint>                                       headerLength;
    ::ll::TypedStorage<8, 8, uchar*>                                     data;
    ::ll::TypedStorage<4, 4, ::RakNet::InternalPacket::AllocationScheme> allocationScheme;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacketRefCountedData*>    refCountedData;
    ::ll::TypedStorage<1, 1, uchar>                                      timesSent;
    ::ll::TypedStorage<4, 4, ::PacketPriority>                           priority;
    ::ll::TypedStorage<4, 4, uint>                                       sendReceiptSerial;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                  resendPrev;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                  resendNext;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                  unreliablePrev;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                  unreliableNext;
    ::ll::TypedStorage<1, 128, uchar[128]>                               stackData;
    // NOLINTEND

public:
    // prevent constructor by default
    InternalPacket(InternalPacket const&);
    InternalPacket();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::RakNet::InternalPacket& operator=(::RakNet::InternalPacket const&);
    // NOLINTEND
};

} // namespace RakNet
