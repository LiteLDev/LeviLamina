#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PublicKeySignatureType {
public:
    // prevent constructor by default
    PublicKeySignatureType& operator=(PublicKeySignatureType const&);
    PublicKeySignatureType(PublicKeySignatureType const&);
    PublicKeySignatureType();
};
