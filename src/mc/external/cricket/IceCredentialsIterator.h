#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct IceParameters; }
// clang-format on

namespace cricket {

class IceCredentialsIterator {
public:
    // prevent constructor by default
    IceCredentialsIterator& operator=(IceCredentialsIterator const&);
    IceCredentialsIterator(IceCredentialsIterator const&);
    IceCredentialsIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cricket::IceParameters GetIceCredentials();

    MCAPI explicit IceCredentialsIterator(::std::vector<::cricket::IceParameters> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cricket::IceParameters CreateRandomIceCredentials();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::cricket::IceParameters> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
