#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct PacketOptions; }
// clang-format on

namespace webrtc {

class Transport {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool SendRtp(::webrtc::ArrayView<uchar const, 18446744073709546905>, ::webrtc::PacketOptions const&) = 0;

    virtual bool SendRtcp(::webrtc::ArrayView<uchar const, 18446744073709546905>, ::webrtc::PacketOptions const&) = 0;

    virtual ~Transport() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
