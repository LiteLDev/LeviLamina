#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/OpCode.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocketDataFrame {
public:
    // prevent constructor by default
    RakWebSocketDataFrame& operator=(RakWebSocketDataFrame const&);
    RakWebSocketDataFrame(RakWebSocketDataFrame const&);
    RakWebSocketDataFrame();

public:
    // NOLINTBEGIN
    // symbol: ?writeFrameToStream@RakWebSocketDataFrame@@SAXAEAVBitStream@RakNet@@PEBEIW4OpCode@@_NI@Z
    MCAPI static void writeFrameToStream(
        class RakNet::BitStream& stream,
        uchar const*             payload,
        uint                     size,
        ::OpCode                 opCode,
        bool                     isFin,
        uint                     maskKey
    );

    // NOLINTEND
};
