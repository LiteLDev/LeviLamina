#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemAddType.h"
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerController() = default;

#ifdef LL_PLAT_S
    virtual ::ItemInstance const& getRecipeItem(int) const;
#else // LL_PLAT_C
    virtual ::ItemInstance const& getRecipeItem(int slot) const;
#endif

#ifdef LL_PLAT_S
    virtual bool canRemove(int, int) const;
#else // LL_PLAT_C
    virtual bool canRemove(int slot, int removeCount) const;
#endif

#ifdef LL_PLAT_S
    virtual bool isItemAllowed(::ItemStackBase const&) const;
#else // LL_PLAT_C
    virtual bool isItemAllowed(::ItemStackBase const& item) const;
#endif

#ifdef LL_PLAT_S
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;
#else // LL_PLAT_C
    virtual bool isItemFiltered(::Recipes const& recipes, ::ItemStackBase const& item) const;
#endif

#ifdef LL_PLAT_S
    virtual int getBackgroundStyle(int, bool) const;
#else // LL_PLAT_C
    virtual int getBackgroundStyle(int slot, bool inventoryContainsItem) const;
#endif

#ifdef LL_PLAT_S
    virtual ::ItemSetType
    _canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;
#else // LL_PLAT_C
    virtual ::ItemSetType _canSet(
        ::ContainerScreenContext const& context,
        int                             modelSlot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount
    ) const;
#endif

#ifdef LL_PLAT_S
    virtual int _getAvailableSetCount(::ContainerScreenContext const&, int, ::ItemStackBase const&) const;
#else // LL_PLAT_C
    virtual int
    _getAvailableSetCount(::ContainerScreenContext const& context, int modelSlot, ::ItemStackBase const& item) const;
#endif

#ifdef LL_PLAT_S
    virtual bool _canRemove(int, int) const;
#else // LL_PLAT_C
    virtual bool _canRemove(int modelSlot, int removeCount) const;
#endif

    virtual void _onItemChanged(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ContainerController(::std::weak_ptr<::ContainerModel> containerModel, bool shouldDrop);

    MCAPI int _addItem(::ContainerScreenContext const& context, int modelSlot, int addCount);

    MCAPI ::ItemAddType _canAdd(
        ::ContainerScreenContext const& context,
        int                             slot,
        ::ItemStackBase const&          item,
        ::ItemTransferAmount            transferAmount
    ) const;

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

    MCAPI ::std::weak_ptr<::ContainerModel> getContainerModel() const;

    MCAPI ::std::string const& getContainerName() const;

    MCAPI int getContainerSize() const;

    MCFOLD ::ItemInstance const& getItemInstance(int slot) const;

    MCAPI ::ItemStack const& getItemStack(int slot) const;

    MCAPI ::ItemStackBase const& getItemStackBase(int slot) const;

    MCAPI bool isExpandableItemFiltered(int slot) const;

    MCAPI bool isItemInstanceBased() const;

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
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::weak_ptr<::ContainerModel> containerModel, bool shouldDrop);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::ItemInstance const& $getRecipeItem(int slot) const;

    MCAPI bool $canRemove(int slot, int removeCount) const;

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

    MCFOLD void $_onItemChanged(int);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
