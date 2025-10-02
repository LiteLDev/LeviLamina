#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BitStream.h"

namespace RakNet {

struct LastSerializationResultBS {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 4608, ::RakNet::BitStream[16]> bitStream;
    ::ll::TypedStorage<1, 16, bool[16]>                  indicesToSend;
    // NOLINTEND
};

} // namespace RakNet
