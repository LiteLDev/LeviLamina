#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IPAddressType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IPAddress; }
// clang-format on

namespace webrtc {

class SocketAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6aa05c;
    ::ll::UntypedStorage<8, 32> mUnkd77baf;
    ::ll::UntypedStorage<2, 2>  mUnk9157d3;
    ::ll::UntypedStorage<4, 4>  mUnkef39c4;
    ::ll::UntypedStorage<1, 1>  mUnk54bd57;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI ::webrtc::IPAddressType GetIPAddressType() const;

    MCNAPI ::std::string HostAsSensitiveURIString() const;

    MCNAPI ::std::string HostAsURIString() const;

    MCNAPI bool IsAnyIP() const;

    MCNAPI bool IsLoopbackIP() const;

    MCNAPI bool IsNil() const;

    MCNAPI bool IsPrivateIP() const;

    MCNAPI bool IsUnresolvedIP() const;

    MCNAPI ::std::string PortAsString() const;

    MCNAPI void SetIP(::std::string_view hostname);

    MCNAPI void SetIP(::webrtc::IPAddress const& ip);

    MCNAPI void SetPort(int port);

    MCNAPI void SetResolvedIP(::webrtc::IPAddress const& ip);

    MCNAPI SocketAddress();

    MCNAPI SocketAddress(::webrtc::SocketAddress const& addr);

    MCNAPI SocketAddress(::std::string_view hostname, int port);

    MCNAPI SocketAddress(::webrtc::IPAddress const& ip, int port);

    MCNAPI ::std::string ToSensitiveNameAndAddressString() const;

    MCNAPI ::std::string ToSensitiveString() const;

    MCNAPI uint64 ToSockAddrStorage(::sockaddr_storage* addr) const;

    MCNAPI ::std::string ToString() const;

    MCNAPI ::webrtc::IPAddress const& ipaddr() const;

    MCNAPI bool operator<(::webrtc::SocketAddress const& addr) const;

    MCNAPI ::webrtc::SocketAddress& operator=(::webrtc::SocketAddress const& addr);

    MCNAPI bool operator==(::webrtc::SocketAddress const& addr) const;

    MCNAPI ushort port() const;

    MCNAPI ~SocketAddress();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::SocketAddress const& addr);

    MCNAPI void* $ctor(::std::string_view hostname, int port);

    MCNAPI void* $ctor(::webrtc::IPAddress const& ip, int port);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
