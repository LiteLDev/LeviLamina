#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KnockBackEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke11679;
    // NOLINTEND

public:
    // prevent constructor by default
    KnockBackEvent& operator=(KnockBackEvent const&);
    KnockBackEvent(KnockBackEvent const&);
    KnockBackEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~KnockBackEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
