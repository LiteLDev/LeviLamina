#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/AsyncDnsResolverFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class AsyncDnsResolverFactory : public ::webrtc::AsyncDnsResolverFactoryInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc5eabb;
    ::ll::UntypedStorage<8, 16> mUnk700614;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncDnsResolverFactory& operator=(AsyncDnsResolverFactory const&);
    AsyncDnsResolverFactory(AsyncDnsResolverFactory const&);
    AsyncDnsResolverFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncDnsResolverFactory() /*override*/ = default;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> Create() /*override*/;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::webrtc::SocketAddress const&, ::absl::AnyInvocable<void()>) /*override*/;

    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::webrtc::SocketAddress const&, int, ::absl::AnyInvocable<void()>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
