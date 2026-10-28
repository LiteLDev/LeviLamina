#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemPlaceType.h"
#include "mc/world/containers/controllers/ItemSetType.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ContainerScreenContext;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Recipes;
struct ItemTransferAmount;
// clang-format on

class ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerModel>> mContainerModel;
    ::ll::TypedStorage<1, 1, bool>                               mDrop;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerController() = default;

    virtual ::ItemInstance const& getRecipeItem(int index) const;

    virtual bool canRemove(int slot, int removeCount) const;

    virtual bool isItemAllowed(::ItemStackBase const& item) const;

    virtual bool isItemFiltered(::Recipes const& recipes, ::ItemStackBase const& item) const;

    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const;

    virtual ::ItemSetType _canSet(
        ::ContainerScreenContext const& context,
        int                             modelSlot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount
    ) const;

    virtual int
    _getAvailableSetCount(::ContainerScreenContext const& context, int modelSlot, ::ItemStackBase const& item) const;

    virtual bool _canRemove(int modelSlot, int removeCount) const;

    virtual void _onItemChanged(int modelSlot);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD bool canConsume(int modelSlot, int removeCount) const;

    MCFOLD bool canDestroy(int modelSlot, int removeCount) const;

    MCFOLD bool canDrop(int modelSlot, int removeCount) const;

    MCAPI ::ItemSetType canSet(
        ::ContainerScreenContext const& context,
        int                             modelSlot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount,
        bool                            allowSwap
    ) const;

    MCAPI int
    getAvailableAddCount(::ContainerScreenContext const& context, int modelSlot, ::ItemStackBase const& fillItem) const;

    MCAPI int getAvailableAutoPlaceCount(
        ::ContainerScreenContext const& context,
        int                             slot,
        ::ItemStackBase const&          fillItem,
        bool                            allowClobber
    ) const;

    MCAPI ::ItemStack const& getItemStack(int slot) const;

    MCAPI ::ItemStack removeItem(int slot, int removeCount);

    MCAPI bool setItem(
        ::ContainerScreenContext const& context,
        int                             slot,
        ::ItemStack&                    stack,
        ::ItemPlaceType                 type,
        bool                            allowSwap
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::ItemInstance const& $getRecipeItem(int index) const;

    MCFOLD bool $canRemove(int slot, int removeCount) const;

    MCFOLD bool $isItemAllowed(::ItemStackBase const& item) const;

    MCAPI bool $isItemFiltered(::Recipes const& recipes, ::ItemStackBase const& item) const;

    MCFOLD int $getBackgroundStyle(int slot, bool inventoryContainsItem) const;

    MCAPI ::ItemSetType $_canSet(
        ::ContainerScreenContext const& context,
        int                             modelSlot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount
    ) const;

    MCAPI int
    $_getAvailableSetCount(::ContainerScreenContext const& context, int modelSlot, ::ItemStackBase const& item) const;

    MCAPI bool $_canRemove(int modelSlot, int removeCount) const;

    MCFOLD void $_onItemChanged(int modelSlot);
#endif


    // NOLINTEND
};
