#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IPAddress.h"
#include "mc/external/webrtc/IPAddressType.h"

namespace webrtc {

class SocketAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       hostname_;
    ::ll::TypedStorage<8, 32, ::webrtc::IPAddress> ip_;
    ::ll::TypedStorage<2, 2, ushort>               port_;
    ::ll::TypedStorage<4, 4, int>                  scope_id_;
    ::ll::TypedStorage<1, 1, bool>                 literal_;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Clear();

    MCAPI ::webrtc::IPAddressType GetIPAddressType() const;

    MCAPI ::std::string HostAsSensitiveURIString() const;

    MCAPI ::std::string HostAsURIString() const;

    MCAPI bool IsAnyIP() const;

    MCAPI bool IsLoopbackIP() const;

    MCAPI bool IsNil() const;

    MCAPI bool IsPrivateIP() const;

    MCAPI bool IsUnresolvedIP() const;

    MCAPI ::std::string PortAsString() const;

    MCAPI void SetIP(::std::string_view hostname);

    MCAPI void SetIP(::webrtc::IPAddress const& ip);

    MCAPI void SetPort(int port);

    MCAPI void SetResolvedIP(::webrtc::IPAddress const& ip);

    MCAPI SocketAddress();

    MCAPI SocketAddress(::webrtc::SocketAddress const& addr);

    MCAPI SocketAddress(::std::string_view hostname, int port);

    MCAPI SocketAddress(::webrtc::IPAddress const& ip, int port);

    MCAPI ::std::string ToSensitiveNameAndAddressString() const;

    MCAPI ::std::string ToSensitiveString() const;

    MCAPI uint64 ToSockAddrStorage(::sockaddr_storage* addr) const;

    MCAPI ::std::string ToString() const;

    MCAPI ::webrtc::IPAddress const& ipaddr() const;

    MCAPI bool operator<(::webrtc::SocketAddress const& addr) const;

    MCAPI ::webrtc::SocketAddress& operator=(::webrtc::SocketAddress const& addr);

    MCAPI bool operator==(::webrtc::SocketAddress const& addr) const;

    MCAPI ushort port() const;

    MCAPI ~SocketAddress();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::SocketAddress const& addr);

    MCAPI void* $ctor(::std::string_view hostname, int port);

    MCAPI void* $ctor(::webrtc::IPAddress const& ip, int port);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace webrtc
