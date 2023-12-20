#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/ForwardErrorCorrection.h"

namespace webrtc {

class FecHeaderReader {
public:
    // prevent constructor by default
    FecHeaderReader& operator=(FecHeaderReader const&);
    FecHeaderReader(FecHeaderReader const&);
    FecHeaderReader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FecHeaderReader@webrtc@@UEAA@XZ
    virtual ~FecHeaderReader();

    // vIndex: 1, symbol:
    // ?ReadFecHeader@FlexfecHeaderReader@webrtc@@UEBA_NPEAVReceivedFecPacket@ForwardErrorCorrection@2@@Z
    virtual bool ReadFecHeader(class webrtc::ForwardErrorCorrection::ReceivedFecPacket*) const = 0;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0FecHeaderReader@webrtc@@IEAA@_K0@Z
    MCAPI FecHeaderReader(uint64, uint64);

    // NOLINTEND
};

}; // namespace webrtc
