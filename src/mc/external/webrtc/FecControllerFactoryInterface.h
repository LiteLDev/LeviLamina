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
    // vIndex: 0
    virtual ~FecControllerFactoryInterface() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::FecController> CreateFecController(::webrtc::Environment const&) = 0;
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
