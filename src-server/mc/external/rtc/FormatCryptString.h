#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class FormatCryptString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke8da31;
    ::ll::UntypedStorage<8, 8> mUnk99c784;
    ::ll::UntypedStorage<8, 8> mUnk1c9246;
    // NOLINTEND

public:
    // prevent constructor by default
    FormatCryptString& operator=(FormatCryptString const&);
    FormatCryptString(FormatCryptString const&);
    FormatCryptString();
};

} // namespace rtc
