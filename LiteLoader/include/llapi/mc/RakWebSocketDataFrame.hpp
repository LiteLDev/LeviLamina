/**
 * @file  RakWebSocketDataFrame.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakWebSocketDataFrame.
 *
 */
class RakWebSocketDataFrame {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETDATAFRAME
public:
    class RakWebSocketDataFrame& operator=(class RakWebSocketDataFrame const &) = delete;
    RakWebSocketDataFrame(class RakWebSocketDataFrame const &) = delete;
    RakWebSocketDataFrame() = delete;
#endif

public:
    /**
     * @symbol ?writeFrameToStream\@RakWebSocketDataFrame\@\@SAXAEAVBitStream\@RakNet\@\@PEBEIW4OpCode\@\@_NI\@Z
     */
    MCAPI static void writeFrameToStream(class RakNet::BitStream &, unsigned char const *, unsigned int, enum class OpCode, bool, unsigned int);

};
