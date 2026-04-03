#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PlayerAuthenticationInfo;
// clang-format on

class LocalAuthentication {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk6bd560;
    ::ll::UntypedStorage<8, 8>  mUnkb92742;
    ::ll::UntypedStorage<8, 32> mUnk617bed;
    ::ll::UntypedStorage<8, 32> mUnk80ca02;
    ::ll::UntypedStorage<8, 32> mUnk96bd31;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalAuthentication& operator=(LocalAuthentication const&);
    LocalAuthentication(LocalAuthentication const&);
    LocalAuthentication();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void
    regenerateSelfSigned(::PlayerAuthenticationInfo authInfo, bool isSignedIn, uint64 clientRandomId, bool isPrimary);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
