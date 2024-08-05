#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class TradeContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    TradeContainerManagerModel& operator=(TradeContainerManagerModel const&);
    TradeContainerManagerModel(TradeContainerManagerModel const&);
    TradeContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TradeContainerManagerModel() = default;

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool);

    // vIndex: 8
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 10
    virtual void broadcastChanges();

    // vIndex: 16
    virtual bool isValid(float pickRange);

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI
    TradeContainerManagerModel(::ContainerID containerId, class Player& player, struct ActorUniqueID const& uniqueId);

    // NOLINTEND
};
