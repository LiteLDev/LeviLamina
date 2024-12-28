#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk392718;
    ::ll::UntypedStorage<4, 4>  mUnkee3710;
    ::ll::UntypedStorage<4, 4>  mUnk4e475d;
    ::ll::UntypedStorage<4, 4>  mUnk835d8b;
    ::ll::UntypedStorage<4, 4>  mUnkc920e2;
    ::ll::UntypedStorage<1, 1>  mUnk5f63f3;
    ::ll::UntypedStorage<1, 1>  mUnkb7a63d;
    ::ll::UntypedStorage<4, 4>  mUnk5c8676;
    ::ll::UntypedStorage<8, 64> mUnkca5e8a;
    ::ll::UntypedStorage<4, 4>  mUnkf3b207;
    ::ll::UntypedStorage<8, 24> mUnka59e49;
    // NOLINTEND

public:
    // prevent constructor by default
    SendEventData(SendEventData const&);
    SendEventData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SendEventData& operator=(::SendEventData const&);

    MCAPI ~SendEventData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
