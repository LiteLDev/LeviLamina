#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct InviteLink {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk559515;
    ::ll::UntypedStorage<8, 32> mUnk2f9cdc;
    ::ll::UntypedStorage<8, 32> mUnke4ccf1;
    ::ll::UntypedStorage<8, 8>  mUnke0059a;
    ::ll::UntypedStorage<8, 32> mUnk5d4495;
    ::ll::UntypedStorage<1, 1>  mUnk758ace;
    ::ll::UntypedStorage<8, 8>  mUnkadc8bb;
    // NOLINTEND

public:
    // prevent constructor by default
    InviteLink& operator=(InviteLink const&);
    InviteLink(InviteLink const&);
    InviteLink();
};

} // namespace Realms
