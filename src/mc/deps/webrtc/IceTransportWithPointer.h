#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/IceTransportInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
namespace webrtc { class IceTransportInterface; }
// clang-format on

namespace webrtc {

class IceTransportWithPointer : public ::webrtc::IceTransportInterface {
public:
    // prevent constructor by default
    IceTransportWithPointer& operator=(IceTransportWithPointer const&);
    IceTransportWithPointer(IceTransportWithPointer const&);
    IceTransportWithPointer();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1IceTransportWithPointer@webrtc@@MEAA@XZ
    virtual ~IceTransportWithPointer();

    // vIndex: 3, symbol: ?internal@IceTransportWithPointer@webrtc@@UEAAPEAVIceTransportInternal@cricket@@XZ
    virtual class cricket::IceTransportInternal* internal();

    // symbol: ?Clear@IceTransportWithPointer@webrtc@@QEAAXXZ
    MCAPI void Clear();

    // NOLINTEND
};

}; // namespace webrtc
