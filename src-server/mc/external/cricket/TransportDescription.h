#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ConnectionRole.h"
#include "mc/external/cricket/IceMode.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct IceParameters; }
namespace rtc { struct SSLFingerprint; }
// clang-format on

namespace cricket {

struct TransportDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk570b49;
    ::ll::UntypedStorage<8, 32> mUnk6a52b1;
    ::ll::UntypedStorage<8, 32> mUnk426746;
    ::ll::UntypedStorage<4, 4> mUnk99f4fa;
    ::ll::UntypedStorage<4, 4> mUnk3bd252;
    ::ll::UntypedStorage<8, 8> mUnk3e5eb5;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportDescription& operator=(TransportDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cricket::IceParameters GetIceParameters() const;

    MCNAPI TransportDescription();

    MCNAPI TransportDescription(::cricket::TransportDescription const& from);

    MCNAPI TransportDescription(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    MCNAPI TransportDescription(::std::vector<::std::string> const& transport_options, ::std::string_view ice_ufrag, ::std::string_view ice_pwd, ::cricket::IceMode ice_mode, ::cricket::ConnectionRole role, ::rtc::SSLFingerprint const* identity_fingerprint);

    MCNAPI ~TransportDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::TransportDescription const& from);

    MCNAPI void* $ctor(::std::string_view ice_ufrag, ::std::string_view ice_pwd);

    MCNAPI void* $ctor(::std::vector<::std::string> const& transport_options, ::std::string_view ice_ufrag, ::std::string_view ice_pwd, ::cricket::IceMode ice_mode, ::cricket::ConnectionRole role, ::rtc::SSLFingerprint const* identity_fingerprint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
