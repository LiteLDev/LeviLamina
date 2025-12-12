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
    MCNAPI void Clear();

    MCNAPI bool EqualIPs(::rtc::SocketAddress const& addr) const;

    MCNAPI bool EqualPorts(::rtc::SocketAddress const& addr) const;

    MCNAPI ::std::string HostAsSensitiveURIString() const;

    MCNAPI ::std::string HostAsURIString() const;

    MCNAPI bool IsAnyIP() const;

    MCNAPI bool IsLoopbackIP() const;

    MCNAPI bool IsNil() const;

    MCNAPI bool IsPrivateIP() const;

    MCNAPI bool IsUnresolvedIP() const;

    MCNAPI ::std::string PortAsString() const;

    MCNAPI void SetIP(::std::string_view hostname);

    MCNAPI void SetIP(::rtc::IPAddress const& ip);

    MCNAPI void SetPort(int port);

    MCNAPI void SetResolvedIP(::rtc::IPAddress const& ip);

    MCNAPI SocketAddress();

    MCNAPI SocketAddress(::rtc::SocketAddress const& addr);

    MCNAPI SocketAddress(::std::string_view hostname, int port);

    MCNAPI SocketAddress(::rtc::IPAddress const& ip, int port);

    MCNAPI ::std::string ToSensitiveNameAndAddressString() const;

    MCNAPI ::std::string ToSensitiveString() const;

    MCNAPI uint64 ToSockAddrStorage(::sockaddr_storage* addr) const;

    MCNAPI ::std::string ToString() const;

    MCNAPI ::rtc::IPAddress const& ipaddr() const;

    MCNAPI bool operator<(::rtc::SocketAddress const& addr) const;

    MCNAPI ::rtc::SocketAddress& operator=(::rtc::SocketAddress const& addr);

    MCNAPI bool operator==(::rtc::SocketAddress const& addr) const;

    MCNAPI ushort port() const;

    MCNAPI ~SocketAddress();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::rtc::SocketAddress const& addr);

    MCNAPI void* $ctor(::std::string_view hostname, int port);

    MCNAPI void* $ctor(::rtc::IPAddress const& ip, int port);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
