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
    virtual void containerContentChanged(int);

    // vIndex: 1, symbol: __gen_??1PlayerUIContainerModelBase@@UEAA@XZ
    virtual ~PlayerUIContainerModelBase() = default;

    // vIndex: 2, symbol: ?postInit@PlayerUIContainerModelBase@@UEAAXXZ
    virtual void postInit();

    // vIndex: 3, symbol: ?releaseResources@PlayerUIContainerModelBase@@UEAAXXZ
    virtual void releaseResources();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?getContainerWeakRef@PlayerUIContainerModelBase@@UEBA?AVContainerWeakRef@@XZ
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 14, symbol: ?isValid@PlayerUIContainerModelBase@@UEAA_NXZ
    virtual bool isValid();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 20, symbol: ?_getContainer@PlayerUIContainerModelBase@@MEBAPEAVContainer@@XZ
    virtual class Container* _getContainer() const;

    // vIndex: 21, symbol: ?_getContainerOffset@PlayerUIContainerModelBase@@MEBAHXZ
    virtual int _getContainerOffset() const;

    // vIndex: 22, symbol: ?_onItemChanged@PlayerUIContainerModelBase@@MEAAXHAEBVItemStack@@0@Z
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&);

    // symbol: ??0PlayerUIContainerModelBase@@QEAA@W4ContainerEnumName@@AEAVPlayer@@HW4ContainerCategory@@@Z
    MCAPI PlayerUIContainerModelBase(::ContainerEnumName, class Player&, int, ::ContainerCategory);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_refreshContainer@PlayerUIContainerModelBase@@IEAAX_N@Z
    MCAPI void _refreshContainer(bool);

    // NOLINTEND
};
