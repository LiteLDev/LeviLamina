#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduHeadlessConnectionNonce {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9ee435;
    ::ll::UntypedStorage<8, 8>  mUnkae462d;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessConnectionNonce& operator=(EduHeadlessConnectionNonce const&);
    EduHeadlessConnectionNonce(EduHeadlessConnectionNonce const&);
    EduHeadlessConnectionNonce();
};

} // namespace Social
