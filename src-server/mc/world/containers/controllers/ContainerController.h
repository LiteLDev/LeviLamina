#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemSetType.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
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
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerModel>> mContainerModel;
    ::ll::TypedStorage<1, 1, bool> mDrop;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerController() = default;

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
    virtual ::ItemSetType _canSet(::ContainerScreenContext const&, int, ::ItemStackBase const&, ::ItemTransferAmount) const;

    // vIndex: 7
    virtual int _getAvailableSetCount(::ContainerScreenContext const&, int, ::ItemStackBase const&) const;

    // vIndex: 8
    virtual bool _canRemove(int, int) const;

    // vIndex: 9
    virtual void _onItemChanged(int);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
