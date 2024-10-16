#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

class PlayerUIContainerModel : public ::PlayerUIContainerModelBase {
public:
    // prevent constructor by default
    PlayerUIContainerModel& operator=(PlayerUIContainerModel const&);
    PlayerUIContainerModel(PlayerUIContainerModel const&);
    PlayerUIContainerModel();

public:
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~PlayerUIContainerModel() = default;

    // vIndex: 22
    virtual int _getContainerOffset() const;

    MCAPI PlayerUIContainerModel(::ContainerEnumName containerName, class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::ContainerEnumName containerName, class Player& player);

    MCAPI int _getContainerOffset$() const;

    // NOLINTEND
};
