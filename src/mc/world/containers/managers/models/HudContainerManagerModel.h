#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class HudContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    HudContainerManagerModel& operator=(HudContainerManagerModel const&);
    HudContainerManagerModel(HudContainerManagerModel const&);
    HudContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HudContainerManagerModel() = default;

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool);

    // vIndex: 8
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9
    virtual void setData(int id, int value);

    // vIndex: 10
    virtual void broadcastChanges();

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI HudContainerManagerModel(::ContainerID containerId, class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(::ContainerID containerId, class Player& player);

    MCAPI class ContainerScreenContext _postInit$();

    MCAPI void broadcastChanges$();

    MCAPI std::vector<class ItemStack> getItemCopies$() const;

    MCAPI class ItemStack const& getSlot$(int slot) const;

    MCAPI void setData$(int id, int value);

    MCAPI void setSlot$(int slot, class ItemStack const& item, bool);

    // NOLINTEND
};
