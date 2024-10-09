#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class EnchantingContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    EnchantingContainerManagerModel& operator=(EnchantingContainerManagerModel const&);
    EnchantingContainerManagerModel(EnchantingContainerManagerModel const&);
    EnchantingContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantingContainerManagerModel() = default;

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9
    virtual void setData(int id, int value);

    // vIndex: 10
    virtual void broadcastChanges();

    // vIndex: 16
    virtual bool isValid(float pickRange);

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI
    EnchantingContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    MCAPI std::vector<class ItemEnchantOption> const& getEnchantOptions() const;

    MCAPI void recalculateOptions();

    MCAPI static int const NUM_OPTIONS;

    // NOLINTEND
};
