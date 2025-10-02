#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BitStream.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class Connection_RM3; }
// clang-format on

namespace RakNet {

struct DeserializeParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 4608, ::RakNet::BitStream[16]> serializationBitstream;
    ::ll::TypedStorage<1, 16, bool[16]>                  bitstreamWrittenTo;
    ::ll::TypedStorage<8, 8, uint64>                     timeStamp;
    ::ll::TypedStorage<8, 8, ::RakNet::Connection_RM3*>  sourceConnection;
    // NOLINTEND
};

} // namespace RakNet
