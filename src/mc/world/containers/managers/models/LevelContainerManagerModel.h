#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/block/actor/BlockActorType.h"

class LevelContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    LevelContainerManagerModel& operator=(LevelContainerManagerModel const&);
    LevelContainerManagerModel(LevelContainerManagerModel const&);
    LevelContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelContainerManagerModel();

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool);

    // vIndex: 8
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9
    virtual void setData(int id, int value);

    // vIndex: 10
    virtual void broadcastChanges();

    // vIndex: 16
    virtual bool isValid(float pickRange);

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI LevelContainerManagerModel(::ContainerID containerId, class Player& player, struct ActorUniqueID uniqueID);

    MCAPI LevelContainerManagerModel(
        ::ContainerID         containerId,
        class Player&         player,
        class BlockPos const& pos,
        ::BlockActorType      blockEntityType
    );

    MCAPI class BlockPos const& getBlockPos() const;

    MCAPI struct ActorUniqueID getEntityUniqueID() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class BlockActor* _getBlockEntity();

    MCAPI class Container* _getRawContainer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class ContainerScreenContext _postInit$();

    MCAPI void broadcastChanges$();

    MCAPI std::vector<class ItemStack> getItemCopies$() const;

    MCAPI class ItemStack const& getSlot$(int slot) const;

    MCAPI bool isValid$(float pickRange);

    MCAPI void setData$(int id, int value);

    MCAPI void setSlot$(int slot, class ItemStack const& item, bool);

    // NOLINTEND
};
