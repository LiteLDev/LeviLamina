#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class CrafterContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    CrafterContainerManagerModel& operator=(CrafterContainerManagerModel const&);
    CrafterContainerManagerModel(CrafterContainerManagerModel const&);
    CrafterContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CrafterContainerManagerModel() = default;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI CrafterContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

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

    MCAPI void setSlot$(int slot, class ItemStack const& item, bool fromNetwork);

    // NOLINTEND
};
