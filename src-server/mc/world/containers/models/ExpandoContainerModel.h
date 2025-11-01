#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
class ItemInstance;
class ItemStack;
class ItemStackBase;
struct ExpandoModelElement;
// clang-format on

class ExpandoContainerModel : public ::ContainerModel {
public:
    // ExpandoContainerModel inner types define
    using OnItemExpandedCallback = ::std::function<void(::std::string const&, int, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemInstance, uint>>>      mItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpandoModelElement>>                  mCurrentItems;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry>> mCreativeItemRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpandoModelElement>>                  mExpandedItems;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, int)>> mOnItemExpanded;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ExpandoContainerModel() /*override*/ = default;

    // vIndex: 0
    virtual void containerContentChanged(int) /*override*/;

    // vIndex: 10
    virtual ::ItemInstance const& getItemInstance(int modelSlot) const /*override*/;

    // vIndex: 26
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

    // vIndex: 21
    virtual void refreshContainer(bool) /*override*/;

    // vIndex: 27
    virtual int getIndexForCreativeItem(::ItemStackBase const&) const;

    // vIndex: 24
    virtual void _init() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
