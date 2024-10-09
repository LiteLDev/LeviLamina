#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class HorseContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    HorseContainerManagerModel& operator=(HorseContainerManagerModel const&);
    HorseContainerManagerModel(HorseContainerManagerModel const&);
    HorseContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HorseContainerManagerModel() = default;

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI
    HorseContainerManagerModel(::ContainerID containerId, class Player& player, struct ActorUniqueID const& uniqueId);

    MCAPI class Actor* getEntity() const;

    // NOLINTEND
};
