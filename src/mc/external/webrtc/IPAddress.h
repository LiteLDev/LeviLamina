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
    MCAPI ::webrtc::IPAddress AsIPv6Address() const;

    MCFOLD bool IsNil() const;

    MCAPI ::std::string ToSensitiveString() const;

    MCAPI ::std::string ToString() const;

    MCAPI ::in_addr ipv4_address() const;

    MCAPI ::in6_addr ipv6_address() const;

    MCAPI bool operator!=(::webrtc::IPAddress const& other) const;

    MCAPI bool operator<(::webrtc::IPAddress const& other) const;

    MCAPI bool operator==(::webrtc::IPAddress const& other) const;

    MCAPI int overhead() const;

    MCAPI uint v4AddressAsHostOrderInteger() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
