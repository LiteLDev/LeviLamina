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
    RakWebSocketDataFrame& operator=(RakWebSocketDataFrame const&) = delete;
    RakWebSocketDataFrame(RakWebSocketDataFrame const&)            = delete;
    RakWebSocketDataFrame()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?writeFrameToStream\@RakWebSocketDataFrame\@\@SAXAEAVBitStream\@RakNet\@\@PEBEIW4OpCode\@\@_NI\@Z
     */
    MCAPI static void
    writeFrameToStream(class RakNet::BitStream&, uint8_t const*, uint32_t, enum class OpCode, bool, uint32_t);
    // NOLINTEND
};
