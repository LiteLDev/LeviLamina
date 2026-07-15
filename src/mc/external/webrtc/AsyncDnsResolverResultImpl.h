#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AsyncDnsResolverResult.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class AsyncDnsResolverResultImpl : public ::webrtc::AsyncDnsResolverResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk600c9e;
    ::ll::UntypedStorage<8, 80> mUnkbcfc7f;
    ::ll::UntypedStorage<8, 24> mUnk558874;
    ::ll::UntypedStorage<4, 4>  mUnk997dd5;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncDnsResolverResultImpl& operator=(AsyncDnsResolverResultImpl const&);
    AsyncDnsResolverResultImpl(AsyncDnsResolverResultImpl const&);
    AsyncDnsResolverResultImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool GetResolvedAddress(int family, ::webrtc::SocketAddress* addr) const /*override*/;

    virtual int GetError() const /*override*/;

    virtual ~AsyncDnsResolverResultImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $GetResolvedAddress(int family, ::webrtc::SocketAddress* addr) const;

    MCNAPI int $GetError() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
