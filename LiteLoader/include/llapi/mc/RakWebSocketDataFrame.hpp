/**
 * @file  RakWebSocketDataFrame.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   2024812324
     * @symbol ??0RakWebSocketDataFrame@@QEAA@XZ
     */
    MCAPI RakWebSocketDataFrame();
    /**
     * @hash   -2014757016
     * @symbol ?getCloseCode@RakWebSocketDataFrame@@QEBA?AW4CloseStatusCode@@XZ
     */
    MCAPI enum class CloseStatusCode getCloseCode() const;
    /**
     * @hash   -402159728
     * @symbol ?getHeader@RakWebSocketDataFrame@@QEBAAEBURakWebSocketDataFrameHeader@@XZ
     */
    MCAPI struct RakWebSocketDataFrameHeader const & getHeader() const;
    /**
     * @hash   1167801124
     * @symbol ?getMessageType@RakWebSocketDataFrame@@QEBA?AW4WebSocketMessageType@@XZ
     */
    MCAPI enum class WebSocketMessageType getMessageType() const;
    /**
     * @hash   -220644965
     * @symbol ?getParseState@RakWebSocketDataFrame@@QEBA?AW4ParseState@1@XZ
     */
    MCAPI enum class RakWebSocketDataFrame::ParseState getParseState() const;
    /**
     * @hash   2113310348
     * @symbol ?getPayload@RakWebSocketDataFrame@@QEBAAEBVBitStream@RakNet@@XZ
     */
    MCAPI class RakNet::BitStream const & getPayload() const;
    /**
     * @hash   1779866494
     * @symbol ?getPayloadAsString@RakWebSocketDataFrame@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getPayloadAsString() const;
    /**
     * @hash   1371124084
     * @symbol ??1RakWebSocketDataFrame@@QEAA@XZ
     */
    MCAPI ~RakWebSocketDataFrame();
    /**
     * @hash   -924120282
     * @symbol ?writeFrameToStream@RakWebSocketDataFrame@@SAXAEAVBitStream@RakNet@@PEBEIW4OpCode@@_NI@Z
     */
    MCAPI static void writeFrameToStream(class RakNet::BitStream &, unsigned char const *, unsigned int, enum class OpCode, bool, unsigned int);

//private:
    /**
     * @hash   -701576833
     * @symbol ?_isContinuation@RakWebSocketDataFrame@@CA_NE@Z
     */
    MCAPI static bool _isContinuation(unsigned char);
    /**
     * @hash   79541019
     * @symbol ?_isControl@RakWebSocketDataFrame@@CA_NE@Z
     */
    MCAPI static bool _isControl(unsigned char);
    /**
     * @hash   1672071238
     * @symbol ?_isNonControl@RakWebSocketDataFrame@@CA_NE@Z
     */
    MCAPI static bool _isNonControl(unsigned char);
    /**
     * @hash   -808862237
     * @symbol ?_isUnsupported@RakWebSocketDataFrame@@CA_NE@Z
     */
    MCAPI static bool _isUnsupported(unsigned char);
    /**
     * @hash   -152789251
     * @symbol ?_maskUnmaskData@RakWebSocketDataFrame@@CAXPEAEIII@Z
     */
    MCAPI static void _maskUnmaskData(unsigned char *, unsigned int, unsigned int, unsigned int);

private:

};