/**
 * @file  MC/RakWebSocketDataFrameHeader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1806182859
     * @symbol ??0RakWebSocketDataFrameHeader@@QEAA@_N0000W4OpCode@@E@Z
     */
    MCAPI RakWebSocketDataFrameHeader(bool, bool, bool, bool, bool, enum OpCode, unsigned char);
    /**
     * @hash   -301195279
     * @symbol ??0RakWebSocketDataFrameHeader@@QEAA@XZ
     */
    MCAPI RakWebSocketDataFrameHeader();
    /**
     * @hash   -1035300632
     * @symbol ?getFinBit@RakWebSocketDataFrameHeader@@QEBAHXZ
     */
    MCAPI int getFinBit() const;
    /**
     * @hash   -1656917444
     * @symbol ?getMaskBit@RakWebSocketDataFrameHeader@@QEBAHXZ
     */
    MCAPI int getMaskBit() const;
    /**
     * @hash   1307814512
     * @symbol ?getOpCode@RakWebSocketDataFrameHeader@@QEBA?AW4OpCode@@XZ
     */
    MCAPI enum OpCode getOpCode() const;
    /**
     * @hash   -873727885
     * @symbol ?getPayloadLength@RakWebSocketDataFrameHeader@@QEBAEXZ
     */
    MCAPI unsigned char getPayloadLength() const;
    /**
     * @hash   -1949619380
     * @symbol ?getRSV1Bit@RakWebSocketDataFrameHeader@@QEBAHXZ
     */
    MCAPI int getRSV1Bit() const;
    /**
     * @hash   -82720422
     * @symbol ?getRSV2Bit@RakWebSocketDataFrameHeader@@QEBAHXZ
     */
    MCAPI int getRSV2Bit() const;
    /**
     * @hash   1784178536
     * @symbol ?getRSV3Bit@RakWebSocketDataFrameHeader@@QEBAHXZ
     */
    MCAPI int getRSV3Bit() const;
    /**
     * @hash   -33022031
     * @symbol ??1RakWebSocketDataFrameHeader@@QEAA@XZ
     */
    MCAPI ~RakWebSocketDataFrameHeader();

};