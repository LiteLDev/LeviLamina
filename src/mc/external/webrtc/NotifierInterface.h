#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ObserverInterface; }
// clang-format on

namespace webrtc {

class NotifierInterface {
public:
    // prevent constructor by default
    NotifierInterface& operator=(NotifierInterface const&);
    NotifierInterface(NotifierInterface const&);
    NotifierInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void RegisterObserver(::webrtc::ObserverInterface*) = 0;

    // vIndex: 1
    virtual void UnregisterObserver(::webrtc::ObserverInterface*) = 0;

    // vIndex: 2
    virtual ~NotifierInterface();
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
