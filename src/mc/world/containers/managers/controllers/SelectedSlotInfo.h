#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SlotData;
// clang-format on

struct SelectedSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SlotData const&> mSlot;
    ::ll::TypedStorage<4, 4, int const>         mProgressiveTake;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectedSlotInfo& operator=(SelectedSlotInfo const&);
    SelectedSlotInfo(SelectedSlotInfo const&);
    SelectedSlotInfo();
};
