#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/OpCode.h"

struct RakWebSocketDataFrameHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc92c3e;
    ::ll::UntypedStorage<1, 1> mUnk8d03d2;
    // NOLINTEND

public:
    // prevent constructor by default
    RakWebSocketDataFrameHeader& operator=(RakWebSocketDataFrameHeader const&);
    RakWebSocketDataFrameHeader(RakWebSocketDataFrameHeader const&);
    RakWebSocketDataFrameHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getFinBit() const;

    MCAPI int getMaskBit() const;

    MCAPI ::OpCode getOpCode() const;

    MCAPI uchar getPayloadLength() const;

    MCAPI int getRSV1Bit() const;

    MCAPI int getRSV2Bit() const;

    MCAPI int getRSV3Bit() const;
    // NOLINTEND
};
