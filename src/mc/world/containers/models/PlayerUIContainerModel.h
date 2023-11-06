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
    // vIndex: 1, symbol: ??1@@UEAA@XZ
    virtual ~PlayerUIContainerModel() = default;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 21, symbol: ?_getContainerOffset@PlayerUIContainerModel@@MEBAHXZ
    virtual int _getContainerOffset() const;

    // symbol: ??0PlayerUIContainerModel@@QEAA@W4ContainerEnumName@@AEAVPlayer@@@Z
    MCAPI PlayerUIContainerModel(::ContainerEnumName, class Player&);

    // NOLINTEND
};
