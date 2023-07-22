/**
 * @file  RakWebSocketDataFrame.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
#endif

public:
    /**
     * @symbol  ??0RakWebSocketDataFrame\@\@QEAA\@XZ
     */
    MCAPI RakWebSocketDataFrame();
    /**
     * @symbol  ?getCloseCode\@RakWebSocketDataFrame\@\@QEBA?AW4CloseStatusCode\@\@XZ
     */
    MCAPI enum class CloseStatusCode getCloseCode() const;
    /**
     * @symbol  ?getHeader\@RakWebSocketDataFrame\@\@QEBAAEBURakWebSocketDataFrameHeader\@\@XZ
     */
    MCAPI struct RakWebSocketDataFrameHeader const & getHeader() const;
    /**
     * @symbol  ?getMessageType\@RakWebSocketDataFrame\@\@QEBA?AW4WebSocketMessageType\@\@XZ
     */
    MCAPI enum class WebSocketMessageType getMessageType() const;
    /**
     * @symbol  ?getParseState\@RakWebSocketDataFrame\@\@QEBA?AW4ParseState\@1\@XZ
     */
    MCAPI enum class RakWebSocketDataFrame::ParseState getParseState() const;
    /**
     * @symbol  ?getPayload\@RakWebSocketDataFrame\@\@QEBAAEBVBitStream\@RakNet\@\@XZ
     */
    MCAPI class RakNet::BitStream const & getPayload() const;
    /**
     * @symbol  ?getPayloadAsString\@RakWebSocketDataFrame\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getPayloadAsString() const;
    /**
     * @symbol  ??1RakWebSocketDataFrame\@\@QEAA\@XZ
     */
    MCAPI ~RakWebSocketDataFrame();
    /**
     * @symbol  ?writeFrameToStream\@RakWebSocketDataFrame\@\@SAXAEAVBitStream\@RakNet\@\@PEBEIW4OpCode\@\@_NI\@Z
     */
    MCAPI static void writeFrameToStream(class RakNet::BitStream &, unsigned char const *, unsigned int, enum class OpCode, bool, unsigned int);

//private:
    /**
     * @symbol  ?_isContinuation\@RakWebSocketDataFrame\@\@CA_NE\@Z
     */
    MCAPI static bool _isContinuation(unsigned char);
    /**
     * @symbol  ?_isControl\@RakWebSocketDataFrame\@\@CA_NE\@Z
     */
    MCAPI static bool _isControl(unsigned char);
    /**
     * @symbol  ?_isNonControl\@RakWebSocketDataFrame\@\@CA_NE\@Z
     */
    MCAPI static bool _isNonControl(unsigned char);
    /**
     * @symbol  ?_isUnsupported\@RakWebSocketDataFrame\@\@CA_NE\@Z
     */
    MCAPI static bool _isUnsupported(unsigned char);
    /**
     * @symbol  ?_maskUnmaskData\@RakWebSocketDataFrame\@\@CAXPEAEIII\@Z
     */
    MCAPI static void _maskUnmaskData(unsigned char *, unsigned int, unsigned int, unsigned int);

private:

};