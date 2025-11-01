#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FlyingItemCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5cfa31;
    ::ll::UntypedStorage<4, 4>  mUnk3cdf47;
    ::ll::UntypedStorage<8, 32> mUnk7b1e4d;
    ::ll::UntypedStorage<4, 4>  mUnk6787a6;
    ::ll::UntypedStorage<4, 4>  mUnkf198cf;
    ::ll::UntypedStorage<8, 32> mUnk656f7b;
    // NOLINTEND

public:
    // prevent constructor by default
    FlyingItemCommand& operator=(FlyingItemCommand const&);
    FlyingItemCommand(FlyingItemCommand const&);
    FlyingItemCommand();
};
