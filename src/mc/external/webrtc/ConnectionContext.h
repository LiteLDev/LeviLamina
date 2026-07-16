#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountedNonVirtual.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { struct PeerConnectionFactoryDependencies; }
// clang-format on

namespace webrtc {

class ConnectionContext : public ::webrtc::RefCountedNonVirtual<::webrtc::ConnectionContext> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd10b43;
    ::ll::UntypedStorage<8, 8>  mUnkf35a6c;
    ::ll::UntypedStorage<8, 8>  mUnk3668e0;
    ::ll::UntypedStorage<8, 8>  mUnk38b700;
    ::ll::UntypedStorage<8, 16> mUnkf7b628;
    ::ll::UntypedStorage<8, 8>  mUnk9b277f;
    ::ll::UntypedStorage<8, 40> mUnkcdc30f;
    ::ll::UntypedStorage<8, 8>  mUnk240e2e;
    ::ll::UntypedStorage<8, 56> mUnk647fec;
    ::ll::UntypedStorage<8, 8>  mUnkc617e3;
    ::ll::UntypedStorage<8, 8>  mUnk7f3a61;
    ::ll::UntypedStorage<8, 8>  mUnkb0ad00;
    ::ll::UntypedStorage<8, 8>  mUnk2e2e6d;
    ::ll::UntypedStorage<8, 8>  mUnkf57cee;
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
