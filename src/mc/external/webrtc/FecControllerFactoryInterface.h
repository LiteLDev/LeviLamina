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
    // prevent constructor by default
    FecControllerFactoryInterface& operator=(FecControllerFactoryInterface const&);
    FecControllerFactoryInterface(FecControllerFactoryInterface const&);
    FecControllerFactoryInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FecControllerFactoryInterface();

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::FecController> CreateFecController(::webrtc::Environment const&) = 0;
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
};

} // namespace webrtc
