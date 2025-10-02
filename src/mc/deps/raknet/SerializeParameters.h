#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BitStream.h"
#include "mc/deps/raknet/PRO.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class Connection_RM3; }
// clang-format on

namespace RakNet {

struct SerializeParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 4608, ::RakNet::BitStream[16]>  outputBitstream;
    ::ll::TypedStorage<8, 128, ::RakNet::BitStream* [16]> lastSentBitstream;
    ::ll::TypedStorage<8, 8, uint64>                      messageTimestamp;
    ::ll::TypedStorage<4, 256, ::RakNet::PRO[16]>         pro;
    ::ll::TypedStorage<8, 8, ::RakNet::Connection_RM3*>   destinationConnection;
    ::ll::TypedStorage<4, 4, uint>                        bitsWrittenSoFar;
    ::ll::TypedStorage<8, 8, uint64>                      whenLastSerialized;
    ::ll::TypedStorage<8, 8, uint64>                      curTime;
    // NOLINTEND
};

} // namespace RakNet
