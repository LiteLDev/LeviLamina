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
    virtual ~NetworkControllerFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::NetworkControllerInterface> Create(::webrtc::NetworkControllerConfig) = 0;

    virtual ::webrtc::TimeDelta GetProcessInterval() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
