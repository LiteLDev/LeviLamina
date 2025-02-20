#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemCustomComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnke10adb;
    ::ll::UntypedStorage<8, 72> mUnkac0cdc;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemCustomComponentData& operator=(ItemCustomComponentData const&);
    ItemCustomComponentData(ItemCustomComponentData const&);
    ItemCustomComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ItemCustomComponentData& operator=(::ItemCustomComponentData&&);

    MCAPI ~ItemCustomComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
