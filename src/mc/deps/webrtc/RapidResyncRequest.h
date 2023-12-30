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

class RapidResyncRequest : public ::webrtc::rtcp::Rtpfb {
public:
    // prevent constructor by default
    RapidResyncRequest& operator=(RapidResyncRequest const&);
    RapidResyncRequest(RapidResyncRequest const&);
    RapidResyncRequest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RapidResyncRequest@rtcp@webrtc@@UEAA@XZ
    virtual ~RapidResyncRequest();

    // vIndex: 1, symbol: ?BlockLength@RapidResyncRequest@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@RapidResyncRequest@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ?Parse@RapidResyncRequest@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
