#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceControllerInterface; }
namespace webrtc { struct IceControllerFactoryArgs; }
// clang-format on

namespace webrtc {

class IceControllerFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IceControllerFactoryInterface();

    virtual ::std::unique_ptr<::webrtc::IceControllerInterface>
    Create(::webrtc::IceControllerFactoryArgs const& args) = 0;
    // NOLINTEND
};

} // namespace webrtc
