#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class BeaconContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    BeaconContainerManagerModel& operator=(BeaconContainerManagerModel const&);
    BeaconContainerManagerModel(BeaconContainerManagerModel const&);
    BeaconContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeaconContainerManagerModel() = default;

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI BeaconContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _resetSelectionState();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class ContainerScreenContext _postInit$();

    MCAPI std::vector<class ItemStack> getItemCopies$() const;

    MCAPI class ItemStack const& getSlot$(int slot) const;

    MCAPI void setSlot$(int slot, class ItemStack const& item, bool fromNetwork);

    MCAPI static int const& PAYMENT_SLOT();

    // NOLINTEND
};
