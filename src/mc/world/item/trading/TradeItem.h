#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TradeItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf5ccb9;
    ::ll::UntypedStorage<4, 4>  mUnk5c1680;
    ::ll::UntypedStorage<4, 4>  mUnk65c8fc;
    ::ll::UntypedStorage<4, 4>  mUnkee3e09;
    ::ll::UntypedStorage<4, 4>  mUnk6e369d;
    ::ll::UntypedStorage<8, 32> mUnk76eb42;
    ::ll::UntypedStorage<8, 64> mUnk6d608d;
    ::ll::UntypedStorage<8, 24> mUnk81a0dc;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeItem& operator=(TradeItem const&);
    TradeItem(TradeItem const&);
    TradeItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeItem(::TradeItem&&);

    MCAPI ::TradeItem& operator=(::TradeItem&&);

    MCAPI ~TradeItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TradeItem&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
