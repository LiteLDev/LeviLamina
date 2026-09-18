#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct StringConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkcbc089;
    ::ll::UntypedStorage<8, 32>  mUnkd00b73;
    ::ll::UntypedStorage<8, 32>  mUnk745b92;
    ::ll::UntypedStorage<8, 32>  mUnk7807d8;
    ::ll::UntypedStorage<8, 32>  mUnkf93792;
    ::ll::UntypedStorage<8, 32>  mUnk9c0101;
    ::ll::UntypedStorage<8, 32>  mUnk1191d6;
    ::ll::UntypedStorage<8, 32>  mUnkc57c53;
    ::ll::UntypedStorage<8, 40>  mUnk7b3e2c;
    ::ll::UntypedStorage<8, 40>  mUnke214ba;
    ::ll::UntypedStorage<8, 40>  mUnke50f6e;
    ::ll::UntypedStorage<8, 192> mUnk16d8b8;
    // NOLINTEND

public:
    // prevent constructor by default
    StringConstants& operator=(StringConstants const&);
    StringConstants(StringConstants const&);
    StringConstants();
};

} // namespace Common
