#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemSetType.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStackBase;
class Recipes;
struct ItemTransferAmount;
// clang-format on

class ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4c9590;
    ::ll::UntypedStorage<1, 1>  mUnk9c1c1c;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerController& operator=(ContainerController const&);
    ContainerController(ContainerController const&);
    ContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerController();

    // vIndex: 1
    virtual ::ItemInstance const& getRecipeItem(int) const;

    // vIndex: 2
    virtual bool canRemove(int, int) const;

    // vIndex: 3
    virtual bool isItemAllowed(::ItemStackBase const&) const;

    // vIndex: 4
    virtual bool isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;

    // vIndex: 5
    virtual int getBackgroundStyle(int, bool) const;

    // vIndex: 6
    virtual ::ItemSetType
    _canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;

    // vIndex: 7
    virtual int _getAvailableSetCount(::ContainerScreenContext const&, int, ::ItemStackBase const&) const;

    // vIndex: 8
    virtual bool _canRemove(int, int) const;

    // vIndex: 9
    virtual void _onItemChanged(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemInstance const& $getRecipeItem(int) const;

    MCAPI bool $canRemove(int, int) const;

    MCAPI bool $isItemAllowed(::ItemStackBase const&) const;

    MCAPI bool $isItemFiltered(::Recipes const&, ::ItemStackBase const&) const;

    MCAPI int $getBackgroundStyle(int, bool) const;

    MCAPI ::ItemSetType
    $_canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;

    MCAPI int $_getAvailableSetCount(::ContainerScreenContext const&, int, ::ItemStackBase const&) const;

    MCAPI bool $_canRemove(int, int) const;

    MCAPI void $_onItemChanged(int);
    // NOLINTEND
};
