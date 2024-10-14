#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"

class SmokerContainerManagerModel : public ::FurnaceContainerManagerModel {
public:
    // prevent constructor by default
    SmokerContainerManagerModel& operator=(SmokerContainerManagerModel const&);
    SmokerContainerManagerModel(SmokerContainerManagerModel const&);
    SmokerContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SmokerContainerManagerModel() = default;

    MCAPI SmokerContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
