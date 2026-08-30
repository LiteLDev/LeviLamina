#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceTransportInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceTransportInternal; }
// clang-format on

namespace webrtc {

class DefaultIceTransport : public ::webrtc::IceTransportInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd64eca;
    ::ll::UntypedStorage<8, 8> mUnk5039b5;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultIceTransport& operator=(DefaultIceTransport const&);
    DefaultIceTransport(DefaultIceTransport const&);
    DefaultIceTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultIceTransport() /*override*/ = default;

    virtual ::webrtc::IceTransportInternal* internal() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::IceTransportInternal* $internal();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
