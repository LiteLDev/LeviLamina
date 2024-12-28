#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
// clang-format on

namespace rtc {

class SocketAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd4ada7;
    ::ll::UntypedStorage<4, 32> mUnk4f0cfd;
    ::ll::UntypedStorage<2, 2>  mUnk2c2892;
    ::ll::UntypedStorage<4, 4>  mUnk595326;
    ::ll::UntypedStorage<1, 1>  mUnkf5648f;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Clear();

    MCAPI bool EqualIPs(::rtc::SocketAddress const&) const;

    MCAPI bool EqualPorts(::rtc::SocketAddress const&) const;

    MCAPI bool FromString(::std::string_view);

    MCAPI ::std::string HostAsSensitiveURIString() const;

    MCAPI ::std::string HostAsURIString() const;

    MCAPI bool IsAnyIP() const;

    MCAPI bool IsLoopbackIP() const;

    MCAPI bool IsNil() const;

    MCAPI bool IsPrivateIP() const;

    MCAPI bool IsUnresolvedIP() const;

    MCAPI ::std::string PortAsString() const;

    MCAPI void SetIP(::rtc::IPAddress const&);

    MCAPI void SetIP(::std::string_view);

    MCAPI void SetPort(int);

    MCAPI void SetResolvedIP(::rtc::IPAddress const&);

    MCAPI SocketAddress();

    MCAPI SocketAddress(::rtc::SocketAddress const&);

    MCAPI SocketAddress(::rtc::IPAddress const&, int);

    MCAPI SocketAddress(::std::string_view, int);

    MCAPI ::std::string ToSensitiveNameAndAddressString() const;

    MCAPI ::std::string ToSensitiveString() const;

    MCAPI uint64 ToSockAddrStorage(::sockaddr_storage*) const;

    MCAPI ::std::string ToString() const;

    MCAPI ::rtc::IPAddress const& ipaddr() const;

    MCAPI bool operator<(::rtc::SocketAddress const&) const;

    MCAPI ::rtc::SocketAddress& operator=(::rtc::SocketAddress const&);

    MCAPI bool operator==(::rtc::SocketAddress const&) const;

    MCAPI ushort port() const;

    MCAPI ~SocketAddress();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::rtc::SocketAddress const&);

    MCAPI void* $ctor(::rtc::IPAddress const&, int);

    MCAPI void* $ctor(::std::string_view, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
