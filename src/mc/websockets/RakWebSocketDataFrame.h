#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    MCAPI static void writeFrameToStream(
        class RakNet::BitStream&,
        unsigned char const*,
        unsigned int,
        enum class OpCode,
        bool,
        unsigned int
    );
    // NOLINTEND
};
