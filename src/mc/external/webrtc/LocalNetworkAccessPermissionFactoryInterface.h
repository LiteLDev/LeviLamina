#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class LocalNetworkAccessPermissionInterface; }
// clang-format on

namespace webrtc {

class LocalNetworkAccessPermissionFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalNetworkAccessPermissionFactoryInterface();

    virtual ::std::unique_ptr<::webrtc::LocalNetworkAccessPermissionInterface> Create() = 0;
    // NOLINTEND
};

} // namespace webrtc
