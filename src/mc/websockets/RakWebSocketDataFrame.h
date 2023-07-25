#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocketDataFrame {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETDATAFRAME
public:
    RakWebSocketDataFrame& operator=(RakWebSocketDataFrame const&) = delete;
    RakWebSocketDataFrame(RakWebSocketDataFrame const&)            = delete;
    RakWebSocketDataFrame()                                        = delete;
#endif

public:
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
};
