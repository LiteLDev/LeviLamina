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
    virtual ~IPAddress() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::IPAddress AsIPv6Address() const;

    MCNAPI bool IsNil() const;

    MCNAPI ::std::string ToSensitiveString() const;

    MCNAPI ::std::string ToString() const;

    MCNAPI ::in_addr ipv4_address() const;

    MCNAPI ::in6_addr ipv6_address() const;

    MCNAPI bool operator!=(::rtc::IPAddress const& other) const;

    MCNAPI bool operator<(::rtc::IPAddress const& other) const;

    MCNAPI bool operator==(::rtc::IPAddress const& other) const;

    MCNAPI int overhead() const;

    MCNAPI uint v4AddressAsHostOrderInteger() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
