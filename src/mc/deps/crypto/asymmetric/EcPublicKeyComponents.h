#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

struct EcPublicKeyComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2d9baf;
    ::ll::UntypedStorage<8, 32> mUnk47d188;
    // NOLINTEND

public:
    // prevent constructor by default
    EcPublicKeyComponents& operator=(EcPublicKeyComponents const&);
    EcPublicKeyComponents(EcPublicKeyComponents const&);
    EcPublicKeyComponents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EcPublicKeyComponents();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
