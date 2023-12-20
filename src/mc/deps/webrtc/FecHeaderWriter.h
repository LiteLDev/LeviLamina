#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/ForwardErrorCorrection.h"

namespace webrtc {

class FecHeaderWriter {
public:
    // prevent constructor by default
    FecHeaderWriter& operator=(FecHeaderWriter const&);
    FecHeaderWriter(FecHeaderWriter const&);
    FecHeaderWriter();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FecHeaderWriter@webrtc@@UEAA@XZ
    virtual ~FecHeaderWriter();

    // vIndex: 1, symbol: ?MinPacketMaskSize@UlpfecHeaderWriter@webrtc@@UEBA_KPEBE_K@Z
    virtual uint64 MinPacketMaskSize(uchar const*, uint64) const = 0;

    // vIndex: 2, symbol: ?FecHeaderSize@UlpfecHeaderWriter@webrtc@@UEBA_K_K@Z
    virtual uint64 FecHeaderSize(uint64) const = 0;

    // vIndex: 3, symbol:
    // ?FinalizeFecHeader@UlpfecHeaderWriter@webrtc@@UEBAXIGPEBE_KPEAVPacket@ForwardErrorCorrection@2@@Z
    virtual void
    FinalizeFecHeader(uint, ushort, uchar const*, uint64, class webrtc::ForwardErrorCorrection::Packet*) const = 0;

    // symbol: ?MaxFecPackets@FecHeaderWriter@webrtc@@QEBA_KXZ
    MCAPI uint64 MaxFecPackets() const;

    // symbol: ?MaxMediaPackets@FecHeaderWriter@webrtc@@QEBA_KXZ
    MCAPI uint64 MaxMediaPackets() const;

    // symbol: ?MaxPacketOverhead@FecHeaderWriter@webrtc@@QEBA_KXZ
    MCAPI uint64 MaxPacketOverhead() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0FecHeaderWriter@webrtc@@IEAA@_K00@Z
    MCAPI FecHeaderWriter(uint64, uint64, uint64);

    // NOLINTEND
};

}; // namespace webrtc
