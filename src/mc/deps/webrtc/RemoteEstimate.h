#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/App.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class App; }
// clang-format on

namespace webrtc::rtcp {

class RemoteEstimate : public ::webrtc::rtcp::App {
public:
    // prevent constructor by default
    RemoteEstimate& operator=(RemoteEstimate const&);
    RemoteEstimate(RemoteEstimate const&);
    RemoteEstimate();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RemoteEstimate@rtcp@webrtc@@UEAA@XZ
    virtual ~RemoteEstimate();

    // symbol: ?ParseData@RemoteEstimate@rtcp@webrtc@@QEAA_NXZ
    MCAPI bool ParseData();

    // symbol: ??0RemoteEstimate@rtcp@webrtc@@QEAA@$$QEAVApp@12@@Z
    MCAPI explicit RemoteEstimate(class webrtc::rtcp::App&&);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
