#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct IceParameters; }
// clang-format on

namespace cricket {

class IceCredentialsIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4c662c;
    // NOLINTEND

public:
    // prevent constructor by default
    IceCredentialsIterator& operator=(IceCredentialsIterator const&);
    IceCredentialsIterator(IceCredentialsIterator const&);
    IceCredentialsIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceCredentialsIterator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cricket::IceParameters GetIceCredentials();

    MCNAPI explicit IceCredentialsIterator(::std::vector<::cricket::IceParameters> const& pooled_credentials);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cricket::IceParameters CreateRandomIceCredentials();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::cricket::IceParameters> const& pooled_credentials);
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

} // namespace cricket
