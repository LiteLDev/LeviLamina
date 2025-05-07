#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class ItemStackBase;
// clang-format on

class ExpandoContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3772c4;
    ::ll::UntypedStorage<8, 24> mUnkdede7c;
    ::ll::UntypedStorage<8, 24> mUnk349a86;
    ::ll::UntypedStorage<8, 24> mUnk68ec95;
    ::ll::UntypedStorage<8, 64> mUnkeb5b0e;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpandoContainerModel& operator=(ExpandoContainerModel const&);
    ExpandoContainerModel(ExpandoContainerModel const&);
    ExpandoContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ExpandoContainerModel() /*override*/ = default;

    // vIndex: 0
    virtual void containerContentChanged(int) /*override*/;

    // vIndex: 10
    virtual ::ItemInstance const& getItemInstance(int modelSlot) const /*override*/;

    // vIndex: 25
    virtual void setItemInstance(int, ::ItemInstance const&);

    // vIndex: 12
    virtual bool isItemInstanceBased() const /*override*/;

    // vIndex: 13
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    // vIndex: 8
    virtual ::ItemStack const& getItemStack(int modelSlot) const /*override*/;

    // vIndex: 9
    virtual ::std::vector<::ItemStack> const& getItems() const /*override*/;

    // vIndex: 11
    virtual ::ItemStackBase const& getItemStackBase(int modelSlot) const /*override*/;

    // vIndex: 4
    virtual int getContainerSize() const /*override*/;

    // vIndex: 5
    virtual int getFilteredContainerSize() const /*override*/;

    // vIndex: 17
    virtual ::ContainerExpandStatus getItemExpandStatus(int itemId) const /*override*/;

    // vIndex: 18
    virtual ::std::string const& getItemGroupName(int itemId) const /*override*/;

    // vIndex: 19
    virtual void switchItemExpando(int itemId) /*override*/;

    // vIndex: 26
    virtual void refreshContainer(bool);

    // vIndex: 27
    virtual int getIndexForCreativeItem(::ItemStackBase const&) const;

    // vIndex: 23
    virtual void _init() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
