#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NetworkControllerInterface; }
namespace webrtc { class TimeDelta; }
namespace webrtc { struct NetworkControllerConfig; }
// clang-format on

namespace webrtc {

class NetworkControllerFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkControllerFactoryInterface() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::NetworkControllerInterface> Create(::webrtc::NetworkControllerConfig) = 0;

    // vIndex: 2
    virtual ::webrtc::TimeDelta GetProcessInterval() const = 0;
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
