#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct PacketOptions; }
// clang-format on

namespace webrtc {

class Transport {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool SendRtp(::rtc::ArrayView<uchar const>, ::webrtc::PacketOptions const&) = 0;

    // vIndex: 1
    virtual bool SendRtcp(::rtc::ArrayView<uchar const>) = 0;

    // vIndex: 2
    virtual ~Transport() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
