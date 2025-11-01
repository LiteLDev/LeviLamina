#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceTransportInterface; }
namespace webrtc { struct IceTransportInit; }
// clang-format on

namespace webrtc {

class IceTransportFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceTransportFactory() = default;

    // vIndex: 1
    virtual ::webrtc::scoped_refptr<::webrtc::IceTransportInterface>
    CreateIceTransport(::std::string const&, int, ::webrtc::IceTransportInit) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
