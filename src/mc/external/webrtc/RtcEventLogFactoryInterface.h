#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class RtcEventLog; }
// clang-format on

namespace webrtc {

class RtcEventLogFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcEventLogFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::RtcEventLog> Create(::webrtc::Environment const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
