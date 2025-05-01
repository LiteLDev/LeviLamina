#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct IceParameters; }
// clang-format on

namespace cricket {

class IceCredentialsIterator {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cricket::IceParameters GetIceCredentials();

    MCNAPI explicit IceCredentialsIterator(::std::vector<::cricket::IceParameters> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cricket::IceParameters CreateRandomIceCredentials();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::cricket::IceParameters> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
