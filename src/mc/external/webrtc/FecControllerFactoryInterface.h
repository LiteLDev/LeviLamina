#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class FecController; }
// clang-format on

namespace webrtc {

class FecControllerFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FecControllerFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::FecController> CreateFecController(::webrtc::Environment const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
