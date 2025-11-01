#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
// clang-format on

struct SlotDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc45b3c;
    ::ll::UntypedStorage<8, 24> mUnkeb9be2;
    ::ll::UntypedStorage<8, 16> mUnke3918d;
    ::ll::UntypedStorage<8, 32> mUnkf5f1f4;
    ::ll::UntypedStorage<8, 104> mUnkd74339;
    ::ll::UntypedStorage<8, 104> mUnk3a5cb1;
    // NOLINTEND

public:
    // prevent constructor by default
    SlotDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SlotDescriptor(::SlotDescriptor&&);

    MCNAPI SlotDescriptor(::SlotDescriptor const&);

    MCNAPI void addAcceptedItem(::ItemDescriptor const& itemDescriptor);

    MCNAPI ::SlotDescriptor& operator=(::SlotDescriptor const&);

    MCNAPI ~SlotDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SlotDescriptor&&);

    MCNAPI void* $ctor(::SlotDescriptor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
