#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/AsyncDnsResolverInterface.h"
#include "mc/external/webrtc/AsyncDnsResolverResult.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class DnsCache; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace NetherNet {

class AsyncDnsResolver : public ::webrtc::AsyncDnsResolverInterface {
public:
    // AsyncDnsResolver inner types declare
    // clang-format off
    class State;
    // clang-format on

    // AsyncDnsResolver inner types define
    class State {
    public:
        // State inner types declare
        // clang-format off
        class Result;
        // clang-format on

        // State inner types define
        enum class Status : int {
            Active           = 0,
            CompletionPosted = 1,
            Finished         = 2,
            Dead             = 3,
        };

        class Result : public ::webrtc::AsyncDnsResolverResult {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 1>  mUnkc7562a;
            ::ll::UntypedStorage<8, 80> mUnk1a7115;
            ::ll::UntypedStorage<8, 24> mUnkd4dfb2;
            ::ll::UntypedStorage<4, 4>  mUnkd4a765;
            // NOLINTEND

        public:
            // prevent constructor by default
            Result& operator=(Result const&);
            Result(Result const&);
            Result();

        public:
            // virtual functions
            // NOLINTBEGIN
            virtual bool GetResolvedAddress(int family, ::webrtc::SocketAddress* addr) const /*override*/;

            virtual int GetError() const /*override*/;
            // NOLINTEND

        public:
            // virtual function thunks
            // NOLINTBEGIN
            MCNAPI bool $GetResolvedAddress(int family, ::webrtc::SocketAddress* addr) const;

            MCNAPI int $GetError() const;


            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40>  mUnk27c5f7;
        ::ll::UntypedStorage<4, 4>   mUnkbcec3e;
        ::ll::UntypedStorage<8, 128> mUnk1b036c;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk93b7fd;
    ::ll::UntypedStorage<8, 16> mUnkc6922f;
    ::ll::UntypedStorage<8, 16> mUnk21947a;
    ::ll::UntypedStorage<8, 64> mUnke323e1;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncDnsResolver& operator=(AsyncDnsResolver const&);
    AsyncDnsResolver(AsyncDnsResolver const&);
    AsyncDnsResolver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncDnsResolver() /*override*/ = default;

    virtual void Start(::webrtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback) /*override*/;

    virtual void
    Start(::webrtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback) /*override*/;

    virtual ::webrtc::AsyncDnsResolverResult const& result() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AsyncDnsResolver(
        ::webrtc::TaskQueueBase*                 workerThread,
        ::std::shared_ptr<::NetherNet::DnsCache> cache,
        ::std::function<void()>                  beforeResolve
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::TaskQueueBase*                 workerThread,
        ::std::shared_ptr<::NetherNet::DnsCache> cache,
        ::std::function<void()>                  beforeResolve
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Start(::webrtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback);

    MCNAPI void $Start(::webrtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback);

    MCNAPI ::webrtc::AsyncDnsResolverResult const& $result() const;


    // NOLINTEND
};

} // namespace NetherNet
