#pragma once

#include <deque>
#include <functional>
#include <unordered_set>
#include <vector>

#include "../Core/NBT.h"
#include "../Item/ItemStack.h"
#include "../Math/Vec3.h"
#include "ContainerContentChangeListener.h"
#include "ContainerSizeChangeListener.h"
#include "ContainerType.h"

#include "../dll.h"

class Player;
class BlockSource;
class ItemDescriptor;

class Container {
public:
    ContainerType                                                                        type;
    std::unordered_set<ContainerContentChangeListener*>                                  content_change_listeners; // 16
    std::unordered_set<ContainerSizeChangeListener*>                                     content_size_listeners;   // 80
    std::deque<std::function<void(Container&, int, ItemStack const&, ItemStack const&)>> transactions;
    std::string                                                                          custom_name;
    bool                                                                                 has_custom_name;

    Container(ContainerType);
    virtual ~Container();
    virtual void                                init();
    virtual void                                serverInitItemStackIds(int, int, std::function<void(int, class ItemStack const&)>) = 0;
    virtual void                                addContentChangeListener(class ContainerContentChangeListener*);
    virtual void                                removeContentChangeListener(class ContainerContentChangeListener*);
    virtual class ItemStack const&              getItem(int) const = 0;
    virtual bool                                hasRoomForItem(class ItemStack const&);
    virtual void                                addItem(class ItemStack&);
    virtual bool                                addItemToFirstEmptySlot(class ItemStack&);
    virtual void                                setItem(int, class ItemStack const&) = 0;
    virtual void                                setItemWithForceBalance(int, class ItemStack const&, bool);
    virtual void                                removeItem(int, int);
    virtual void                                removeAllItems(void);
    virtual void                                dropContents(class BlockSource&, class Vec3 const&, bool);
    virtual int                                 getContainerSize() const = 0;
    virtual int                                 getMaxStackSize() const  = 0;
    virtual void                                startOpen(Player&)       = 0;
    virtual void                                stopOpen(Player&)        = 0;
    virtual std::vector<ItemStack>              getSlotCopies() const;
    virtual std::vector<ItemStack const*> const getSlots() const;
    virtual int                                 getItemCount(ItemStack const&) const;
    virtual int                                 findFirstSlotForItem(ItemStack const&) const;
    virtual bool                                canPushInItem(BlockSource&, int, int, ItemInstance const&) const;
    virtual bool                                canPullOutItem(BlockSource&, int, int, ItemInstance const&) const;
    virtual void                                setContainerChanged(int);
    virtual void                                setContainerMoved();
    virtual void                                setCustomName(std::string const&);
    virtual bool                                hasCustomName() const;
    virtual void                                readAdditionalSaveData(CompoundTag const&);
    virtual void                                addAdditionalSaveData(CompoundTag&);
    virtual void                                createTransactionContext(std::function<void(class Container&, int, ItemStack const&, ItemStack const&)>, std::function<void()>);
    virtual void                                initializeContainerContents(class BlockSource&);
    virtual bool                                isEmpty(void) const;

    MCAPI void triggerTransactionChange(int, ItemStack const&, ItemStack const&);
};

static_assert(offsetof(Container, content_change_listeners) == 16);
static_assert(offsetof(Container, content_size_listeners) == 80);
static_assert(offsetof(Container, custom_name) == 184);
static_assert(offsetof(Container, has_custom_name) == 216);

static_assert(sizeof(Container) == 224);