#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceTransportFactory.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceTransportInterface; }
namespace webrtc { struct IceTransportInit; }
// clang-format on

namespace webrtc {

class DefaultIceTransportFactory : public ::webrtc::IceTransportFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefaultIceTransportFactory() /*override*/ = default;

    // vIndex: 1
    virtual ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> CreateIceTransport(
        ::std::string const&       transport_name,
        int                        component,
        ::webrtc::IceTransportInit init
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::scoped_refptr<::webrtc::IceTransportInterface>
    $CreateIceTransport(::std::string const& transport_name, int component, ::webrtc::IceTransportInit init);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
