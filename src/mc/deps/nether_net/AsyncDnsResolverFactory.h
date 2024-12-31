#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/AsyncDnsResolverFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class TaskQueueBase; }
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
    // vIndex: 0
    virtual ~AsyncDnsResolverFactory() /*override*/ = default;

    // vIndex: 3
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> Create() /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::rtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback) /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    CreateAndResolve(::rtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncDnsResolverFactory(::webrtc::TaskQueueBase* workerThread);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::TaskQueueBase* workerThread);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> $Create();

    MCAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    $CreateAndResolve(::rtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback);

    MCAPI ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface>
    $CreateAndResolve(::rtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
