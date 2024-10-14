#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

struct ExpectedSlotConsume {
public:
    // prevent constructor by default
    ExpectedSlotConsume& operator=(ExpectedSlotConsume const&);
    ExpectedSlotConsume(ExpectedSlotConsume const&);
    ExpectedSlotConsume();

public:
    // NOLINTBEGIN
    MCAPI ExpectedSlotConsume(
        ::ContainerEnumName    openContainerNetId,
        uchar                  slot,
        class ItemStack const& item,
        uchar                  amountOverride
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
