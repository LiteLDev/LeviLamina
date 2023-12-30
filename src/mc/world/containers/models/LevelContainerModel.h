#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerCategory.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class LevelContainerModel : public ::ContainerModel {
public:
    // prevent constructor by default
    LevelContainerModel& operator=(LevelContainerModel const&);
    LevelContainerModel(LevelContainerModel const&);
    LevelContainerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@LevelContainerModel@@UEAAXH@Z
    virtual void containerContentChanged(int slot);

    // vIndex: 1, symbol: __gen_??1LevelContainerModel@@UEAA@XZ
    virtual ~LevelContainerModel() = default;

    // vIndex: 2, symbol: ?postInit@LevelContainerModel@@UEAAXXZ
    virtual void postInit();

    // vIndex: 3, symbol: ?releaseResources@LevelContainerModel@@UEAAXXZ
    virtual void releaseResources();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?getContainerWeakRef@LevelContainerModel@@UEBA?AVContainerWeakRef@@XZ
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 14, symbol: ?isValid@LevelContainerModel@@UEAA_NXZ
    virtual bool isValid();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 20, symbol: ?isSlotDisabled@LevelContainerModel@@UEBA_NH@Z
    virtual bool isSlotDisabled(int) const;

    // vIndex: 21, symbol: ?_getContainer@LevelContainerModel@@EEBAPEAVContainer@@XZ
    virtual class Container* _getContainer() const;

    // vIndex: 22, symbol: ?_getContainerOffset@LevelContainerModel@@MEBAHXZ
    virtual int _getContainerOffset() const;

    // vIndex: 24, symbol: ?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z
    virtual void _onItemChanged(int slot, class ItemStack const& oldItem, class ItemStack const& newItem);

    // symbol: ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@UActorUniqueID@@W4ContainerCategory@@@Z
    MCAPI LevelContainerModel(
        enum ContainerEnumName containerName,
        int                    containerSize,
        class Player&          player,
        struct ActorUniqueID   entityId,
        enum ContainerCategory category
    );

    // symbol:
    // ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@W4ContainerCategory@@@Z
    MCAPI LevelContainerModel(
        enum ContainerEnumName containerName,
        int                    containerSize,
        class Player&          player,
        enum BlockActorType    type,
        class BlockPos const&  blockPos,
        enum ContainerCategory category
    );

    // symbol: ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@AEBUActorUniqueID@@@Z
    MCAPI static class Container* getContainerHelper(class Player&, struct ActorUniqueID const&);

    // symbol: ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@@Z
    MCAPI static class Container* getContainerHelper(class Player&, ::BlockActorType, class BlockPos const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getEntity@LevelContainerModel@@AEBAPEAVActor@@XZ
    MCAPI class Actor* _getEntity() const;

    // symbol: ?_refreshSlot@LevelContainerModel@@AEAAXH@Z
    MCAPI void _refreshSlot(int slot);

    // NOLINTEND
};
