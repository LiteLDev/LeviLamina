#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct FullContainerName;
// clang-format on

struct ExpectedSlotConsume {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnkcc258d;
    ::ll::UntypedStorage<1, 1>   mUnkfcd450;
    ::ll::UntypedStorage<8, 152> mUnk846e89;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpectedSlotConsume& operator=(ExpectedSlotConsume const&);
    ExpectedSlotConsume(ExpectedSlotConsume const&);
    ExpectedSlotConsume();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpectedSlotConsume(
        ::FullContainerName const& openContainerNetId,
        uchar                      slot,
        ::ItemStack const&         item,
        uchar                      amountOverride
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::FullContainerName const& openContainerNetId, uchar slot, ::ItemStack const& item, uchar amountOverride);
    // NOLINTEND
};
