#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
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
    virtual void setSlot(int, class ItemStack const&, bool);

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI CrafterContainerManagerModel(::ContainerID, class Player&, class BlockPos const&);

    // NOLINTEND
};
