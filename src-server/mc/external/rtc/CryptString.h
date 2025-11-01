#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class CryptString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbc3733;
    // NOLINTEND

public:
    // prevent constructor by default
    CryptString& operator=(CryptString const&);
    CryptString(CryptString const&);
    CryptString();

};

}
