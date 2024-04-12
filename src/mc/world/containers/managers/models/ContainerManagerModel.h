#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/IContainerManager.h"

class ContainerManagerModel : public ::IContainerManager {
public:
    // prevent constructor by default
    ContainerManagerModel& operator=(ContainerManagerModel const&);
    ContainerManagerModel(ContainerManagerModel const&);
    ContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ContainerManagerModel@@UEAA@XZ
    virtual ~ContainerManagerModel();

    // vIndex: 1, symbol: ?getContainerId@ContainerManagerModel@@UEBA?AW4ContainerID@@XZ
    virtual ::ContainerID getContainerId() const;

    // vIndex: 2, symbol: ?setContainerId@ContainerManagerModel@@UEAAXW4ContainerID@@@Z
    virtual void setContainerId(::ContainerID id);

    // vIndex: 3, symbol: ?getContainerType@ContainerManagerModel@@UEBA?AW4ContainerType@@XZ
    virtual ::ContainerType getContainerType() const;

    // vIndex: 4, symbol: ?setContainerType@ContainerManagerModel@@UEAAXW4ContainerType@@@Z
    virtual void setContainerType(::ContainerType type);

    // vIndex: 5, symbol: ?serverInitItemStackIds@ContainerManagerModel@@UEAAXXZ
    virtual void serverInitItemStackIds();

    // vIndex: 11, symbol: ?tick@ContainerManagerModel@@MEAA_NXZ
    virtual bool tick();

    // vIndex: 12, symbol: ?debitPlayerLevels@ContainerManagerModel@@UEAAXH@Z
    virtual void debitPlayerLevels(int levels);

    // vIndex: 13, symbol: ?isCreativeMode@ContainerManagerModel@@UEBA_NXZ
    virtual bool isCreativeMode() const;

    // vIndex: 14, symbol: ?isClientSide@ContainerManagerModel@@UEBA_NXZ
    virtual bool isClientSide() const;

    // vIndex: 15, symbol: ?isServerAuthoritative@ContainerManagerModel@@UEBA_NXZ
    virtual bool isServerAuthoritative() const;

    // vIndex: 16, symbol: ?isValid@ContainerManagerModel@@UEAA_NM@Z
    virtual bool isValid(float pickRange);

    // vIndex: 17, symbol: ?_postInit@AnvilContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit() = 0;

    // symbol: ??0ContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@@Z
    MCAPI ContainerManagerModel(::ContainerID containerId, class Player& player);

    // symbol: ?getPlayer@ContainerManagerModel@@QEBAAEAVPlayer@@XZ
    MCAPI class Player& getPlayer() const;

    // symbol: ?postInit@ContainerManagerModel@@QEAAXXZ
    MCAPI void postInit();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_addContainer@ContainerManagerModel@@IEAAXV?$shared_ptr@VContainerModel@@@std@@@Z
    MCAPI void _addContainer(std::shared_ptr<class ContainerModel> containerModel);

    // symbol: ?_containerScreenContext@ContainerManagerModel@@IEAA?AVContainerScreenContext@@AEBVBlockPos@@@Z
    MCAPI class ContainerScreenContext _containerScreenContext(class BlockPos const& blockPos);

    // symbol: ?_containerScreenContext@ContainerManagerModel@@IEAA?AVContainerScreenContext@@UActorUniqueID@@@Z
    MCAPI class ContainerScreenContext _containerScreenContext(struct ActorUniqueID actorId);

    // symbol: ?_getContainer@ContainerManagerModel@@IEBA?AV?$shared_ptr@VContainerModel@@@std@@W4ContainerEnumName@@@Z
    MCAPI std::shared_ptr<class ContainerModel> _getContainer(::ContainerEnumName collectionEnumName) const;

    // symbol: ?_isPlayerInRangeOfPosition@ContainerManagerModel@@IEBA_NAEBVBlockPos@@M@Z
    MCAPI bool _isPlayerInRangeOfPosition(class BlockPos const& blockPos, float pickRange) const;

    // symbol:
    // ?_appendCopies@ContainerManagerModel@@KAXAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBV23@@Z
    MCAPI static void _appendCopies(std::vector<class ItemStack>& out, std::vector<class ItemStack> const& items);

    // NOLINTEND
};
