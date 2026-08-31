#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class IPAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc3f00a;
    ::ll::UntypedStorage<4, 16> mUnk286fd5;
    // NOLINTEND

public:
    // prevent constructor by default
    IPAddress& operator=(IPAddress const&);
    IPAddress(IPAddress const&);
    IPAddress();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPAddress();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::IPAddress AsIPv6Address() const;

    MCNAPI bool IsNil() const;

    MCNAPI ::std::string ToSensitiveString() const;

    MCNAPI ::std::string ToString() const;

    MCNAPI ::in_addr ipv4_address() const;

    MCNAPI ::in6_addr ipv6_address() const;

    MCNAPI bool operator!=(::webrtc::IPAddress const& other) const;

    MCNAPI bool operator<(::webrtc::IPAddress const& other) const;

    MCNAPI bool operator==(::webrtc::IPAddress const& other) const;

    MCNAPI int overhead() const;

    MCNAPI uint v4AddressAsHostOrderInteger() const;
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
