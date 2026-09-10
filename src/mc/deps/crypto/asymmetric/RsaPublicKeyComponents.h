#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

struct RsaPublicKeyComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc93a89;
    ::ll::UntypedStorage<8, 32> mUnk753b59;
    // NOLINTEND

public:
    // prevent constructor by default
    RsaPublicKeyComponents& operator=(RsaPublicKeyComponents const&);
    RsaPublicKeyComponents(RsaPublicKeyComponents const&);
    RsaPublicKeyComponents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RsaPublicKeyComponents();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
