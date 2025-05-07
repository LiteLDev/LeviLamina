#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class SendPacketObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SendPacketObserver() = default;

    // vIndex: 1
    virtual void OnSendPacket(::std::optional<ushort>, ::webrtc::Timestamp, uint) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
