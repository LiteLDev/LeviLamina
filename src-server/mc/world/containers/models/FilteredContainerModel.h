#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ExpandoContainerModel.h"
#include "mc/world/containers/models/FilterResult.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStackBase;
// clang-format on

class FilteredContainerModel : public ::ExpandoContainerModel {
public:
    // FilteredContainerModel inner types define
    using FilterFunction = ::std::function<::FilterResult(::ItemInstance const&, bool)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mDoExpandoGroups;
    ::ll::TypedStorage<1, 1, bool>                                              mIsFiltering;
    ::ll::TypedStorage<4, 4, int>                                               mFilteredItemCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemInstance, uint>>> mSavedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemInstance, uint>>> mActiveFilteredExpandableSetHeads;
    ::ll::TypedStorage<8, 64, ::std::function<::FilterResult(::ItemInstance const&, bool)>> mFilterRule;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~FilteredContainerModel() /*override*/ = default;

    // vIndex: 0
    virtual void containerContentChanged(int) /*override*/;

    // vIndex: 10
    virtual ::ItemInstance const& getItemInstance(int modelSlot) const /*override*/;

    // vIndex: 26
    virtual void setItemInstance(int, ::ItemInstance const&) /*override*/;

    // vIndex: 21
    virtual void refreshContainer(bool) /*override*/;

    // vIndex: 4
    virtual int getContainerSize() const /*override*/;

    // vIndex: 5
    virtual int getFilteredContainerSize() const /*override*/;

    // vIndex: 16
    virtual bool isExpanableItemFiltered(int index) const /*override*/;

    // vIndex: 27
    virtual int getIndexForCreativeItem(::ItemStackBase const&) const /*override*/;

    // vIndex: 24
    virtual void _init() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
