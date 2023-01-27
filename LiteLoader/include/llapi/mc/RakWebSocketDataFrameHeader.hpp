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
     * @hash   -1723885349
     * @symbol  ??0RakWebSocketDataFrameHeader\@\@QEAA\@_N0000W4OpCode\@\@E\@Z
     */
    MCAPI RakWebSocketDataFrameHeader(bool, bool, bool, bool, bool, enum class OpCode, unsigned char);
    /**
     * @hash   -1142954399
     * @symbol  ??0RakWebSocketDataFrameHeader\@\@QEAA\@XZ
     */
    MCAPI RakWebSocketDataFrameHeader();
    /**
     * @hash   -270401544
     * @symbol  ?getFinBit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getFinBit() const;
    /**
     * @hash   -892018356
     * @symbol  ?getMaskBit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getMaskBit() const;
    /**
     * @hash   2072713600
     * @symbol  ?getOpCode\@RakWebSocketDataFrameHeader\@\@QEBA?AW4OpCode\@\@XZ
     */
    MCAPI enum class OpCode getOpCode() const;
    /**
     * @hash   -108828797
     * @symbol  ?getPayloadLength\@RakWebSocketDataFrameHeader\@\@QEBAEXZ
     */
    MCAPI unsigned char getPayloadLength() const;
    /**
     * @hash   -1184720292
     * @symbol  ?getRSV1Bit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getRSV1Bit() const;
    /**
     * @hash   682178666
     * @symbol  ?getRSV2Bit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getRSV2Bit() const;
    /**
     * @hash   -1745889672
     * @symbol  ?getRSV3Bit\@RakWebSocketDataFrameHeader\@\@QEBAHXZ
     */
    MCAPI int getRSV3Bit() const;
    /**
     * @hash   58864945
     * @symbol  ??1RakWebSocketDataFrameHeader\@\@QEAA\@XZ
     */
    MCAPI ~RakWebSocketDataFrameHeader();

};