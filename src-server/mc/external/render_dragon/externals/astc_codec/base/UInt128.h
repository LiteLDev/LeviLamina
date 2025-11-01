#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec::base {

class UInt128 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk416be8;
    ::ll::UntypedStorage<8, 8> mUnk4c2ef0;
    // NOLINTEND

public:
    // prevent constructor by default
    UInt128& operator=(UInt128 const&);
    UInt128(UInt128 const&);
    UInt128();

};

}
