#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/rtc/RefCountedBase.h"
#include "mc/external/webrtc/AsyncDnsResolverInterface.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace webrtc { class AsyncDnsResolverResult; }
// clang-format on

namespace webrtc {

class AsyncDnsResolver : public ::webrtc::AsyncDnsResolverInterface {
public:
    // AsyncDnsResolver inner types declare
    // clang-format off
    class State;
    // clang-format on
    
    // AsyncDnsResolver inner types define
    class State : public ::rtc::RefCountedBase {
    public:
        // State inner types define
        enum class Status : int {
            KActive = 0,
            KFinished = 1,
            KDead = 2,
        };
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk2d94c8;
        ::ll::UntypedStorage<4, 4> mUnk4288d0;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~State() /*override*/ = default;
        // NOLINTEND
    
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfbf043;
    ::ll::UntypedStorage<8, 8> mUnk7ea644;
    ::ll::UntypedStorage<8, 128> mUnkeb6b56;
    ::ll::UntypedStorage<8, 32> mUnk1f0e61;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncDnsResolver& operator=(AsyncDnsResolver const&);
    AsyncDnsResolver(AsyncDnsResolver const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncDnsResolver() /*override*/;

    // vIndex: 2
    virtual void Start(::rtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback) /*override*/;

    // vIndex: 1
    virtual void Start(::rtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback) /*override*/;

    // vIndex: 3
    virtual ::webrtc::AsyncDnsResolverResult const& result() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AsyncDnsResolver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Start(::rtc::SocketAddress const& addr, ::absl::AnyInvocable<void()> callback);

    MCNAPI void $Start(::rtc::SocketAddress const& addr, int family, ::absl::AnyInvocable<void()> callback);

    MCNAPI ::webrtc::AsyncDnsResolverResult const& $result() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
