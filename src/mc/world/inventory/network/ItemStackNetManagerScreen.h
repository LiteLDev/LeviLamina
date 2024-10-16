#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerScreen {
public:
    // prevent constructor by default
    ItemStackNetManagerScreen& operator=(ItemStackNetManagerScreen const&);
    ItemStackNetManagerScreen(ItemStackNetManagerScreen const&);
    ItemStackNetManagerScreen();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackNetManagerScreen() = default;

    MCAPI explicit ItemStackNetManagerScreen(class EntityRegistry& registry);

    MCAPI class EntityContext& getEntity();

    MCAPI class EntityContext const& getEntity() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class EntityRegistry& registry);

    // NOLINTEND
};
