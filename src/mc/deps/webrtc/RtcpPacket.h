#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

namespace webrtc::rtcp {

class RtcpPacket {
public:
    // prevent constructor by default
    RtcpPacket& operator=(RtcpPacket const&);
    RtcpPacket(RtcpPacket const&);
    RtcpPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RtcpPacket@rtcp@webrtc@@UEAA@XZ
    virtual ~RtcpPacket() = default;

    // vIndex: 1, symbol: ?BlockLength@App@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const = 0;

    // vIndex: 2, symbol:
    // ?Create@App@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const = 0;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?HeaderLength@RtcpPacket@rtcp@webrtc@@IEBA_KXZ
    MCAPI uint64 HeaderLength() const;

    // symbol:
    // ?OnBufferFull@RtcpPacket@rtcp@webrtc@@IEBA_NPEAEPEA_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    MCAPI bool
    OnBufferFull(uchar*, uint64*, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ?CreateHeader@RtcpPacket@rtcp@webrtc@@KAX_KE0PEAEPEA_K@Z
    MCAPI static void CreateHeader(uint64, uchar, uint64, uchar*, uint64*);

    // symbol: ?CreateHeader@RtcpPacket@rtcp@webrtc@@KAX_KE0_NPEAEPEA_K@Z
    MCAPI static void CreateHeader(uint64, uchar, uint64, bool, uchar*, uint64*);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
