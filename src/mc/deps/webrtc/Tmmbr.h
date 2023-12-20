#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Rtpfb.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Rtpfb; }
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc::rtcp {

class Tmmbr : public ::webrtc::rtcp::Rtpfb {
public:
    // prevent constructor by default
    Tmmbr& operator=(Tmmbr const&);
    Tmmbr(Tmmbr const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Tmmbr@rtcp@webrtc@@UEAA@XZ
    virtual ~Tmmbr();

    // vIndex: 1, symbol: ?BlockLength@Tmmbr@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@Tmmbr@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ?AddTmmbr@Tmmbr@rtcp@webrtc@@QEAAXAEBVTmmbItem@23@@Z
    MCAPI void AddTmmbr(class webrtc::rtcp::TmmbItem const&);

    // symbol: ?Parse@Tmmbr@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ??0Tmmbr@rtcp@webrtc@@QEAA@XZ
    MCAPI Tmmbr();

    // NOLINTEND
};

}; // namespace webrtc::rtcp
