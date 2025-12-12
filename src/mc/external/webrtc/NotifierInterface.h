#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ObserverInterface; }
// clang-format on

namespace webrtc {

class NotifierInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void RegisterObserver(::webrtc::ObserverInterface*) = 0;

    virtual void UnregisterObserver(::webrtc::ObserverInterface*) = 0;

    virtual ~NotifierInterface() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
