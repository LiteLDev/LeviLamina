#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on

struct GiveableTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk64c310;
    ::ll::UntypedStorage<8, 104> mUnk3c04a1;
    ::ll::UntypedStorage<4, 4>   mUnk345766;
    // NOLINTEND

public:
    // prevent constructor by default
    GiveableTrigger& operator=(GiveableTrigger const&);
    GiveableTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GiveableTrigger(::GiveableTrigger const&);

    MCNAPI void addItem(::ItemDescriptor const& itemDescriptor);

    MCNAPI ~GiveableTrigger();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GiveableTrigger const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
