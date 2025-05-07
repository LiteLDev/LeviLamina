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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk57811c;
    ::ll::UntypedStorage<1, 1>  mUnk46ae6f;
    ::ll::UntypedStorage<4, 4>  mUnkb73c96;
    ::ll::UntypedStorage<8, 24> mUnke78c25;
    ::ll::UntypedStorage<8, 24> mUnkd626b7;
    ::ll::UntypedStorage<8, 64> mUnk654fdf;
    // NOLINTEND

public:
    // prevent constructor by default
    FilteredContainerModel& operator=(FilteredContainerModel const&);
    FilteredContainerModel(FilteredContainerModel const&);
    FilteredContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~FilteredContainerModel() /*override*/ = default;

    // vIndex: 0
    virtual void containerContentChanged(int) /*override*/;

    // vIndex: 10
    virtual ::ItemInstance const& getItemInstance(int modelSlot) const /*override*/;

    // vIndex: 25
    virtual void setItemInstance(int, ::ItemInstance const&) /*override*/;

    // vIndex: 26
    virtual void refreshContainer(bool) /*override*/;

    // vIndex: 4
    virtual int getContainerSize() const /*override*/;

    // vIndex: 5
    virtual int getFilteredContainerSize() const /*override*/;

    // vIndex: 16
    virtual bool isExpanableItemFiltered(int index) const /*override*/;

    // vIndex: 27
    virtual int getIndexForCreativeItem(::ItemStackBase const&) const /*override*/;

    // vIndex: 23
    virtual void _init() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
