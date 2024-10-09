#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoostItem {
public:
    // prevent constructor by default
    BoostItem& operator=(BoostItem const&);
    BoostItem(BoostItem const&);
    BoostItem();

public:
    // NOLINTBEGIN
    MCAPI void setReplacementItemDescriptor(class ItemDescriptor const& replacementItemDescriptor);

    MCAPI ~BoostItem();

    // NOLINTEND
};
