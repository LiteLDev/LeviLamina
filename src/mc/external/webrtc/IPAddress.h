#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class IPAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> family_;
    union {
        ::ll::UntypedStorage<4, 16> mUnk9f400a;
        ::ll::UntypedStorage<2, 16> mUnkeb8c53;
    } u_;
    // NOLINTEND

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
