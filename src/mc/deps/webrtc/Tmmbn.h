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
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc::rtcp {

class Tmmbn : public ::webrtc::rtcp::Rtpfb {
public:
    // prevent constructor by default
    Tmmbn& operator=(Tmmbn const&);
    Tmmbn(Tmmbn const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Tmmbn@rtcp@webrtc@@UEAA@XZ
    virtual ~Tmmbn();

    // vIndex: 1, symbol: ?BlockLength@Tmmbn@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@Tmmbn@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ?AddTmmbr@Tmmbn@rtcp@webrtc@@QEAAXAEBVTmmbItem@23@@Z
    MCAPI void AddTmmbr(class webrtc::rtcp::TmmbItem const&);

    // symbol: ?Parse@Tmmbn@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ??0Tmmbn@rtcp@webrtc@@QEAA@XZ
    MCAPI Tmmbn();

    // NOLINTEND
};

}; // namespace webrtc::rtcp
