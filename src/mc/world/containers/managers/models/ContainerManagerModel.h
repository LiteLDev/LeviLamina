#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/IContainerManager.h"

class ContainerManagerModel : public ::IContainerManager {
public:
    // prevent constructor by default
    ContainerManagerModel& operator=(ContainerManagerModel const&);
    ContainerManagerModel(ContainerManagerModel const&);
    ContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerManagerModel();

    // vIndex: 1
    virtual ::ContainerID getContainerId() const;

    // vIndex: 2
    virtual void setContainerId(::ContainerID id);

    // vIndex: 3
    virtual ::ContainerType getContainerType() const;

    // vIndex: 4
    virtual void setContainerType(::ContainerType type);

    // vIndex: 5
    virtual void serverInitItemStackIds();

    // vIndex: 11
    virtual bool tick();

    // vIndex: 12
    virtual void debitPlayerLevels(int levels);

    // vIndex: 13
    virtual bool isCreativeMode() const;

    // vIndex: 14
    virtual bool isClientSide() const;

    // vIndex: 15
    virtual bool isServerAuthoritative() const;

    // vIndex: 16
    virtual bool isValid(float pickRange);

    // vIndex: 17
    virtual class ContainerScreenContext _postInit() = 0;

    MCAPI ContainerManagerModel(::ContainerID containerId, class Player& player);

    MCAPI class Player& getPlayer() const;

    MCAPI void postInit();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _addContainer(std::shared_ptr<class ContainerModel> containerModel);

    MCAPI class ContainerScreenContext _containerScreenContext(class BlockPos const& blockPos);

    MCAPI class ContainerScreenContext _containerScreenContext(struct ActorUniqueID actorId);

    MCAPI std::shared_ptr<class ContainerModel> _getContainer(::ContainerEnumName collectionEnumName) const;

    MCAPI bool _isPlayerInRangeOfPosition(class BlockPos const& blockPos, float pickRange) const;

    MCAPI static void _appendCopies(std::vector<class ItemStack>& out, std::vector<class ItemStack> const& items);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::ContainerID containerId, class Player& player);

    MCAPI void dtor$();

    MCAPI void debitPlayerLevels$(int levels);

    MCAPI ::ContainerID getContainerId$() const;

    MCAPI ::ContainerType getContainerType$() const;

    MCAPI bool isClientSide$() const;

    MCAPI bool isCreativeMode$() const;

    MCAPI bool isServerAuthoritative$() const;

    MCAPI bool isValid$(float pickRange);

    MCAPI void serverInitItemStackIds$();

    MCAPI void setContainerId$(::ContainerID id);

    MCAPI void setContainerType$(::ContainerType type);

    MCAPI bool tick$();

    // NOLINTEND
};
