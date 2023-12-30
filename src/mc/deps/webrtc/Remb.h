#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Psfb.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Psfb; }
// clang-format on

namespace webrtc::rtcp {

class Remb : public ::webrtc::rtcp::Psfb {
public:
    // prevent constructor by default
    Remb& operator=(Remb const&);
    Remb(Remb const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Remb@rtcp@webrtc@@UEAA@XZ
    virtual ~Remb();

    // vIndex: 1, symbol: ?BlockLength@Remb@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@Remb@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ?Parse@Remb@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ??0Remb@rtcp@webrtc@@QEAA@XZ
    MCAPI Remb();

    // symbol: ?SetSsrcs@Remb@rtcp@webrtc@@QEAA_NV?$vector@IV?$allocator@I@std@@@std@@@Z
    MCAPI bool SetSsrcs(std::vector<uint>);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
