#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedNonVirtual.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { struct PeerConnectionFactoryDependencies; }
// clang-format on

namespace webrtc {

class ConnectionContext : public ::rtc::RefCountedNonVirtual<::webrtc::ConnectionContext> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd10b43;
    ::ll::UntypedStorage<8, 8>  mUnk6e1369;
    ::ll::UntypedStorage<8, 8>  mUnk4ef779;
    ::ll::UntypedStorage<8, 8>  mUnk949300;
    ::ll::UntypedStorage<8, 16> mUnkca2db6;
    ::ll::UntypedStorage<8, 8>  mUnk301f31;
    ::ll::UntypedStorage<8, 40> mUnkcdc30f;
    ::ll::UntypedStorage<8, 8>  mUnk7ed853;
    ::ll::UntypedStorage<8, 56> mUnke1da77;
    ::ll::UntypedStorage<8, 8>  mUnkc3355c;
    ::ll::UntypedStorage<8, 8>  mUnk32be4e;
    ::ll::UntypedStorage<8, 8>  mUnk730c99;
    ::ll::UntypedStorage<8, 8>  mUnke24da4;
    ::ll::UntypedStorage<8, 8>  mUnk14cc47;
    ::ll::UntypedStorage<1, 1>  mUnk510df9;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionContext& operator=(ConnectionContext const&);
    ConnectionContext(ConnectionContext const&);
    ConnectionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ConnectionContext(::webrtc::Environment const& env, ::webrtc::PeerConnectionFactoryDependencies* dependencies);

    MCNAPI ~ConnectionContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::ConnectionContext>
    Create(::webrtc::Environment const& env, ::webrtc::PeerConnectionFactoryDependencies* dependencies);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Environment const& env, ::webrtc::PeerConnectionFactoryDependencies* dependencies);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
