#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PortInterface; }
namespace webrtc { class StunMessage; }
// clang-format on

namespace webrtc {

class TurnCustomizer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void MaybeModifyOutgoingStunMessage(::webrtc::PortInterface*, ::webrtc::StunMessage*) = 0;

    virtual bool AllowChannelData(::webrtc::PortInterface*, void const*, uint64, bool) = 0;

    virtual ~TurnCustomizer() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
