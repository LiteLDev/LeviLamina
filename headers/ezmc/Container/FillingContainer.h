#pragma once

#include "../Core/SemVersion.h"
#include "../Level/Level.h"
#include "Container.h"
#include "ContainerType.h"

#include "../dll.h"
#include <memory>

class FillingContainer : public Container {
public:
    std::vector<ItemStack> data;
    Player*                player;

    MCAPI FillingContainer(Player*, int, ContainerType);

    virtual ~FillingContainer();

    virtual void             serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>) override;
    virtual ItemStack const& getItem(int) const override;
    virtual void             setItem(int, ItemStack const&) override;
    virtual void             setItemWithForceBalance(int, class ItemStack const&, bool) override;
    virtual void             removeItem(int, int) override;
    virtual int              getContainerSize() const override;
    virtual int              getMaxStackSize() const override;
    virtual void             startOpen(Player&) override;
    virtual void             stopOpen(Player&) override;

    virtual bool add(ItemStack&);
    virtual bool canAdd(ItemStack const&) const;
    virtual void clearSlot(int);
    virtual int  clearInventory(int);
    virtual void load(ListTag const&, SemVersion const&, Level&);
    virtual int  getEmptySlotsCount() const;

    MCAPI std::unique_ptr<ListTag> save();
};

static_assert(offsetof(FillingContainer, data) == 224);
static_assert(offsetof(FillingContainer, player) == 248);