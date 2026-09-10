#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EncryptedAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7c5425;
    ::ll::UntypedStorage<8, 8>  mUnk83f2ae;
    ::ll::UntypedStorage<8, 24> mUnk2fbcb5;
    ::ll::UntypedStorage<1, 1>  mUnk366833;
    ::ll::UntypedStorage<8, 8>  mUnk4ef6f3;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedAccessStrategyOptions& operator=(EncryptedAccessStrategyOptions const&);
    EncryptedAccessStrategyOptions(EncryptedAccessStrategyOptions const&);
    EncryptedAccessStrategyOptions();
};
