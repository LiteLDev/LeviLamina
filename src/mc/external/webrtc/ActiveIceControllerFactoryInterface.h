#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ActiveIceControllerInterface; }
namespace webrtc { struct ActiveIceControllerFactoryArgs; }
// clang-format on

namespace webrtc {

class ActiveIceControllerFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveIceControllerFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::ActiveIceControllerInterface>
    Create(::webrtc::ActiveIceControllerFactoryArgs const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
