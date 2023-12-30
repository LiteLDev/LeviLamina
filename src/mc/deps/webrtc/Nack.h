#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Rtpfb.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Rtpfb; }
// clang-format on

namespace webrtc::rtcp {

class Nack : public ::webrtc::rtcp::Rtpfb {
public:
    // prevent constructor by default
    Nack& operator=(Nack const&);
    Nack(Nack const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Nack@rtcp@webrtc@@UEAA@XZ
    virtual ~Nack();

    // vIndex: 1, symbol: ?BlockLength@Nack@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@Nack@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ??0Nack@rtcp@webrtc@@QEAA@XZ
    MCAPI Nack();

    // symbol: ?Parse@Nack@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ?SetPacketIds@Nack@rtcp@webrtc@@QEAAXV?$vector@GV?$allocator@G@std@@@std@@@Z
    MCAPI void SetPacketIds(std::vector<ushort>);

    // symbol: ?SetPacketIds@Nack@rtcp@webrtc@@QEAAXPEBG_K@Z
    MCAPI void SetPacketIds(ushort const*, uint64);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Pack@Nack@rtcp@webrtc@@AEAAXXZ
    MCAPI void Pack();

    // symbol: ?Unpack@Nack@rtcp@webrtc@@AEAAXXZ
    MCAPI void Unpack();

    // NOLINTEND
};

}; // namespace webrtc::rtcp
