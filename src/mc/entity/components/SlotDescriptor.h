#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotDescriptor {
public:
    // NOLINTBEGIN
    MCAPI SlotDescriptor();

    MCAPI SlotDescriptor(struct SlotDescriptor const&);

    MCAPI void addAcceptedItem(class ItemDescriptor const& itemDescriptor);

    MCAPI struct SlotDescriptor& operator=(struct SlotDescriptor const&);

    MCAPI ~SlotDescriptor();

    // NOLINTEND
};
