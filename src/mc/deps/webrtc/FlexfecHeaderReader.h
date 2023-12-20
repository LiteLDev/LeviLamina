#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/FecHeaderReader.h"
#include "mc/deps/webrtc/ForwardErrorCorrection.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FecHeaderReader; }
// clang-format on

namespace webrtc {

class FlexfecHeaderReader : public ::webrtc::FecHeaderReader {
public:
    // prevent constructor by default
    FlexfecHeaderReader& operator=(FlexfecHeaderReader const&);
    FlexfecHeaderReader(FlexfecHeaderReader const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FlexfecHeaderReader@webrtc@@UEAA@XZ
    virtual ~FlexfecHeaderReader();

    // vIndex: 1, symbol:
    // ?ReadFecHeader@FlexfecHeaderReader@webrtc@@UEBA_NPEAVReceivedFecPacket@ForwardErrorCorrection@2@@Z
    virtual bool ReadFecHeader(class webrtc::ForwardErrorCorrection::ReceivedFecPacket*) const;

    // symbol: ??0FlexfecHeaderReader@webrtc@@QEAA@XZ
    MCAPI FlexfecHeaderReader();

    // NOLINTEND
};

}; // namespace webrtc
