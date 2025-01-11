#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class PortInterface; }
namespace cricket { class StunMessage; }
// clang-format on

namespace webrtc {

class TurnCustomizer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void MaybeModifyOutgoingStunMessage(::cricket::PortInterface*, ::cricket::StunMessage*) = 0;

    // vIndex: 1
    virtual bool AllowChannelData(::cricket::PortInterface*, void const*, uint64, bool) = 0;

    // vIndex: 2
    virtual ~TurnCustomizer() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
