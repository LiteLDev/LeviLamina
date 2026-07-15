#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ConnectionRole.h"
#include "mc/external/webrtc/IceMode.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct IceParameters; }
namespace webrtc { struct SSLFingerprint; }
// clang-format on

namespace webrtc {

struct TransportDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka8b11d;
    ::ll::UntypedStorage<8, 32> mUnkd8d4ec;
    ::ll::UntypedStorage<8, 32> mUnke1b7a2;
    ::ll::UntypedStorage<4, 4>  mUnk280c44;
    ::ll::UntypedStorage<4, 4>  mUnkc4ff0c;
    ::ll::UntypedStorage<8, 8>  mUnke7246b;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportDescription& operator=(TransportDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::IceParameters GetIceParameters() const;

    MCNAPI bool HasOption(::std::string_view option) const;

    MCNAPI TransportDescription();

    MCNAPI TransportDescription(::webrtc::TransportDescription const& from);

    MCNAPI TransportDescription(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    MCNAPI TransportDescription(
        ::std::vector<::std::string> const& transport_options,
        ::std::string_view                  ice_ufrag,
        ::std::string_view                  ice_pwd,
        ::webrtc::IceMode                   ice_mode,
        ::webrtc::ConnectionRole            role,
        ::webrtc::SSLFingerprint const*     identity_fingerprint
    );

    MCNAPI ~TransportDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::TransportDescription const& from);

    MCNAPI void* $ctor(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    MCNAPI void* $ctor(
        ::std::vector<::std::string> const& transport_options,
        ::std::string_view                  ice_ufrag,
        ::std::string_view                  ice_pwd,
        ::webrtc::IceMode                   ice_mode,
        ::webrtc::ConnectionRole            role,
        ::webrtc::SSLFingerprint const*     identity_fingerprint
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
