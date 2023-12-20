#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/FecHeaderWriter.h"
#include "mc/deps/webrtc/ForwardErrorCorrection.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FecHeaderWriter; }
// clang-format on

namespace webrtc {

class FlexfecHeaderWriter : public ::webrtc::FecHeaderWriter {
public:
    // prevent constructor by default
    FlexfecHeaderWriter& operator=(FlexfecHeaderWriter const&);
    FlexfecHeaderWriter(FlexfecHeaderWriter const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FlexfecHeaderWriter@webrtc@@UEAA@XZ
    virtual ~FlexfecHeaderWriter();

    // vIndex: 1, symbol: ?MinPacketMaskSize@FlexfecHeaderWriter@webrtc@@UEBA_KPEBE_K@Z
    virtual uint64 MinPacketMaskSize(uchar const*, uint64) const;

    // vIndex: 2, symbol: ?FecHeaderSize@FlexfecHeaderWriter@webrtc@@UEBA_K_K@Z
    virtual uint64 FecHeaderSize(uint64) const;

    // vIndex: 3, symbol:
    // ?FinalizeFecHeader@FlexfecHeaderWriter@webrtc@@UEBAXIGPEBE_KPEAVPacket@ForwardErrorCorrection@2@@Z
    virtual void
    FinalizeFecHeader(uint, ushort, uchar const*, uint64, class webrtc::ForwardErrorCorrection::Packet*) const;

    // symbol: ??0FlexfecHeaderWriter@webrtc@@QEAA@XZ
    MCAPI FlexfecHeaderWriter();

    // NOLINTEND
};

}; // namespace webrtc
