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
    virtual ~IceTransportFactory() = default;

    virtual ::webrtc::scoped_refptr<::webrtc::IceTransportInterface>
    CreateIceTransport(::std::string const& transport_name, int component, ::webrtc::IceTransportInit init) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
