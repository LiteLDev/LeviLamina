#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

struct RelayServerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd00db9;
    ::ll::UntypedStorage<8, 64> mUnk225b13;
    ::ll::UntypedStorage<4, 4>  mUnk10e301;
    ::ll::UntypedStorage<8, 24> mUnkbad4ce;
    ::ll::UntypedStorage<8, 24> mUnk7ba248;
    ::ll::UntypedStorage<8, 8>  mUnkda0639;
    ::ll::UntypedStorage<8, 32> mUnkcf5497;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RelayServerConfig();

    MCNAPI RelayServerConfig(::webrtc::RelayServerConfig const&);

    MCNAPI RelayServerConfig(
        ::webrtc::SocketAddress const& address,
        ::std::string_view             username,
        ::std::string_view             password,
        ::webrtc::ProtocolType         proto
    );

    MCNAPI ::webrtc::RelayServerConfig& operator=(::webrtc::RelayServerConfig const&);

    MCNAPI bool operator==(::webrtc::RelayServerConfig const& o) const;

    MCNAPI ~RelayServerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::RelayServerConfig const&);

    MCNAPI void* $ctor(
        ::webrtc::SocketAddress const& address,
        ::std::string_view             username,
        ::std::string_view             password,
        ::webrtc::ProtocolType         proto
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
