#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduHeadlessConnectionHandshake {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9e7bf1;
    ::ll::UntypedStorage<8, 32> mUnk82e3cb;
    ::ll::UntypedStorage<8, 32> mUnkf2dd53;
    ::ll::UntypedStorage<8, 32> mUnkb2d72f;
    ::ll::UntypedStorage<8, 8>  mUnke2f149;
    ::ll::UntypedStorage<1, 1>  mUnkbf426d;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessConnectionHandshake& operator=(EduHeadlessConnectionHandshake const&);
    EduHeadlessConnectionHandshake(EduHeadlessConnectionHandshake const&);
    EduHeadlessConnectionHandshake();
};

} // namespace Social
