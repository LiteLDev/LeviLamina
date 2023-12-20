#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Psfb.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Psfb; }
// clang-format on

namespace webrtc::rtcp {

class Fir : public ::webrtc::rtcp::Psfb {
public:
    // prevent constructor by default
    Fir& operator=(Fir const&);
    Fir(Fir const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Fir@rtcp@webrtc@@UEAA@XZ
    virtual ~Fir();

    // vIndex: 1, symbol: ?BlockLength@Fir@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@Fir@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ??0Fir@rtcp@webrtc@@QEAA@XZ
    MCAPI Fir();

    // symbol: ?Parse@Fir@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
