#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerExpandStatus.h"
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

class PlayerUIContainerModel : public ::PlayerUIContainerModelBase {
public:
    // prevent constructor by default
    PlayerUIContainerModel& operator=(PlayerUIContainerModel const&);
    PlayerUIContainerModel(PlayerUIContainerModel const&);
    PlayerUIContainerModel();

public:
    // NOLINTBEGIN
    // vIndex: 1, symbol: __gen_??1PlayerUIContainerModel@@UEAA@XZ
    virtual ~PlayerUIContainerModel() = default;

    // vIndex: 22, symbol: ?_getContainerOffset@PlayerUIContainerModel@@MEBAHXZ
    virtual int _getContainerOffset() const;

    // symbol: ??0PlayerUIContainerModel@@QEAA@W4ContainerEnumName@@AEAVPlayer@@@Z
    MCAPI PlayerUIContainerModel(::ContainerEnumName containerName, class Player& player);

    // NOLINTEND
};
