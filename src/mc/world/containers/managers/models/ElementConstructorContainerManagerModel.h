#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class ElementConstructorContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    ElementConstructorContainerManagerModel& operator=(ElementConstructorContainerManagerModel const&);
    ElementConstructorContainerManagerModel(ElementConstructorContainerManagerModel const&);
    ElementConstructorContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ElementConstructorContainerManagerModel() = default;

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

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

    MCAPI ElementConstructorContainerManagerModel(
        ::ContainerID         containerId,
        class Player&         player,
        class BlockPos const& blockPos
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class ContainerScreenContext _postInit$();

    MCAPI void broadcastChanges$();

    MCAPI std::vector<class ItemStack> getItemCopies$() const;

    MCAPI class ItemStack const& getSlot$(int slot) const;

    MCAPI bool isValid$(float pickRange);

    MCAPI void setData$(int id, int value);

    MCAPI void setSlot$(int slot, class ItemStack const& item, bool fromNetwork);

    // NOLINTEND
};
