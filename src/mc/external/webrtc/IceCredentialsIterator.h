#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct IceParameters; }
// clang-format on

namespace webrtc {

class IceCredentialsIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbcf657;
    // NOLINTEND

public:
    // prevent constructor by default
    IceCredentialsIterator& operator=(IceCredentialsIterator const&);
    IceCredentialsIterator(IceCredentialsIterator const&);
    IceCredentialsIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IceCredentialsIterator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::IceParameters GetIceCredentials();

    MCNAPI explicit IceCredentialsIterator(::std::vector<::webrtc::IceParameters> const& pooled_credentials);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::IceParameters CreateRandomIceCredentials();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::webrtc::IceParameters> const& pooled_credentials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
