#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceTransportInternal; }
// clang-format on

namespace webrtc {

class IceTransportInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::IceTransportInternal* internal() = 0;

    virtual ~IceTransportInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
