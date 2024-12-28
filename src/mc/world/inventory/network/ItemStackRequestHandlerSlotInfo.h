#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackRequestHandlerSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk661135;
    ::ll::UntypedStorage<1, 1>  mUnkbceef6;
    ::ll::UntypedStorage<1, 1>  mUnk9fdff4;
    ::ll::UntypedStorage<8, 8>  mUnk5c6ff0;
    ::ll::UntypedStorage<4, 4>  mUnk293d3c;
    ::ll::UntypedStorage<8, 8>  mUnkc7e67b;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestHandlerSlotInfo& operator=(ItemStackRequestHandlerSlotInfo const&);
    ItemStackRequestHandlerSlotInfo(ItemStackRequestHandlerSlotInfo const&);
    ItemStackRequestHandlerSlotInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit operator bool() const;

    MCAPI ~ItemStackRequestHandlerSlotInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
