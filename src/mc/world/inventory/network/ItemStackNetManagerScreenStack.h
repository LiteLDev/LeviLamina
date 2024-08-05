#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerScreenStack {
public:
    // prevent constructor by default
    ItemStackNetManagerScreenStack& operator=(ItemStackNetManagerScreenStack const&);
    ItemStackNetManagerScreenStack(ItemStackNetManagerScreenStack const&);
    ItemStackNetManagerScreenStack();

public:
    // NOLINTBEGIN
    MCAPI void foreachScreen(std::function<bool(class ItemStackNetManagerScreen&)> callback);

    // NOLINTEND
};
