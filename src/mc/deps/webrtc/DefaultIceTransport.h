#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/IceTransportInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
namespace cricket { class P2PTransportChannel; }
namespace webrtc { class IceTransportInterface; }
// clang-format on

namespace webrtc {

class DefaultIceTransport : public ::webrtc::IceTransportInterface {
public:
    // prevent constructor by default
    DefaultIceTransport& operator=(DefaultIceTransport const&);
    DefaultIceTransport(DefaultIceTransport const&);
    DefaultIceTransport();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1DefaultIceTransport@webrtc@@UEAA@XZ
    virtual ~DefaultIceTransport();

    // vIndex: 3, symbol: ?internal@DefaultIceTransport@webrtc@@UEAAPEAVIceTransportInternal@cricket@@XZ
    virtual class cricket::IceTransportInternal* internal();

    // symbol:
    // ??0DefaultIceTransport@webrtc@@QEAA@V?$unique_ptr@VP2PTransportChannel@cricket@@U?$default_delete@VP2PTransportChannel@cricket@@@std@@@std@@@Z
    MCAPI explicit DefaultIceTransport(std::unique_ptr<class cricket::P2PTransportChannel>);

    // NOLINTEND
};

}; // namespace webrtc
