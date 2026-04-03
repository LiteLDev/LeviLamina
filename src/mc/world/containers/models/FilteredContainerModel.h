#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ExpandoContainerModel.h"
#include "mc/world/containers/models/FilterResult.h"

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
class ItemInstance;
class ItemStackBase;
struct FullContainerName;
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
    // prevent constructor by default
    FilteredContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilteredContainerModel() /*override*/ = default;

    virtual void containerContentChanged(int) /*override*/;

    virtual ::ItemInstance const& getItemInstance(int modelSlot) const /*override*/;

    virtual void setItemInstance(int modelSlot, ::ItemInstance const& item) /*override*/;

    virtual void refreshContainer(bool fullRefresh) /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getFilteredContainerSize() const /*override*/;

    virtual bool isExpanableItemFiltered(int index) const /*override*/;

    virtual int getIndexForCreativeItem(::ItemStackBase const& item) const /*override*/;

    virtual void _init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilteredContainerModel(
        ::FullContainerName const&                                   containerName,
        int                                                          size,
        ::ContainerCategory                                          containerCategory,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry>        creativeItemRegistry,
        bool                                                         doExpandoGroups,
        bool                                                         filter,
        ::std::function<::FilterResult(::ItemInstance const&, bool)> rule
    );

    MCAPI void _refreshContainer(bool fullRefresh);

    MCAPI_C void setFilteringRule(::std::function<::FilterResult(::ItemInstance const&, bool)> rule);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::FullContainerName const&                                   containerName,
        int                                                          size,
        ::ContainerCategory                                          containerCategory,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry>        creativeItemRegistry,
        bool                                                         doExpandoGroups,
        bool                                                         filter,
        ::std::function<::FilterResult(::ItemInstance const&, bool)> rule
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $containerContentChanged(int);

    MCAPI ::ItemInstance const& $getItemInstance(int modelSlot) const;

    MCAPI void $setItemInstance(int modelSlot, ::ItemInstance const& item);

    MCAPI void $refreshContainer(bool fullRefresh);

    MCFOLD int $getContainerSize() const;

    MCFOLD int $getFilteredContainerSize() const;

    MCAPI bool $isExpanableItemFiltered(int index) const;

    MCAPI int $getIndexForCreativeItem(::ItemStackBase const& item) const;

    MCFOLD void $_init();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
