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
#ifdef LL_PLAT_S
    virtual ~ContainerController() = default;
#else // LL_PLAT_C
    virtual ~ContainerController();
#endif

    virtual ::ItemInstance const& getRecipeItem(int) const;

    virtual bool canRemove(int slot, int removeCount) const;

    virtual bool isItemAllowed(::ItemStackBase const& item) const;

    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const;

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
    MCAPI_C int _addItem(::ContainerScreenContext const& context, int modelSlot, int addCount);

    MCFOLD_C bool canConsume(int modelSlot, int removeCount) const;

    MCFOLD_C bool canDestroy(int modelSlot, int removeCount) const;

    MCFOLD_C bool canDrop(int modelSlot, int removeCount) const;

    MCAPI_C ::ItemSetType canSet(
        ::ContainerScreenContext const& context,
        int                             modelSlot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount,
        bool                            allowSwap
    ) const;

    MCAPI_C int
    getAvailableAddCount(::ContainerScreenContext const& context, int modelSlot, ::ItemStackBase const& fillItem) const;

    MCAPI_C ::std::string const& getContainerName() const;

    MCAPI_C int getContainerSize() const;

    MCFOLD_C ::ItemInstance const& getItemInstance(int slot) const;

    MCAPI_C ::ItemStack const& getItemStack(int slot) const;

    MCAPI_C ::ItemStackBase const& getItemStackBase(int slot) const;

    MCAPI_C bool isExpandableItemFiltered(int slot) const;

    MCAPI_C bool isItemInstanceBased() const;

    MCAPI_C ::ItemStack removeItem(int slot, int removeCount);

    MCAPI_C bool setItem(
        ::ContainerScreenContext const& context,
        int                             slot,
        ::ItemStack&                    stack,
        ::ItemPlaceType                 type,
        bool                            allowSwap
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::ItemInstance const& $getRecipeItem(int) const;

    MCFOLD bool $canRemove(int slot, int removeCount) const;

    MCFOLD bool $isItemAllowed(::ItemStackBase const& item) const;

    MCAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const& item) const;

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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
