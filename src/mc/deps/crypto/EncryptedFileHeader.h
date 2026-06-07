#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto {

union EncryptedFileHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 256> mUnkdeb916;
    ::ll::UntypedStorage<4, 256> mUnkdb5ed2;
    // NOLINTEND
};
} // namespace Crypto
