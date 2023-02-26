/**
 * @file  RakWebSocketDataFrameHeader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure RakWebSocketDataFrameHeader.
 *
 */
struct RakWebSocketDataFrameHeader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETDATAFRAMEHEADER
public:
    struct RakWebSocketDataFrameHeader& operator=(struct RakWebSocketDataFrameHeader const &) = delete;
    RakWebSocketDataFrameHeader(struct RakWebSocketDataFrameHeader const &) = delete;
#endif

public:
    /**
     * @symbol  ??0RakWebSocketDataFrameHeader\@\@QEAA\@_N0000W4OpCode\@\@E\@Z
     */
    MCAPI RakWebSocketDataFrameHeader(bool, bool, bool, bool, bool, enum class OpCode, unsigned char);
    /**
     * @symbol  ??0RakWebSocketDataFrameHeader\@\@QEAA\@XZ
     */
    MCAPI RakWebSocketDataFrameHeader();
    /**
     * @symbol  ?getFinBit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getFinBit() const;
    /**
     * @symbol  ?getMaskBit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getMaskBit() const;
    /**
     * @symbol  ?getOpCode\@RakWebSocketDataFrameHeader\@\@QEBA?AW4OpCode\@\@XZ
     */
    MCAPI enum class OpCode getOpCode() const;
    /**
     * @symbol  ?getPayloadLength\@RakWebSocketDataFrameHeader\@\@QEBAEXZ
     */
    MCAPI unsigned char getPayloadLength() const;
    /**
     * @symbol  ?getRSV1Bit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getRSV1Bit() const;
    /**
     * @symbol  ?getRSV2Bit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getRSV2Bit() const;
    /**
     * @symbol  ?getRSV3Bit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getRSV3Bit() const;
    /**
     * @symbol  ??1RakWebSocketDataFrameHeader\@\@QEAA\@XZ
     */
    MCAPI ~RakWebSocketDataFrameHeader();

};