#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

struct RelayServerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka997b0;
    ::ll::UntypedStorage<8, 64> mUnkd81b79;
    ::ll::UntypedStorage<4, 4>  mUnk765d45;
    ::ll::UntypedStorage<8, 24> mUnkf894b9;
    ::ll::UntypedStorage<8, 24> mUnkb36e86;
    ::ll::UntypedStorage<8, 8>  mUnk3888a0;
    ::ll::UntypedStorage<8, 32> mUnkb68e75;
    // NOLINTEND

public:
    // prevent constructor by default
    RelayServerConfig& operator=(RelayServerConfig const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RelayServerConfig();

    MCNAPI RelayServerConfig(::cricket::RelayServerConfig const&);

    MCNAPI
    RelayServerConfig(::rtc::SocketAddress const&, ::std::string_view, ::std::string_view, ::cricket::ProtocolType);

    MCNAPI ~RelayServerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::RelayServerConfig const&);

    MCNAPI void* $ctor(::rtc::SocketAddress const&, ::std::string_view, ::std::string_view, ::cricket::ProtocolType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
