#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"

class ContainerModel : public ::ContainerContentChangeListener {
public:
    // prevent constructor by default
    ContainerModel& operator=(ContainerModel const&);
    ContainerModel(ContainerModel const&);
    ContainerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void containerContentChanged(int slot);

    // vIndex: 1
    virtual ~ContainerModel();

    // vIndex: 2
    virtual void postInit();

    // vIndex: 3
    virtual void releaseResources();

    // vIndex: 4
    virtual int getContainerSize() const;

    // vIndex: 5
    virtual int getFilteredContainerSize() const;

    // vIndex: 6
    virtual void tick(int selectedSlot);

    // vIndex: 7
    virtual class ContainerWeakRef getContainerWeakRef() const;

    // vIndex: 8
    virtual class ItemStack const& getItemStack(int modelSlot) const;

    // vIndex: 9
    virtual std::vector<class ItemStack> const& getItems() const;

    // vIndex: 10
    virtual class ItemInstance const& getItemInstance(int modelSlot) const;

    // vIndex: 11
    virtual class ItemStackBase const& getItemStackBase(int modelSlot) const;

    // vIndex: 12
    virtual bool isItemInstanceBased() const;

    // vIndex: 13
    virtual void setItem(int modelSlot, class ItemStack const& item);

    // vIndex: 14
    virtual bool isValid();

    // vIndex: 15
    virtual bool isItemFiltered(class ItemStackBase const& item) const;

    // vIndex: 16
    virtual bool isExpanableItemFiltered(int index) const;

    // vIndex: 17
    virtual ::ContainerExpandStatus getItemExpandStatus(int itemId) const;

    // vIndex: 18
    virtual std::string const& getItemGroupName(int itemId) const;

    // vIndex: 19
    virtual void switchItemExpando(int itemId);

    // vIndex: 20
    virtual bool isSlotDisabled(int) const;

    // vIndex: 21
    virtual class Container* _getContainer() const;

    // vIndex: 22
    virtual int _getContainerOffset() const;

    // vIndex: 23
    virtual void _init();

    // vIndex: 24
    virtual void _onItemChanged(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    MCAPI ContainerModel(
        ::ContainerEnumName containerName,
        int                 containerSize,
        ::ContainerCategory containerCategory,
        bool                isClientSide
    );

    MCAPI bool _useLegacyTransactions() const;

    MCAPI int getContainerSlot(int modelSlot) const;

    MCAPI int getModelSlot(int containerSlot) const;

    MCAPI bool isContainerSlotInRange(int containerSlot) const;

    MCAPI bool isIntermediaryCategory() const;

    MCAPI void networkUpdateItem(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    MCAPI void
    registerOnContainerChangedCallback(std::function<void(int, class ItemStack const&, class ItemStack const&)> callback
    );

    MCAPI void
    registerPlayerNotificationCallback(std::function<void(int, class ItemStack const&, class ItemStack const&)> callback
    );

    MCAPI void setItemSource(int slot, struct SlotData const& srcSlot);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _notifyPlayer(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _onClientUIItemNetworkChanged(int containerSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        ::ContainerEnumName containerName,
        int                 containerSize,
        ::ContainerCategory containerCategory,
        bool                isClientSide
    );

    MCAPI void dtor$();

    MCAPI class Container* _getContainer$() const;

    MCAPI int _getContainerOffset$() const;

    MCAPI void _init$();

    MCAPI void _onItemChanged$(int modelSlot, class ItemStack const& oldItem, class ItemStack const& newItem);

    MCAPI void containerContentChanged$(int slot);

    MCAPI int getContainerSize$() const;

    MCAPI class ContainerWeakRef getContainerWeakRef$() const;

    MCAPI int getFilteredContainerSize$() const;

    MCAPI ::ContainerExpandStatus getItemExpandStatus$(int itemId) const;

    MCAPI std::string const& getItemGroupName$(int itemId) const;

    MCAPI class ItemInstance const& getItemInstance$(int modelSlot) const;

    MCAPI class ItemStack const& getItemStack$(int modelSlot) const;

    MCAPI class ItemStackBase const& getItemStackBase$(int modelSlot) const;

    MCAPI std::vector<class ItemStack> const& getItems$() const;

    MCAPI bool isExpanableItemFiltered$(int index) const;

    MCAPI bool isItemFiltered$(class ItemStackBase const& item) const;

    MCAPI bool isItemInstanceBased$() const;

    MCAPI bool isSlotDisabled$(int) const;

    MCAPI bool isValid$();

    MCAPI void postInit$();

    MCAPI void releaseResources$();

    MCAPI void setItem$(int modelSlot, class ItemStack const& item);

    MCAPI void switchItemExpando$(int itemId);

    MCAPI void tick$(int selectedSlot);

    // NOLINTEND
};
