#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PurchaseInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd0a255;
    ::ll::UntypedStorage<8, 32> mUnk58cc32;
    ::ll::UntypedStorage<8, 32> mUnke5fea4;
    ::ll::UntypedStorage<8, 32> mUnk51e353;
    ::ll::UntypedStorage<4, 4> mUnk959cb5;
    ::ll::UntypedStorage<1, 1> mUnk628941;
    ::ll::UntypedStorage<1, 1> mUnkc3821f;
    ::ll::UntypedStorage<1, 1> mUnkd80a73;
    // NOLINTEND

public:
    // prevent constructor by default
    PurchaseInfo& operator=(PurchaseInfo const&);
    PurchaseInfo(PurchaseInfo const&);
    PurchaseInfo();

};
