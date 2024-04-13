#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerCategory.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

class PlayerUIContainerModelBase : public ::ContainerModel {
public:
    // prevent constructor by default
    PlayerUIContainerModelBase& operator=(PlayerUIContainerModelBase const&);
    PlayerUIContainerModelBase(PlayerUIContainerModelBase const&);
    PlayerUIContainerModelBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@PlayerUIContainerModelBase@@UEAAXH@Z
    virtual void containerContentChanged(int slot);

    // vIndex: 1, symbol: __gen_??1PlayerUIContainerModelBase@@UEAA@XZ
    virtual ~PlayerUIContainerModelBase() = default;

    // vIndex: 2, symbol: ?postInit@PlayerUIContainerModelBase@@UEAAXXZ
    virtual void postInit();

    // vIndex: 3, symbol: ?releaseResources@PlayerUIContainerModelBase@@UEAAXXZ
    virtual void releaseResources();

    // vIndex: 7, symbol: ?getContainerWeakRef@PlayerUIContainerModelBase@@UEBA?AVContainerWeakRef@@XZ
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 14, symbol: ?isValid@PlayerUIContainerModelBase@@UEAA_NXZ
    virtual bool isValid();

    // vIndex: 21, symbol: ?_getContainer@PlayerUIContainerModelBase@@MEBAPEAVContainer@@XZ
    virtual class Container* _getContainer() const;

    // vIndex: 22, symbol: ?_getContainerOffset@PlayerUIContainerModelBase@@MEBAHXZ
    virtual int _getContainerOffset() const;

    // vIndex: 24, symbol: ?_onItemChanged@PlayerUIContainerModelBase@@MEAAXHAEBVItemStack@@0@Z
    virtual void _onItemChanged(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    // symbol: ??0PlayerUIContainerModelBase@@QEAA@W4ContainerEnumName@@AEAVPlayer@@HW4ContainerCategory@@@Z
    MCAPI PlayerUIContainerModelBase(
        ::ContainerEnumName containerName,
        class Player&       player,
        int                 containerSize,
        ::ContainerCategory category
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_refreshContainer@PlayerUIContainerModelBase@@IEAAX_N@Z
    MCAPI void _refreshContainer(bool initial);

    // NOLINTEND
};
