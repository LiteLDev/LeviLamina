#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class SendPacketObserver {
public:
    // prevent constructor by default
    SendPacketObserver& operator=(SendPacketObserver const&);
    SendPacketObserver(SendPacketObserver const&);
    SendPacketObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SendPacketObserver();

    // vIndex: 1
    virtual void OnSendPacket(::std::optional<ushort>, ::webrtc::Timestamp, uint) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
