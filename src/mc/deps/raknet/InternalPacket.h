#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/InternalPacketFixedSizeTransmissionHeader.h"

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
    ::ll::UntypedStorage<4, 4>   mUnk6d96d0;
    ::ll::UntypedStorage<1, 1>   mUnkf5dc1a;
    ::ll::UntypedStorage<8, 8>   mUnk60021b;
    ::ll::UntypedStorage<8, 8>   mUnkfc1947;
    ::ll::UntypedStorage<8, 8>   mUnka7fed7;
    ::ll::UntypedStorage<4, 4>   mUnk78226b;
    ::ll::UntypedStorage<8, 8>   mUnk71f929;
    ::ll::UntypedStorage<4, 4>   mUnk9df441;
    ::ll::UntypedStorage<8, 8>   mUnkceb836;
    ::ll::UntypedStorage<1, 1>   mUnk971275;
    ::ll::UntypedStorage<4, 4>   mUnk93358a;
    ::ll::UntypedStorage<4, 4>   mUnk9be624;
    ::ll::UntypedStorage<8, 8>   mUnka9f3b2;
    ::ll::UntypedStorage<8, 8>   mUnkc2a546;
    ::ll::UntypedStorage<8, 8>   mUnk4c9874;
    ::ll::UntypedStorage<8, 8>   mUnkd1b8f3;
    ::ll::UntypedStorage<1, 128> mUnk80d59c;
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
