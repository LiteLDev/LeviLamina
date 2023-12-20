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

class UlpfecHeaderReader : public ::webrtc::FecHeaderReader {
public:
    // prevent constructor by default
    UlpfecHeaderReader& operator=(UlpfecHeaderReader const&);
    UlpfecHeaderReader(UlpfecHeaderReader const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UlpfecHeaderReader@webrtc@@UEAA@XZ
    virtual ~UlpfecHeaderReader();

    // vIndex: 1, symbol:
    // ?ReadFecHeader@UlpfecHeaderReader@webrtc@@UEBA_NPEAVReceivedFecPacket@ForwardErrorCorrection@2@@Z
    virtual bool ReadFecHeader(class webrtc::ForwardErrorCorrection::ReceivedFecPacket*) const;

    // symbol: ??0UlpfecHeaderReader@webrtc@@QEAA@XZ
    MCAPI UlpfecHeaderReader();

    // NOLINTEND
};

}; // namespace webrtc
