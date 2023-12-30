#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcpPacket.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class RtcpPacket; }
// clang-format on

namespace webrtc::rtcp {

class Bye : public ::webrtc::rtcp::RtcpPacket {
public:
    // prevent constructor by default
    Bye& operator=(Bye const&);
    Bye(Bye const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Bye@rtcp@webrtc@@UEAA@XZ
    virtual ~Bye();

    // vIndex: 1, symbol: ?BlockLength@Bye@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@Bye@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ??0Bye@rtcp@webrtc@@QEAA@XZ
    MCAPI Bye();

    // symbol: ?Parse@Bye@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ?SetCsrcs@Bye@rtcp@webrtc@@QEAA_NV?$vector@IV?$allocator@I@std@@@std@@@Z
    MCAPI bool SetCsrcs(std::vector<uint>);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
