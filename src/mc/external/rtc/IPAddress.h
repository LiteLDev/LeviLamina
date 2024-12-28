#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class IPAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk63462f;
    ::ll::UntypedStorage<2, 16> mUnk9e8d7c;
    // NOLINTEND

public:
    // prevent constructor by default
    IPAddress& operator=(IPAddress const&);
    IPAddress(IPAddress const&);
    IPAddress();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPAddress();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::IPAddress AsIPv6Address() const;

    MCAPI bool IsNil() const;

    MCAPI ::std::string ToSensitiveString() const;

    MCAPI ::std::string ToString() const;

    MCAPI ::in_addr ipv4_address() const;

    MCAPI ::in6_addr ipv6_address() const;

    MCAPI bool operator!=(::rtc::IPAddress const&) const;

    MCAPI bool operator<(::rtc::IPAddress const&) const;

    MCAPI bool operator==(::rtc::IPAddress const&) const;

    MCAPI int overhead() const;

    MCAPI uint v4AddressAsHostOrderInteger() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
