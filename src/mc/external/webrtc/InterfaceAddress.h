#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IPAddress.h"

namespace webrtc {

class InterfaceAddress : public ::webrtc::IPAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka2e161;
    ::ll::UntypedStorage<4, 4> mUnkfa7389;
    // NOLINTEND

public:
    // prevent constructor by default
    InterfaceAddress(InterfaceAddress const&);
    InterfaceAddress();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InterfaceAddress() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string ToString() const;

    MCNAPI ::webrtc::InterfaceAddress const& operator=(::webrtc::InterfaceAddress const& other);

    MCNAPI bool operator==(::webrtc::InterfaceAddress const& other) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
